void stroke(float r, float g, float b)
  color.r = (char)min((int)(r * 255), 255)
  color.g = (char)min((int)(g * 255), 255)
  color.b = (char)min((int)(b * 255), 255)

void vertex(int x, int y)
  x += 320
  y *= -1
  y += 320
 
  imageDrawPixel(image, x, y, color)
  imageDrawPixel(image, x+1, y+1, color)

float max(float a, float b)
  return a > b ? a : b

int min(int a, int b)
  return a < b ? a : b

float min(float a, float b)
  return a < b ? a : b

float max(float a, float b, float c)
  return a > b ? (a > c ? a : c) : (b > c ? b : c)

float min(float a, float b, float c)
  return a < b ? (a < c ? a : c) : (b < c ? b : c)
    
float abs(float a)
  return a < 0 ? -a : a
  
T[] copyArray<T>(T[] array)
  T[] newarray
  newarray.reserve(array.length)

  for T elem in array
    newarray[it] = elem

  return newarray

class Triangle
  void __init__(float[] V1, float[] V2, float[] V3)
    v1 = copyArray<float>(V1)
    v2 = copyArray<float>(V2)
    v3 = copyArray<float>(V3)

  float[] v1
  float[] v2
  float[] v3

  float[] pv1
  float[] pv2
  float[] pv3

  float[] e1
  float[] e2
  float[] e3
  
  float[] centerPoint
  float[] normal
  
  float[] c

  float[] phong
    
  float[] phongV1
  float[] phongV2
  float[] phongV3

int X = 0 
int Y = 1 
int Z = 2
int R = 0 
int G = 1 
int B = 2

int SPHERE_SIZE = 200

float PI = 3.14
float TWO_PI = PI * 2

float[] LIGHT = [200, 200, 350]
float[] EYE = [0, 0, 600]

float[] OUTLINE_COLOR = [1.0, 0.2, 0.5]
float[] FILL_COLOR    = [1.0, 1.0, 1.0] 

float[] MATERIAL = [0.1, 0.8, 0.8]
int M_AMBIENT = 0 
int M_DIFFUSE = 1 
int M_SPECULAR = 2  
float PHONG_SPECULAR = 30
float PERSPECTIVE = 0.002 

Triangle[] sphereList = makeSphere(SPHERE_SIZE, 10)
Triangle[] rotatedList
rotatedList.reserve(sphereList.length)

float theta = 0.0
float delta = 0.01

Triangle[] makeSphere(int radius, int divisions)
    float[][][] sphereVerticies
    sphereVerticies.reserve(divisions + 1, divisions + 1, 0)
    
    for int i = 0; i <= divisions; i += 1
      for int j = 0; j <= divisions; j += 1
        float v = (PI / divisions) * i
        float u = (TWO_PI / divisions) * j
        
        float x = radius * sin(v) * sin(u)
        float y = radius * cos(v)
        float z = radius * sin(v) * cos(u)
        
        sphereVerticies[i][j] = [ x, y, z ]
     
     
    Triangle[] triangles
    triangles.reserve((divisions * divisions) + (divisions * divisions))
    int count = 0
   
    for int verticalOffset = 0; verticalOffset < divisions; verticalOffset += 1
      for int horizontalOffset = 0; horizontalOffset < divisions; horizontalOffset += 1
        float[] v1 = sphereVerticies[verticalOffset][horizontalOffset]
        float[] v2 = sphereVerticies[verticalOffset][(horizontalOffset + 1)]
        float[] v3 = sphereVerticies[(verticalOffset + 1)][(horizontalOffset + 1)]
        float[] v4 = sphereVerticies[(verticalOffset + 1)][horizontalOffset]
    
        triangles[count] = Triangle(v1, v4, v3)
        count += 1

        triangles[count] = Triangle(v1, v3, v2)
        count += 1

    return triangles

Triangle setupTriangle(Triangle t)
  t.e1 = subtract(t.v2, t.v1)
  t.e2 = subtract(t.v3, t.v2)
  t.e3 = subtract(t.v1, t.v3)
  
  t.centerPoint = [ 
    (t.v1[0] + t.v2[0] + t.v3[0]) / 3, 
    (t.v1[1] + t.v2[1] + t.v3[1]) / 3,
    (t.v1[2] + t.v2[2] + t.v3[2]) / 3
  ]
  
  float[] V1toCenterPointEdge = subtract(t.centerPoint, t.v1)
  t.normal = normalize(cross3(t.e1, V1toCenterPointEdge))
  
  t.c = FILL_COLOR
    
  return t

