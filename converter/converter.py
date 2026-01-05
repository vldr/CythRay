import json

with open('raylib_api.json', 'r') as file:
    data = json.load(file)

def generate_header():
    print("#include <string.h>")
    print("#include <stdio.h>")
    print("#include <stdbool.h>")
    print("#include <stddef.h>")
    print("#include <raylib.h>")
    print("#include <jit.h>")
    print()

    for function in data["functions"]:
        failure = False
        buffer = "static "

        if function["returnType"] == "void":
            buffer += "void"
        elif function["returnType"] == "int":
            buffer += "int"
        elif function["returnType"] == "unsigned int":
            buffer += "unsigned int"
        elif function["returnType"] == "float":
            buffer += "float"
        elif function["returnType"] == "double":
            buffer += "float"
        elif function["returnType"] == "bool":
            buffer += "bool"
        elif function["returnType"] == "const char *":
            buffer += "String*"
        elif function["returnType"] == "char *":
            buffer += "Array<char> *"
        elif "*" in function["returnType"]:
            buffer += function["returnType"]
        else:
            buffer += function["returnType"] + "*"

        buffer += " cyth"
        buffer += function["name"]
        buffer += "("

        if "params" in function:
            for i, param in enumerate(function["params"]):
                if param["type"] == "int":
                    buffer += "int"
                elif param["type"] == "unsigned int":
                    buffer += "unsigned int"
                elif param["type"] == "float":
                    buffer += "float"
                elif param["type"] == "double":
                    buffer += "float"
                elif param["type"] == "bool":
                    buffer += "bool"
                elif param["type"] == "void":
                    buffer += "void"
                elif param["type"] == "const char *":
                    buffer += "String*"
                elif param["type"] == "char *":
                    buffer += "Array<char> *"
                elif "*" in param["type"]:
                    buffer += param["type"]
                else:
                    buffer += param["type"] + "*"

                buffer += " "
                buffer += param["name"]
                if i != len(function["params"]) - 1:
                    buffer += ", "

        buffer += ") {\n"
        buffer += "\t"

        if function["returnType"] != "void":
            buffer += function["returnType"] 
            buffer += " _v = "

        buffer += function["name"]
        buffer += "("

        if "params" in function:
            for i, param in enumerate(function["params"]):
                if param["type"] == "const char *":
                    buffer += param["name"]
                    buffer += "->data"
                elif param["type"] == "char *":
                    buffer += param["name"]
                    buffer += "->data"
                elif "..." in param["type"]:
                    failure = True
                    break
                elif "*" in param["type"]:
                    buffer += param["name"]
                elif (
                    param["type"] != "int" and
                    param["type"] != "unsigned int" and
                    param["type"] != "float" and
                    param["type"] != "double" and
                    param["type"] != "bool"
                ):
                    buffer += "*"
                    buffer += param["name"]
                else:
                    buffer += param["name"]
                
                if i != len(function["params"]) - 1:
                    buffer += ", "

        buffer += ");\n"

        if function["returnType"] != "void":
            buffer += "\t"

            if function["returnType"] == "void":
                buffer += "void"
            elif function["returnType"] == "int":
                buffer += "int"
            elif function["returnType"] == "unsigned int":
                buffer += "unsigned int"
            elif function["returnType"] == "float":
                buffer += "float"
            elif function["returnType"] == "double":
                buffer += "float"
            elif function["returnType"] == "bool":
                buffer += "bool"
            elif function["returnType"] == "const char *":
                buffer += "String*"
            elif function["returnType"] == "char *":
                buffer += "Array<char> *"
            elif "*" in function["returnType"]:
                buffer += function["returnType"]
            else:
                buffer += function["returnType"] + "*"

            buffer += " _r = ("

            if function["returnType"] == "void":
                buffer += "void"
            elif function["returnType"] == "int":
                buffer += "int"
            elif function["returnType"] == "unsigned int":
                buffer += "unsigned int"
            elif function["returnType"] == "float":
                buffer += "float"
            elif function["returnType"] == "double":
                buffer += "float"
            elif function["returnType"] == "bool":
                buffer += "bool"
            elif function["returnType"] == "const char *":
                buffer += "String*"
            elif function["returnType"] == "char *":
                buffer += "Array<char> *"
            elif "*" in function["returnType"]:
                buffer += function["returnType"]
            else:
                buffer += function["returnType"] + "*"

            buffer += ")"


            if (
                function["returnType"] == "void" or 
                function["returnType"] == "int" or 
                function["returnType"] == "unsigned int" or 
                function["returnType"] == "float" or 
                function["returnType"] == "double" or 
                function["returnType"] == "bool"
            ):
                buffer += "_v;\n"
            elif function["returnType"] == "const char *":
                buffer += "jit_alloc(1, sizeof(String) + strlen(_v));\n"
                buffer += "\t_r->size = (int)strlen(_v);\n"
                buffer += "\tmemcpy(_r->data, _v, _r->size);\n"
            elif function["returnType"] == "char *":
                buffer += "jit_alloc(1, sizeof(Array<char>));\n"
                buffer += "\t_r->size = (int)strlen(_v);\n"
                buffer += "\t_r->capacity = _r->capacity;\n"
                buffer += "\t_r->data = _v;\n"
            elif "*" in function["returnType"]:
                buffer += "_v;\n"
            else:
                ppp = function["returnType"]
                buffer += f"jit_alloc(1, sizeof({ppp}));\n"
                buffer += "\t*_r = _v;\n"

        if function["returnType"] != "void":
            buffer += "\treturn _r;\n"

        buffer += "}"

        if failure:
            continue


        print(buffer)