float[] project(float[] v)
  float adjZ = v[Z] - EYE[Z]  
  if adjZ > 0
    return []

  adjZ *=- 1 
  float px = v[X] / (adjZ * PERSPECTIVE)
  float py = v[Y] / (adjZ * PERSPECTIVE)

  return [px, py]

void rotateVertex(float[] v, float theta)
  float rx = v[X] * cos(theta) - v[Z] * sin(theta)
  float rz = v[X] * sin(theta) + v[Z] * cos(theta)

  v[X] = rx 
  v[Z] = rz

void drawSphereP(Triangle[] sphere, int lighting, int shading)
  for Triangle t in sphere
    if not t
      continue

    t.pv1 = project(t.v1) 
    t.pv2 = project(t.v2)
    t.pv3 = project(t.v3)
    
    if not (not t.pv1 or not t.pv2 or not t.pv3) 
      draw2DTriangle(t, lighting, shading)

void draw2DTriangle(Triangle t, int lighting, int shading)
    float[] pe1 = subtract2(t.pv2, t.pv1)
    float[] pe2 = subtract2(t.pv3, t.pv2)

    float cross2d = cross2(pe1, pe2)
    
    if (cross2d < 0)
      return
    
    if (cross2d / 2 < 1)
      return

    if lighting == LIGHTING_PHONG_FACE
      t.phong = phong(t.centerPoint, t.normal, EYE, LIGHT, MATERIAL, FILL_COLOR, PHONG_SPECULAR)
      t.c = [ t.phong[0], t.phong[1], t.phong[2] ]

    else if lighting == LIGHTING_PHONG_VERTEX
      float[] origin = [ 0, 0, 0 ]
      float[] normalV1 = normalize(subtract(t.v1, origin))
      float[] normalV2 = normalize(subtract(t.v2, origin))
      float[] normalV3 = normalize(subtract(t.v3, origin))
      
      t.phongV1 = phong(t.v1, normalV1, EYE, LIGHT, MATERIAL, FILL_COLOR, PHONG_SPECULAR)
      t.phongV2 = phong(t.v2, normalV2, EYE, LIGHT, MATERIAL, FILL_COLOR, PHONG_SPECULAR)
      t.phongV3 = phong(t.v3, normalV3, EYE, LIGHT, MATERIAL, FILL_COLOR, PHONG_SPECULAR)
 
      float[] avgPhong = [ 
          (t.phongV1[0] + t.phongV2[0] + t.phongV3[0]) / 3, 
          (t.phongV1[1] + t.phongV2[1] + t.phongV3[1]) / 3, 
          (t.phongV1[2] + t.phongV2[2] + t.phongV3[2]) / 3  
      ]
      
      t.c = [ avgPhong[0], avgPhong[1], avgPhong[2] ]
    else 
      t.c = FILL_COLOR
    
    fillTriangle(t, shading)
    
    if doOutline
      stroke(OUTLINE_COLOR[0], OUTLINE_COLOR[1], OUTLINE_COLOR[2])
      bresLine((int)t.pv1[0], (int)t.pv1[1], (int)t.pv2[0], (int)t.pv2[1])
      bresLine((int)t.pv2[0], (int)t.pv2[1], (int)t.pv3[0], (int)t.pv3[1])
      bresLine((int)t.pv3[0], (int)t.pv3[1], (int)t.pv1[0], (int)t.pv1[1])
    
    if normals
      float[] origin = [ 0, 0, 0 ]
      float[] normalV1 = normalize(subtract(t.v1, origin))
      float[] normalV2 = normalize(subtract(t.v2, origin))
      float[] normalV3 = normalize(subtract(t.v3, origin))
      
      stroke(255, 255, 0)
      drawNormal(t.v1, normalV1)
      drawNormal(t.v2, normalV2)
      drawNormal(t.v3, normalV3)
      
      stroke(0, 255, 255)
      drawNormal(t.centerPoint, t.normal)

void drawNormal(float[] p, float[] n)
  float[] offsetNormal = mult(n, 20)
  float[] endPoint = add(p, offsetNormal)
  
  float[] projectedCenterPoint = project(p)
  float[] projectedEndPoint = project(endPoint)
  
  if projectedCenterPoint and projectedEndPoint
    bresLine(
      (int)projectedCenterPoint[0], 
      (int)projectedCenterPoint[1], 
      (int)projectedEndPoint[0], 
      (int)projectedEndPoint[1]
    )

void fillTriangle(Triangle t, int shading)
  if (shading == SHADING_NONE)
    return

  float Xmin = min(t.pv1[0], t.pv2[0], t.pv3[0])
  float Xmax = max(t.pv1[0], t.pv2[0], t.pv3[0])
  
  float Ymin = min(t.pv1[1], t.pv2[1], t.pv3[1])
  float Ymax = max(t.pv1[1], t.pv2[1], t.pv3[1])
    
  for int y = (int)Ymin; y <= (int)Ymax; y += 1
      for int x = (int)Xmin; x <= (int)Xmax; x += 1
        float[] P = [ (float)x, (float)y ]
        float[] E1 = subtract2(t.pv2, t.pv1)
        float[] E2 = subtract2(t.pv3, t.pv2)
        float[] E3 = subtract2(t.pv1, t.pv3)
        
        float[] A1 = subtract2(P, t.pv1)
        float[] A2 = subtract2(P, t.pv2)
        float[] A3 = subtract2(P, t.pv3)

        float first = cross2(E1, A1)
        float second = cross2(E2, A2)
        float third = cross2(E3, A3)
        
        if (first > 0 and second > 0 and third > 0) or (first < 0 and second < 0 and third < 0)
          if shading == SHADING_BARYCENTRIC
            float triangleArea = cross2(E1, E2) / 2
            float w = (first / 2) / triangleArea
            float u = (second / 2) / triangleArea
            float v = (third / 2) / triangleArea

            t.c = [u,v,w]
          else if shading == SHADING_GOURAUD
            float triangleArea = cross2(E1, E2) / 2
            float w = (first / 2) / triangleArea
            float u = (second / 2) / triangleArea
            float v = (third / 2) / triangleArea
            
            if lighting == LIGHTING_PHONG_VERTEX
              t.c = add(add(mult(t.phongV1, u), mult(t.phongV2, v)), mult(t.phongV3, w))
            else
              t.c = add(add(mult(t.c, u), mult(t.c, v)), mult(t.c, w))
          else if shading == SHADING_PHONG
            float triangleArea = cross2(E1, E2) / 2
            float w = (first / 2) / triangleArea
            float u = (second / 2) / triangleArea
            float v = (third / 2) / triangleArea
            
            float[] uV1 = mult(t.v1, u)
            float[] vV2 = mult(t.v2, v)
            float[] wV3 = mult(t.v3, w)
            
            float[] P3 = add(add(uV1, vV2), wV3)
            
            float[] origin = [ 0, 0, 0 ]
            float[] normal = normalize(subtract(P3, origin))
          
            t.c = phong(P3, normal, EYE, LIGHT, MATERIAL, FILL_COLOR, PHONG_SPECULAR)

          stroke(t.c[0], t.c[1], t.c[2])
          vertex(x, y)

float[] phong(float[] p, float[] N, float[] eye, float[] light, float[] material, float[] fillColor, float s)
  float[] L = normalize(subtract(light, p))
  float[] V = normalize(subtract(eye, p))
  
  float[] R = subtract(
      mult(
          N, 
          2 * max(dot(N, L), 0)
      ), 
      L
  )
  
  float ma = material[0]
  float md = material[1]
  float ms = material[2]
  
  float[] Ambient = mult(fillColor, ma)
  float[] Diffuse = mult(mult(fillColor, max(dot(L, N), 0)), md)
  
  float Sprime = (float)pow(max(dot(R, V), 0), s)
  float[] Specular = [ Sprime, Sprime, Sprime ]
  Specular = mult(Specular, ms)

  float[] shading = add(add(Ambient, Diffuse), Specular)
  return shading

void bresLine(int fromX, int fromY, int toX, int toY)
  float error = 0.5
  
  float deltaX = (float)(toX - fromX)
  float deltaY = (float)(toY - fromY)
  
  int X = fromX
  int Y = fromY
  
  int stepX = 1
  int stepY = 1
  
  if (deltaX < 0)
    deltaX *= -1
    stepX *= -1
  
  if (deltaY < 0)
    deltaY *= -1
    stepY *= -1
  
  if abs(deltaX) > abs(deltaY)
    float slope = abs(deltaY / deltaX)
  
    while toX - X != 0
        vertex(X, Y)
        
        X += stepX
        error += slope
        
        if (error >= 0.5)
          Y += stepY
          error -= 1
        
  else
    float slope = abs(deltaX / deltaY)
    
    while toY - Y != 0
        vertex(X, Y)

        Y += stepY
        
        error += slope
        
        if error >= 0.5
          X += stepX
          error -= 1