def generate_link():
    buffer = "#define jit_set_raylib_functions(_ctx) do { \\\n"
    for function in data["functions"]:
        failure = False
        if "params" in function:
            for i, param in enumerate(function["params"]):
                if "..." in param["type"]:
                    failure = True
                    break

        if failure:
            continue

        name = function["name"]
        buffer += f"  jit_set_function((_ctx), \"raylib.{name[:1].lower() + name[1:]}\", (uintptr_t)cyth{name}); \\\n"
    buffer += "} while (0)"
    print(buffer)

def generate_import():
    print("static const char* PREFIX = \"import \\\"raylib\\\"\\n\"")

    for function in data["functions"]:
        buffer = "\"  "

        if function["returnType"] == "void":
            buffer += "void"
        elif function["returnType"] == "int":
            buffer += "int"
        elif function["returnType"] == "long":
            buffer += "int"
        elif function["returnType"] == "unsigned int":
            buffer += "int"
        elif function["returnType"] == "float":
            buffer += "float"
        elif function["returnType"] == "double":
            buffer += "float"
        elif function["returnType"] == "bool":
            buffer += "bool"
        elif function["returnType"] == "const char *":
            buffer += "string"
        elif function["returnType"] == "Image *":
            buffer += "Image"
        elif function["returnType"] == "Color *":
            buffer += "Color"
        elif function["returnType"] == "char *":
            buffer += "char[]"
        elif "..." in function["returnType"]:
            continue
        elif "*" in function["returnType"]:
            buffer += "any" #function["returnType"].replace("*", "") 
        else:
            buffer += function["returnType"]

        buffer += " "
        buffer += function["name"][:1].lower() + function["name"][1:]
        buffer += "("

        failure = False

        if "params" in function:
            for i, param in enumerate(function["params"]):
                if param["type"] == "int":
                    buffer += "int"
                elif param["type"] == "long":
                    buffer += "int"
                elif param["type"] == "unsigned int":
                    buffer += "int"
                elif param["type"] == "float":
                    buffer += "float"
                elif param["type"] == "double":
                    buffer += "float"
                elif param["type"] == "bool":
                    buffer += "bool"
                elif param["type"] == "void":
                    buffer += "void"
                elif param["type"] == "const char *":
                    buffer += "string"
                elif param["type"] == "Image *":
                    buffer += "Image"
                elif param["type"] == "Color *":
                    buffer += "Color"
                elif param["type"] == "char *":
                    buffer += "char[]"
                elif "..." in param["type"]:
                    failure = True
                    break
                elif "*" in param["type"]:
                    buffer += "any" #param["type"].replace("*", "") 
                else:
                    buffer += param["type"]

                buffer += " "
                buffer += param["name"]
                if i != len(function["params"]) - 1:
                    buffer += ", "

        buffer += ")\\n\""

        if failure:
            continue

        print(buffer)

    structs = ("""class TraceLogCallback
class LoadFileDataCallback
class SaveFileDataCallback
class LoadFileTextCallback
class SaveFileTextCallback
class AudioCallback

class Vector2
  float x
  float y

class Vector3
  float x
  float y
  float z

class Vector4
  float x
  float y
  float z
  float w
  
class Quaternion
  float x
  float y
  float z
  float w

class Matrix
  float m0
  float m4
  float m8
  float m12
  float m1
  float m5
  float m9
  float m13
  float m2
  float m6
  float m10
  float m14
  float m3
  float m7
  float m11
  float m15

class Color
  char r
  char g
  char b
  char a

  void __init__(int r, int g, int b, int a)
    this.r = (char)r
    this.g = (char)g
    this.b = (char)b
    this.a = (char)a

class Rectangle
  float x
  float y
  float width
  float height

class Image
  any data
  int width
  int height
  int mipmaps
  int format

class Texture
  int id
  int width
  int height
  int mipmaps
  int format
  
class Texture2D
  int id
  int width
  int height
  int mipmaps
  int format

class TextureCubemap
  int id
  int width
  int height
  int mipmaps
  int format

class RenderTexture
  int id
  Texture texture
  Texture depth
 
class RenderTexture2D
  int id
  Texture texture
  Texture depth

class NPatchInfo
  Rectangle source
  int left
  int top
  int right
  int bottom
  int layout

class GlyphInfo
  int value
  int offsetX
  int offsetY
  int advanceX
  Image image

class Font
  int baseSize
  int glyphCount
  int glyphPadding
  Texture2D texture
  any recs
  any glyphs

class Camera3D
  Vector3 position
  Vector3 target
  Vector3 up
  float fovy
  int projection

class Camera2D
  Vector2 offset
  Vector2 target
  float rotation
  float zoom
  
class Camera
  Vector3 position
  Vector3 target
  Vector3 up
  float fovy
  int projection

class Mesh
  int vertexCount
  int triangleCount
  any vertices
  any texcoords
  any texcoords2
  any normals
  any tangents
  any colors
  any indices
  any animVertices
  any animNormals
  any boneIds
  any boneWeights
  any boneMatrices
  int boneCount
  int vaoId
  any vboId

class Shader
  int id
  any locs

class MaterialMap
  Texture2D texture
  Color color
  float value

class Material
  Shader shader
  any maps
  any params

class Transform
  Vector3 translation
  Quaternion rotation
  Vector3 scale

class BoneInfo
  any name
  int parent

class Model
  Matrix transform
  int meshCount
  int materialCount
  any meshes
  any materials
  any meshMaterial
  int boneCount
  any bones
  any bindPose

class ModelAnimation
  int boneCount
  int frameCount
  any bones
  any framePoses
  any name

class Ray
  Vector3 position
  Vector3 direction

class RayCollision
  bool hit
  float distance
  Vector3 point
  Vector3 normal

class BoundingBox
  Vector3 min
  Vector3 max

class Wave
  int frameCount
  int sampleRate
  int sampleSize
  int channels
  any data

class AudioStream
  any buffer
  any processor
  int sampleRate
  int sampleSize
  int channels

class Sound
  AudioStream stream
  int frameCount

class Music
  AudioStream stream
  int frameCount
  bool looping
  int ctxType
  any ctxData

class VrDeviceInfo
  int hResolution
  int vResolution
  float hScreenSize
  float vScreenSize
  float eyeToScreenDistance
  float lensSeparationDistance
  float interpupillaryDistance
  any lensDistortionValues
  any chromaAbCorrection

class VrStereoConfig
  any projection
  any viewOffset
  any leftLensCenter
  any rightLensCenter
  any leftScreenCenter
  any rightScreenCenter
  any scale
  any scaleIn

class FilePathList
  int capacity
  int count
  any paths

class AutomationEvent
  int frame
  int type
  any params

class AutomationEventList
  int capacity
  int count
  any events
""").splitlines()

    for line in structs:
        if line.strip():
            print(f"\"{line}\\n\"")

    print(";")
    
  
def generate_structs():
    for struct in data["structs"]:
        buffer = "class "
        buffer += struct["name"]
        buffer += "\n"

        for i, field in enumerate(struct["fields"]):
            buffer += "  "

            if field["type"] == "void":
                buffer += "void"
            elif field["type"] == "int":
                buffer += "int"
            elif field["type"] == "unsigned int":
                buffer += "int"
            elif field["type"] == "unsigned char":
                buffer += "char"
            elif field["type"] == "float":
                buffer += "float"
            elif field["type"] == "double":
                buffer += "float"
            elif field["type"] == "bool":
                buffer += "bool"
            elif field["type"] == "const char *":
                buffer += "string"
            elif "*" in field["type"]:
                buffer += field["type"].replace("*", "") 
            # elif "[" in field["type"]:
            #     buffer += "any"
            else:
                buffer += field["type"]

            buffer += " "
            buffer += field["name"]
            buffer += "\n"

        print(buffer)    

generate_header()
generate_link()
generate_import()