void rotateSphere(Triangle[] original, Triangle[] rotated, float theta)
  for int i = 0; i < original.length; i += 1
    if (rotated[i] == null)
      rotated[i] = setupTriangle(Triangle(original[i].v1, original[i].v2, original[i].v3))
    else
      rotated[i].v1 = copyArray<float>(original[i].v1)
      rotated[i].v2 = copyArray<float>(original[i].v2)
      rotated[i].v3 = copyArray<float>(original[i].v3)

      rotateVertex(rotated[i].v1, theta)
      rotateVertex(rotated[i].v2, theta)
      rotateVertex(rotated[i].v3, theta)
      setupTriangle(rotated[i])
    
int KEY_LIGHTING = 76 
int KEY_NORMALS = 78 
int KEY_OUTLINE = 79 
int KEY_ROTATE = 82 
int KEY_SHADING = 83

int LIGHTING_FLAT
int LIGHTING_PHONG_FACE = 1
int LIGHTING_PHONG_VERTEX = 2

int lighting = LIGHTING_PHONG_VERTEX

int SHADING_NONE = 0
int SHADING_BARYCENTRIC = 1
int SHADING_FLAT = 2
int SHADING_GOURAUD = 3
int SHADING_PHONG = 4

int shading = SHADING_NONE

bool doOutline = true
bool rotate = false
bool normals = false

void keyPressed()
  bool keyPressed

  if isKeyPressed(KEY_SHADING)
    shading = (shading + 1) % 5
    keyPressed = true

  if isKeyPressed(KEY_LIGHTING)
    lighting = (lighting + 1) % 3
    keyPressed = true
  
  if isKeyPressed(KEY_OUTLINE)
    doOutline = !doOutline
    keyPressed = true

  if isKeyPressed(KEY_ROTATE)
    rotate = !rotate
    keyPressed = true

  if isKeyPressed(KEY_NORMALS)
    normals = !normals
    keyPressed = true

void drawSettings()
  string[] shaders = [
    "SHADING_NONE",
    "SHADING_BARYCENTRIC",
    "SHADING_FLAT",
    "SHADING_GOURAUD",
    "SHADING_PHONG"
  ]

  string[] lights = [
    "LIGHTING_FLAT",
    "LIGHTING_PHONG_FACE",
    "LIGHTING_PHONG_VERTEX"
  ]

  string msg = (
    "Shading: " + shaders[shading] + "\n" +
    "Lighting: " + lights[lighting] + "\n" +
    "Outline: " + doOutline + "\n" + 
    "FPS: " + getFPS()
  )

  drawText(msg, 5, 5, 18, Color(255,255,255,255))

float cross2(float[] p, float[] q)
  return p[0] * q[1] - p[1] * q[0]

float[] cross3(float[] vect_A, float[] vect_B)
    return [
      vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1], 
      vect_A[2] * vect_B[0] - vect_A[0] * vect_B[2],
      vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0]
    ]

float[] mult(float[] v, float factor)
  return [ v[0] * factor, v[1] * factor, v[2] * factor ]

float[] normalize(float[] v)
  float norm = ((v[0] * v[0]) + (v[1] * v[1]) + (v[2] * v[2])).sqrt()
  return [ v[0] / norm, v[1] / norm, v[2] / norm ]

float dot(float[] p, float[] q)
  return p[0]*q[0] + p[1]*q[1] + p[2]*q[2]

float[] add(float[] v1, float[] v2)
  return [ 
    v1[0] + v2[0], 
    v1[1] + v2[1], 
    v1[2] + v2[2] 
  ]

float[] subtract(float[] v1, float[] v2)
  return [
    v1[0] - v2[0], 
    v1[1] - v2[1], 
    v1[2] - v2[2] 
  ]

float[] subtract2(float[] v1, float[] v2)
  return [ 
    v1[0] - v2[0], 
    v1[1] - v2[1]
  ]

bool vequals(float[] v1, float[] v2)
  return v1[0] == v2[0] and v1[1] == v2[1] and v1[2] == v2[2]

bool vequals2(float[] v1, float[] v2)
  return v1[0] == v2[0] and v1[1] == v2[1]

Color color = Color(0,0,0,255)
Image image = genImageColor(640, 640, color)

initWindow(image.width, image.height, "Sphere")

Texture2D tex = loadTextureFromImage(image)

Color black = Color(0,0,0,255)
Color white = Color(255,255,255,255)

while not windowShouldClose()
  if rotate
    theta += delta
    while theta > PI*2
      theta -= PI*2

  imageClearBackground(image, black)

  keyPressed()
  rotateSphere(sphereList, rotatedList, theta)
  drawSphereP(rotatedList, lighting, shading)

  updateTexture(tex, image.data)

  beginDrawing()
  drawTexture(tex, 0, 0, white)
  drawSettings()
  endDrawing()

unloadTexture(tex)
