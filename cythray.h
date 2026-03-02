#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <raylib.h>
#include <cyth.h>

static void cythInitWindow(int width, int height, CyString* title) {
	InitWindow(width, height, title->data);
}
static void cythCloseWindow() {
	CloseWindow();
}
static bool cythWindowShouldClose() {
	bool _v = WindowShouldClose();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowReady() {
	bool _v = IsWindowReady();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowFullscreen() {
	bool _v = IsWindowFullscreen();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowHidden() {
	bool _v = IsWindowHidden();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowMinimized() {
	bool _v = IsWindowMinimized();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowMaximized() {
	bool _v = IsWindowMaximized();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowFocused() {
	bool _v = IsWindowFocused();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowResized() {
	bool _v = IsWindowResized();
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsWindowState(unsigned int flag) {
	bool _v = IsWindowState(flag);
	bool _r = (bool)_v;
	return _r;
}
static void cythSetWindowState(unsigned int flags) {
	SetWindowState(flags);
}
static void cythClearWindowState(unsigned int flags) {
	ClearWindowState(flags);
}
static void cythToggleFullscreen() {
	ToggleFullscreen();
}
static void cythToggleBorderlessWindowed() {
	ToggleBorderlessWindowed();
}
static void cythMaximizeWindow() {
	MaximizeWindow();
}
static void cythMinimizeWindow() {
	MinimizeWindow();
}
static void cythRestoreWindow() {
	RestoreWindow();
}
static void cythSetWindowIcon(Image* image) {
	SetWindowIcon(*image);
}
static void cythSetWindowIcons(Image * images, int count) {
	SetWindowIcons(images, count);
}
static void cythSetWindowTitle(CyString* title) {
	SetWindowTitle(title->data);
}
static void cythSetWindowPosition(int x, int y) {
	SetWindowPosition(x, y);
}
static void cythSetWindowMonitor(int monitor) {
	SetWindowMonitor(monitor);
}
static void cythSetWindowMinSize(int width, int height) {
	SetWindowMinSize(width, height);
}
static void cythSetWindowMaxSize(int width, int height) {
	SetWindowMaxSize(width, height);
}
static void cythSetWindowSize(int width, int height) {
	SetWindowSize(width, height);
}
static void cythSetWindowOpacity(float opacity) {
	SetWindowOpacity(opacity);
}
static void cythSetWindowFocused() {
	SetWindowFocused();
}
static void * cythGetWindowHandle() {
	void * _v = GetWindowHandle();
	void * _r = (void *)_v;
	return _r;
}
static int cythGetScreenWidth() {
	int _v = GetScreenWidth();
	int _r = (int)_v;
	return _r;
}
static int cythGetScreenHeight() {
	int _v = GetScreenHeight();
	int _r = (int)_v;
	return _r;
}
static int cythGetRenderWidth() {
	int _v = GetRenderWidth();
	int _r = (int)_v;
	return _r;
}
static int cythGetRenderHeight() {
	int _v = GetRenderHeight();
	int _r = (int)_v;
	return _r;
}
static int cythGetMonitorCount() {
	int _v = GetMonitorCount();
	int _r = (int)_v;
	return _r;
}
static int cythGetCurrentMonitor() {
	int _v = GetCurrentMonitor();
	int _r = (int)_v;
	return _r;
}
static Vector2* cythGetMonitorPosition(int monitor) {
	Vector2 _v = GetMonitorPosition(monitor);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static int cythGetMonitorWidth(int monitor) {
	int _v = GetMonitorWidth(monitor);
	int _r = (int)_v;
	return _r;
}
static int cythGetMonitorHeight(int monitor) {
	int _v = GetMonitorHeight(monitor);
	int _r = (int)_v;
	return _r;
}
static int cythGetMonitorPhysicalWidth(int monitor) {
	int _v = GetMonitorPhysicalWidth(monitor);
	int _r = (int)_v;
	return _r;
}
static int cythGetMonitorPhysicalHeight(int monitor) {
	int _v = GetMonitorPhysicalHeight(monitor);
	int _r = (int)_v;
	return _r;
}
static int cythGetMonitorRefreshRate(int monitor) {
	int _v = GetMonitorRefreshRate(monitor);
	int _r = (int)_v;
	return _r;
}
static Vector2* cythGetWindowPosition() {
	Vector2 _v = GetWindowPosition();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWindowScaleDPI() {
	Vector2 _v = GetWindowScaleDPI();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static CyString* cythGetMonitorName(int monitor) {
	const char * _v = GetMonitorName(monitor);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static void cythSetClipboardText(CyString* text) {
	SetClipboardText(text->data);
}
static CyString* cythGetClipboardText() {
	const char * _v = GetClipboardText();
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static Image* cythGetClipboardImage() {
	Image _v = GetClipboardImage();
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static void cythEnableEventWaiting() {
	EnableEventWaiting();
}
static void cythDisableEventWaiting() {
	DisableEventWaiting();
}
static void cythShowCursor() {
	ShowCursor();
}
static void cythHideCursor() {
	HideCursor();
}
static bool cythIsCursorHidden() {
	bool _v = IsCursorHidden();
	bool _r = (bool)_v;
	return _r;
}
static void cythEnableCursor() {
	EnableCursor();
}
static void cythDisableCursor() {
	DisableCursor();
}
static bool cythIsCursorOnScreen() {
	bool _v = IsCursorOnScreen();
	bool _r = (bool)_v;
	return _r;
}
static void cythClearBackground(Color* color) {
	ClearBackground(*color);
}
static void cythBeginDrawing() {
	BeginDrawing();
}
static void cythEndDrawing() {
	EndDrawing();
}
static void cythBeginMode2D(Camera2D* camera) {
	BeginMode2D(*camera);
}
static void cythEndMode2D() {
	EndMode2D();
}
static void cythBeginMode3D(Camera3D* camera) {
	BeginMode3D(*camera);
}
static void cythEndMode3D() {
	EndMode3D();
}
static void cythBeginTextureMode(RenderTexture2D* target) {
	BeginTextureMode(*target);
}
static void cythEndTextureMode() {
	EndTextureMode();
}
static void cythBeginShaderMode(Shader* shader) {
	BeginShaderMode(*shader);
}
static void cythEndShaderMode() {
	EndShaderMode();
}
static void cythBeginBlendMode(int mode) {
	BeginBlendMode(mode);
}
static void cythEndBlendMode() {
	EndBlendMode();
}
static void cythBeginScissorMode(int x, int y, int width, int height) {
	BeginScissorMode(x, y, width, height);
}
static void cythEndScissorMode() {
	EndScissorMode();
}
static void cythBeginVrStereoMode(VrStereoConfig* config) {
	BeginVrStereoMode(*config);
}
static void cythEndVrStereoMode() {
	EndVrStereoMode();
}
static VrStereoConfig* cythLoadVrStereoConfig(VrDeviceInfo* device) {
	VrStereoConfig _v = LoadVrStereoConfig(*device);
	VrStereoConfig* _r = (VrStereoConfig*)cyth_alloc(1, sizeof(VrStereoConfig));
	*_r = _v;
	return _r;
}
static void cythUnloadVrStereoConfig(VrStereoConfig* config) {
	UnloadVrStereoConfig(*config);
}
static Shader* cythLoadShader(CyString* vsFileName, CyString* fsFileName) {
	Shader _v = LoadShader(vsFileName->data, fsFileName->data);
	Shader* _r = (Shader*)cyth_alloc(1, sizeof(Shader));
	*_r = _v;
	return _r;
}
static Shader* cythLoadShaderFromMemory(CyString* vsCode, CyString* fsCode) {
	Shader _v = LoadShaderFromMemory(vsCode->data, fsCode->data);
	Shader* _r = (Shader*)cyth_alloc(1, sizeof(Shader));
	*_r = _v;
	return _r;
}
static bool cythIsShaderValid(Shader* shader) {
	bool _v = IsShaderValid(*shader);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetShaderLocation(Shader* shader, CyString* uniformName) {
	int _v = GetShaderLocation(*shader, uniformName->data);
	int _r = (int)_v;
	return _r;
}
static int cythGetShaderLocationAttrib(Shader* shader, CyString* attribName) {
	int _v = GetShaderLocationAttrib(*shader, attribName->data);
	int _r = (int)_v;
	return _r;
}
static void cythSetShaderValue(Shader* shader, int locIndex, const void * value, int uniformType) {
	SetShaderValue(*shader, locIndex, value, uniformType);
}
static void cythSetShaderValueV(Shader* shader, int locIndex, const void * value, int uniformType, int count) {
	SetShaderValueV(*shader, locIndex, value, uniformType, count);
}
static void cythSetShaderValueMatrix(Shader* shader, int locIndex, Matrix* mat) {
	SetShaderValueMatrix(*shader, locIndex, *mat);
}
static void cythSetShaderValueTexture(Shader* shader, int locIndex, Texture2D* texture) {
	SetShaderValueTexture(*shader, locIndex, *texture);
}
static void cythUnloadShader(Shader* shader) {
	UnloadShader(*shader);
}
static Ray* cythGetScreenToWorldRay(Vector2* position, Camera* camera) {
	Ray _v = GetScreenToWorldRay(*position, *camera);
	Ray* _r = (Ray*)cyth_alloc(1, sizeof(Ray));
	*_r = _v;
	return _r;
}
static Ray* cythGetScreenToWorldRayEx(Vector2* position, Camera* camera, int width, int height) {
	Ray _v = GetScreenToWorldRayEx(*position, *camera, width, height);
	Ray* _r = (Ray*)cyth_alloc(1, sizeof(Ray));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreen(Vector3* position, Camera* camera) {
	Vector2 _v = GetWorldToScreen(*position, *camera);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreenEx(Vector3* position, Camera* camera, int width, int height) {
	Vector2 _v = GetWorldToScreenEx(*position, *camera, width, height);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreen2D(Vector2* position, Camera2D* camera) {
	Vector2 _v = GetWorldToScreen2D(*position, *camera);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetScreenToWorld2D(Vector2* position, Camera2D* camera) {
	Vector2 _v = GetScreenToWorld2D(*position, *camera);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Matrix* cythGetCameraMatrix(Camera* camera) {
	Matrix _v = GetCameraMatrix(*camera);
	Matrix* _r = (Matrix*)cyth_alloc(1, sizeof(Matrix));
	*_r = _v;
	return _r;
}
static Matrix* cythGetCameraMatrix2D(Camera2D* camera) {
	Matrix _v = GetCameraMatrix2D(*camera);
	Matrix* _r = (Matrix*)cyth_alloc(1, sizeof(Matrix));
	*_r = _v;
	return _r;
}
static void cythSetTargetFPS(int fps) {
	SetTargetFPS(fps);
}
static float cythGetFrameTime() {
	float _v = GetFrameTime();
	float _r = (float)_v;
	return _r;
}
static float cythGetTime() {
	double _v = GetTime();
	float _r = (float)_v;
	return _r;
}
static int cythGetFPS() {
	int _v = GetFPS();
	int _r = (int)_v;
	return _r;
}
static void cythSwapScreenBuffer() {
	SwapScreenBuffer();
}
static void cythPollInputEvents() {
	PollInputEvents();
}
static void cythWaitTime(float seconds) {
	WaitTime(seconds);
}
static void cythSetRandomSeed(unsigned int seed) {
	SetRandomSeed(seed);
}
static int cythGetRandomValue(int min, int max) {
	int _v = GetRandomValue(min, max);
	int _r = (int)_v;
	return _r;
}
static int * cythLoadRandomSequence(unsigned int count, int min, int max) {
	int * _v = LoadRandomSequence(count, min, max);
	int * _r = (int *)_v;
	return _r;
}
static void cythUnloadRandomSequence(int * sequence) {
	UnloadRandomSequence(sequence);
}
static void cythTakeScreenshot(CyString* fileName) {
	TakeScreenshot(fileName->data);
}
static void cythSetConfigFlags(unsigned int flags) {
	SetConfigFlags(flags);
}
static void cythOpenURL(CyString* url) {
	OpenURL(url->data);
}
static void cythSetTraceLogLevel(int logLevel) {
	SetTraceLogLevel(logLevel);
}
static void * cythMemAlloc(unsigned int size) {
	void * _v = MemAlloc(size);
	void * _r = (void *)_v;
	return _r;
}
static void * cythMemRealloc(void * ptr, unsigned int size) {
	void * _v = MemRealloc(ptr, size);
	void * _r = (void *)_v;
	return _r;
}
static void cythMemFree(void * ptr) {
	MemFree(ptr);
}
static void cythSetTraceLogCallback(TraceLogCallback* callback) {
	SetTraceLogCallback(*callback);
}
static void cythSetLoadFileDataCallback(LoadFileDataCallback* callback) {
	SetLoadFileDataCallback(*callback);
}
static void cythSetSaveFileDataCallback(SaveFileDataCallback* callback) {
	SetSaveFileDataCallback(*callback);
}
static void cythSetLoadFileTextCallback(LoadFileTextCallback* callback) {
	SetLoadFileTextCallback(*callback);
}
static void cythSetSaveFileTextCallback(SaveFileTextCallback* callback) {
	SetSaveFileTextCallback(*callback);
}
static unsigned char * cythLoadFileData(CyString* fileName, int * dataSize) {
	unsigned char * _v = LoadFileData(fileName->data, dataSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static void cythUnloadFileData(unsigned char * data) {
	UnloadFileData(data);
}
static bool cythSaveFileData(CyString* fileName, void * data, int dataSize) {
	bool _v = SaveFileData(fileName->data, data, dataSize);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportDataAsCode(const unsigned char * data, int dataSize, CyString* fileName) {
	bool _v = ExportDataAsCode(data, dataSize, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static CyArray* cythLoadFileText(CyString* fileName) {
	char * _v = LoadFileText(fileName->data);
	CyArray* _r = (CyArray*)cyth_alloc(1, sizeof(CyArray));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static void cythUnloadFileText(CyArray* text) {
	UnloadFileText((char*)text->data);
}
static bool cythSaveFileText(CyString* fileName, CyArray* text) {
	bool _v = SaveFileText(fileName->data, (char*)text->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythFileExists(CyString* fileName) {
	bool _v = FileExists(fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythDirectoryExists(CyString* dirPath) {
	bool _v = DirectoryExists(dirPath->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsFileExtension(CyString* fileName, CyString* ext) {
	bool _v = IsFileExtension(fileName->data, ext->data);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetFileLength(CyString* fileName) {
	int _v = GetFileLength(fileName->data);
	int _r = (int)_v;
	return _r;
}
static CyString* cythGetFileExtension(CyString* fileName) {
	const char * _v = GetFileExtension(fileName->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetFileName(CyString* filePath) {
	const char * _v = GetFileName(filePath->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetFileNameWithoutExt(CyString* filePath) {
	const char * _v = GetFileNameWithoutExt(filePath->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetDirectoryPath(CyString* filePath) {
	const char * _v = GetDirectoryPath(filePath->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetPrevDirectoryPath(CyString* dirPath) {
	const char * _v = GetPrevDirectoryPath(dirPath->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetWorkingDirectory() {
	const char * _v = GetWorkingDirectory();
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythGetApplicationDirectory() {
	const char * _v = GetApplicationDirectory();
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythMakeDirectory(CyString* dirPath) {
	int _v = MakeDirectory(dirPath->data);
	int _r = (int)_v;
	return _r;
}
static bool cythChangeDirectory(CyString* dir) {
	bool _v = ChangeDirectory(dir->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsPathFile(CyString* path) {
	bool _v = IsPathFile(path->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsFileNameValid(CyString* fileName) {
	bool _v = IsFileNameValid(fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static FilePathList* cythLoadDirectoryFiles(CyString* dirPath) {
	FilePathList _v = LoadDirectoryFiles(dirPath->data);
	FilePathList* _r = (FilePathList*)cyth_alloc(1, sizeof(FilePathList));
	*_r = _v;
	return _r;
}
static FilePathList* cythLoadDirectoryFilesEx(CyString* basePath, CyString* filter, bool scanSubdirs) {
	FilePathList _v = LoadDirectoryFilesEx(basePath->data, filter->data, scanSubdirs);
	FilePathList* _r = (FilePathList*)cyth_alloc(1, sizeof(FilePathList));
	*_r = _v;
	return _r;
}
static void cythUnloadDirectoryFiles(FilePathList* files) {
	UnloadDirectoryFiles(*files);
}
static bool cythIsFileDropped() {
	bool _v = IsFileDropped();
	bool _r = (bool)_v;
	return _r;
}
static FilePathList* cythLoadDroppedFiles() {
	FilePathList _v = LoadDroppedFiles();
	FilePathList* _r = (FilePathList*)cyth_alloc(1, sizeof(FilePathList));
	*_r = _v;
	return _r;
}
static void cythUnloadDroppedFiles(FilePathList* files) {
	UnloadDroppedFiles(*files);
}
static long* cythGetFileModTime(CyString* fileName) {
	long _v = GetFileModTime(fileName->data);
	long* _r = (long*)cyth_alloc(1, sizeof(long));
	*_r = _v;
	return _r;
}
static unsigned char * cythCompressData(const unsigned char * data, int dataSize, int * compDataSize) {
	unsigned char * _v = CompressData(data, dataSize, compDataSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static unsigned char * cythDecompressData(const unsigned char * compData, int compDataSize, int * dataSize) {
	unsigned char * _v = DecompressData(compData, compDataSize, dataSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static CyArray* cythEncodeDataBase64(const unsigned char * data, int dataSize, int * outputSize) {
	char * _v = EncodeDataBase64(data, dataSize, outputSize);
	CyArray* _r = (CyArray*)cyth_alloc(1, sizeof(CyArray));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static unsigned char * cythDecodeDataBase64(const unsigned char * data, int * outputSize) {
	unsigned char * _v = DecodeDataBase64(data, outputSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static unsigned int cythComputeCRC32(unsigned char * data, int dataSize) {
	unsigned int _v = ComputeCRC32(data, dataSize);
	unsigned int _r = (unsigned int)_v;
	return _r;
}
static unsigned int * cythComputeMD5(unsigned char * data, int dataSize) {
	unsigned int * _v = ComputeMD5(data, dataSize);
	unsigned int * _r = (unsigned int *)_v;
	return _r;
}
static unsigned int * cythComputeSHA1(unsigned char * data, int dataSize) {
	unsigned int * _v = ComputeSHA1(data, dataSize);
	unsigned int * _r = (unsigned int *)_v;
	return _r;
}
static AutomationEventList* cythLoadAutomationEventList(CyString* fileName) {
	AutomationEventList _v = LoadAutomationEventList(fileName->data);
	AutomationEventList* _r = (AutomationEventList*)cyth_alloc(1, sizeof(AutomationEventList));
	*_r = _v;
	return _r;
}
static void cythUnloadAutomationEventList(AutomationEventList* list) {
	UnloadAutomationEventList(*list);
}
static bool cythExportAutomationEventList(AutomationEventList* list, CyString* fileName) {
	bool _v = ExportAutomationEventList(*list, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static void cythSetAutomationEventList(AutomationEventList * list) {
	SetAutomationEventList(list);
}
static void cythSetAutomationEventBaseFrame(int frame) {
	SetAutomationEventBaseFrame(frame);
}
static void cythStartAutomationEventRecording() {
	StartAutomationEventRecording();
}
static void cythStopAutomationEventRecording() {
	StopAutomationEventRecording();
}
static void cythPlayAutomationEvent(AutomationEvent* event) {
	PlayAutomationEvent(*event);
}
static bool cythIsKeyPressed(int key) {
	bool _v = IsKeyPressed(key);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsKeyPressedRepeat(int key) {
	bool _v = IsKeyPressedRepeat(key);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsKeyDown(int key) {
	bool _v = IsKeyDown(key);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsKeyReleased(int key) {
	bool _v = IsKeyReleased(key);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsKeyUp(int key) {
	bool _v = IsKeyUp(key);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetKeyPressed() {
	int _v = GetKeyPressed();
	int _r = (int)_v;
	return _r;
}
static int cythGetCharPressed() {
	int _v = GetCharPressed();
	int _r = (int)_v;
	return _r;
}
static void cythSetExitKey(int key) {
	SetExitKey(key);
}
static bool cythIsGamepadAvailable(int gamepad) {
	bool _v = IsGamepadAvailable(gamepad);
	bool _r = (bool)_v;
	return _r;
}
static CyString* cythGetGamepadName(int gamepad) {
	const char * _v = GetGamepadName(gamepad);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static bool cythIsGamepadButtonPressed(int gamepad, int button) {
	bool _v = IsGamepadButtonPressed(gamepad, button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsGamepadButtonDown(int gamepad, int button) {
	bool _v = IsGamepadButtonDown(gamepad, button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsGamepadButtonReleased(int gamepad, int button) {
	bool _v = IsGamepadButtonReleased(gamepad, button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsGamepadButtonUp(int gamepad, int button) {
	bool _v = IsGamepadButtonUp(gamepad, button);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetGamepadButtonPressed() {
	int _v = GetGamepadButtonPressed();
	int _r = (int)_v;
	return _r;
}
static int cythGetGamepadAxisCount(int gamepad) {
	int _v = GetGamepadAxisCount(gamepad);
	int _r = (int)_v;
	return _r;
}
static float cythGetGamepadAxisMovement(int gamepad, int axis) {
	float _v = GetGamepadAxisMovement(gamepad, axis);
	float _r = (float)_v;
	return _r;
}
static int cythSetGamepadMappings(CyString* mappings) {
	int _v = SetGamepadMappings(mappings->data);
	int _r = (int)_v;
	return _r;
}
static void cythSetGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration) {
	SetGamepadVibration(gamepad, leftMotor, rightMotor, duration);
}
static bool cythIsMouseButtonPressed(int button) {
	bool _v = IsMouseButtonPressed(button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsMouseButtonDown(int button) {
	bool _v = IsMouseButtonDown(button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsMouseButtonReleased(int button) {
	bool _v = IsMouseButtonReleased(button);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsMouseButtonUp(int button) {
	bool _v = IsMouseButtonUp(button);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetMouseX() {
	int _v = GetMouseX();
	int _r = (int)_v;
	return _r;
}
static int cythGetMouseY() {
	int _v = GetMouseY();
	int _r = (int)_v;
	return _r;
}
static Vector2* cythGetMousePosition() {
	Vector2 _v = GetMousePosition();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetMouseDelta() {
	Vector2 _v = GetMouseDelta();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static void cythSetMousePosition(int x, int y) {
	SetMousePosition(x, y);
}
static void cythSetMouseOffset(int offsetX, int offsetY) {
	SetMouseOffset(offsetX, offsetY);
}
static void cythSetMouseScale(float scaleX, float scaleY) {
	SetMouseScale(scaleX, scaleY);
}
static float cythGetMouseWheelMove() {
	float _v = GetMouseWheelMove();
	float _r = (float)_v;
	return _r;
}
static Vector2* cythGetMouseWheelMoveV() {
	Vector2 _v = GetMouseWheelMoveV();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static void cythSetMouseCursor(int cursor) {
	SetMouseCursor(cursor);
}
static int cythGetTouchX() {
	int _v = GetTouchX();
	int _r = (int)_v;
	return _r;
}
static int cythGetTouchY() {
	int _v = GetTouchY();
	int _r = (int)_v;
	return _r;
}
static Vector2* cythGetTouchPosition(int index) {
	Vector2 _v = GetTouchPosition(index);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static int cythGetTouchPointId(int index) {
	int _v = GetTouchPointId(index);
	int _r = (int)_v;
	return _r;
}
static int cythGetTouchPointCount() {
	int _v = GetTouchPointCount();
	int _r = (int)_v;
	return _r;
}
static void cythSetGesturesEnabled(unsigned int flags) {
	SetGesturesEnabled(flags);
}
static bool cythIsGestureDetected(unsigned int gesture) {
	bool _v = IsGestureDetected(gesture);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetGestureDetected() {
	int _v = GetGestureDetected();
	int _r = (int)_v;
	return _r;
}
static float cythGetGestureHoldDuration() {
	float _v = GetGestureHoldDuration();
	float _r = (float)_v;
	return _r;
}
static Vector2* cythGetGestureDragVector() {
	Vector2 _v = GetGestureDragVector();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static float cythGetGestureDragAngle() {
	float _v = GetGestureDragAngle();
	float _r = (float)_v;
	return _r;
}
static Vector2* cythGetGesturePinchVector() {
	Vector2 _v = GetGesturePinchVector();
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static float cythGetGesturePinchAngle() {
	float _v = GetGesturePinchAngle();
	float _r = (float)_v;
	return _r;
}
static void cythUpdateCamera(Camera * camera, int mode) {
	UpdateCamera(camera, mode);
}
static void cythUpdateCameraPro(Camera * camera, Vector3* movement, Vector3* rotation, float zoom) {
	UpdateCameraPro(camera, *movement, *rotation, zoom);
}
static void cythSetShapesTexture(Texture2D* texture, Rectangle* source) {
	SetShapesTexture(*texture, *source);
}
static Texture2D* cythGetShapesTexture() {
	Texture2D _v = GetShapesTexture();
	Texture2D* _r = (Texture2D*)cyth_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static Rectangle* cythGetShapesTextureRectangle() {
	Rectangle _v = GetShapesTextureRectangle();
	Rectangle* _r = (Rectangle*)cyth_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static void cythDrawPixel(int posX, int posY, Color* color) {
	DrawPixel(posX, posY, *color);
}
static void cythDrawPixelV(Vector2* position, Color* color) {
	DrawPixelV(*position, *color);
}
static void cythDrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color* color) {
	DrawLine(startPosX, startPosY, endPosX, endPosY, *color);
}
static void cythDrawLineV(Vector2* startPos, Vector2* endPos, Color* color) {
	DrawLineV(*startPos, *endPos, *color);
}
static void cythDrawLineEx(Vector2* startPos, Vector2* endPos, float thick, Color* color) {
	DrawLineEx(*startPos, *endPos, thick, *color);
}
static void cythDrawLineStrip(const Vector2 * points, int pointCount, Color* color) {
	DrawLineStrip(points, pointCount, *color);
}
static void cythDrawLineBezier(Vector2* startPos, Vector2* endPos, float thick, Color* color) {
	DrawLineBezier(*startPos, *endPos, thick, *color);
}
static void cythDrawCircle(int centerX, int centerY, float radius, Color* color) {
	DrawCircle(centerX, centerY, radius, *color);
}
static void cythDrawCircleSector(Vector2* center, float radius, float startAngle, float endAngle, int segments, Color* color) {
	DrawCircleSector(*center, radius, startAngle, endAngle, segments, *color);
}
static void cythDrawCircleSectorLines(Vector2* center, float radius, float startAngle, float endAngle, int segments, Color* color) {
	DrawCircleSectorLines(*center, radius, startAngle, endAngle, segments, *color);
}
static void cythDrawCircleGradient(int centerX, int centerY, float radius, Color* inner, Color* outer) {
	DrawCircleGradient(centerX, centerY, radius, *inner, *outer);
}
static void cythDrawCircleV(Vector2* center, float radius, Color* color) {
	DrawCircleV(*center, radius, *color);
}
static void cythDrawCircleLines(int centerX, int centerY, float radius, Color* color) {
	DrawCircleLines(centerX, centerY, radius, *color);
}
static void cythDrawCircleLinesV(Vector2* center, float radius, Color* color) {
	DrawCircleLinesV(*center, radius, *color);
}
static void cythDrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color* color) {
	DrawEllipse(centerX, centerY, radiusH, radiusV, *color);
}
static void cythDrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color* color) {
	DrawEllipseLines(centerX, centerY, radiusH, radiusV, *color);
}
static void cythDrawRing(Vector2* center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color* color) {
	DrawRing(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);
}
static void cythDrawRingLines(Vector2* center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color* color) {
	DrawRingLines(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);
}
static void cythDrawRectangle(int posX, int posY, int width, int height, Color* color) {
	DrawRectangle(posX, posY, width, height, *color);
}
static void cythDrawRectangleV(Vector2* position, Vector2* size, Color* color) {
	DrawRectangleV(*position, *size, *color);
}
static void cythDrawRectangleRec(Rectangle* rec, Color* color) {
	DrawRectangleRec(*rec, *color);
}
static void cythDrawRectanglePro(Rectangle* rec, Vector2* origin, float rotation, Color* color) {
	DrawRectanglePro(*rec, *origin, rotation, *color);
}
static void cythDrawRectangleGradientV(int posX, int posY, int width, int height, Color* top, Color* bottom) {
	DrawRectangleGradientV(posX, posY, width, height, *top, *bottom);
}
static void cythDrawRectangleGradientH(int posX, int posY, int width, int height, Color* left, Color* right) {
	DrawRectangleGradientH(posX, posY, width, height, *left, *right);
}
static void cythDrawRectangleGradientEx(Rectangle* rec, Color* topLeft, Color* bottomLeft, Color* topRight, Color* bottomRight) {
	DrawRectangleGradientEx(*rec, *topLeft, *bottomLeft, *topRight, *bottomRight);
}
static void cythDrawRectangleLines(int posX, int posY, int width, int height, Color* color) {
	DrawRectangleLines(posX, posY, width, height, *color);
}
static void cythDrawRectangleLinesEx(Rectangle* rec, float lineThick, Color* color) {
	DrawRectangleLinesEx(*rec, lineThick, *color);
}
static void cythDrawRectangleRounded(Rectangle* rec, float roundness, int segments, Color* color) {
	DrawRectangleRounded(*rec, roundness, segments, *color);
}
static void cythDrawRectangleRoundedLines(Rectangle* rec, float roundness, int segments, Color* color) {
	DrawRectangleRoundedLines(*rec, roundness, segments, *color);
}
static void cythDrawRectangleRoundedLinesEx(Rectangle* rec, float roundness, int segments, float lineThick, Color* color) {
	DrawRectangleRoundedLinesEx(*rec, roundness, segments, lineThick, *color);
}
static void cythDrawTriangle(Vector2* v1, Vector2* v2, Vector2* v3, Color* color) {
	DrawTriangle(*v1, *v2, *v3, *color);
}
static void cythDrawTriangleLines(Vector2* v1, Vector2* v2, Vector2* v3, Color* color) {
	DrawTriangleLines(*v1, *v2, *v3, *color);
}
static void cythDrawTriangleFan(const Vector2 * points, int pointCount, Color* color) {
	DrawTriangleFan(points, pointCount, *color);
}
static void cythDrawTriangleStrip(const Vector2 * points, int pointCount, Color* color) {
	DrawTriangleStrip(points, pointCount, *color);
}
static void cythDrawPoly(Vector2* center, int sides, float radius, float rotation, Color* color) {
	DrawPoly(*center, sides, radius, rotation, *color);
}
static void cythDrawPolyLines(Vector2* center, int sides, float radius, float rotation, Color* color) {
	DrawPolyLines(*center, sides, radius, rotation, *color);
}
static void cythDrawPolyLinesEx(Vector2* center, int sides, float radius, float rotation, float lineThick, Color* color) {
	DrawPolyLinesEx(*center, sides, radius, rotation, lineThick, *color);
}
static void cythDrawSplineLinear(const Vector2 * points, int pointCount, float thick, Color* color) {
	DrawSplineLinear(points, pointCount, thick, *color);
}
static void cythDrawSplineBasis(const Vector2 * points, int pointCount, float thick, Color* color) {
	DrawSplineBasis(points, pointCount, thick, *color);
}
static void cythDrawSplineCatmullRom(const Vector2 * points, int pointCount, float thick, Color* color) {
	DrawSplineCatmullRom(points, pointCount, thick, *color);
}
static void cythDrawSplineBezierQuadratic(const Vector2 * points, int pointCount, float thick, Color* color) {
	DrawSplineBezierQuadratic(points, pointCount, thick, *color);
}
static void cythDrawSplineBezierCubic(const Vector2 * points, int pointCount, float thick, Color* color) {
	DrawSplineBezierCubic(points, pointCount, thick, *color);
}
static void cythDrawSplineSegmentLinear(Vector2* p1, Vector2* p2, float thick, Color* color) {
	DrawSplineSegmentLinear(*p1, *p2, thick, *color);
}
static void cythDrawSplineSegmentBasis(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float thick, Color* color) {
	DrawSplineSegmentBasis(*p1, *p2, *p3, *p4, thick, *color);
}
static void cythDrawSplineSegmentCatmullRom(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float thick, Color* color) {
	DrawSplineSegmentCatmullRom(*p1, *p2, *p3, *p4, thick, *color);
}
static void cythDrawSplineSegmentBezierQuadratic(Vector2* p1, Vector2* c2, Vector2* p3, float thick, Color* color) {
	DrawSplineSegmentBezierQuadratic(*p1, *c2, *p3, thick, *color);
}
static void cythDrawSplineSegmentBezierCubic(Vector2* p1, Vector2* c2, Vector2* c3, Vector2* p4, float thick, Color* color) {
	DrawSplineSegmentBezierCubic(*p1, *c2, *c3, *p4, thick, *color);
}
static Vector2* cythGetSplinePointLinear(Vector2* startPos, Vector2* endPos, float t) {
	Vector2 _v = GetSplinePointLinear(*startPos, *endPos, t);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBasis(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointBasis(*p1, *p2, *p3, *p4, t);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointCatmullRom(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointCatmullRom(*p1, *p2, *p3, *p4, t);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBezierQuad(Vector2* p1, Vector2* c2, Vector2* p3, float t) {
	Vector2 _v = GetSplinePointBezierQuad(*p1, *c2, *p3, t);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBezierCubic(Vector2* p1, Vector2* c2, Vector2* c3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointBezierCubic(*p1, *c2, *c3, *p4, t);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static bool cythCheckCollisionRecs(Rectangle* rec1, Rectangle* rec2) {
	bool _v = CheckCollisionRecs(*rec1, *rec2);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionCircles(Vector2* center1, float radius1, Vector2* center2, float radius2) {
	bool _v = CheckCollisionCircles(*center1, radius1, *center2, radius2);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionCircleRec(Vector2* center, float radius, Rectangle* rec) {
	bool _v = CheckCollisionCircleRec(*center, radius, *rec);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionCircleLine(Vector2* center, float radius, Vector2* p1, Vector2* p2) {
	bool _v = CheckCollisionCircleLine(*center, radius, *p1, *p2);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionPointRec(Vector2* point, Rectangle* rec) {
	bool _v = CheckCollisionPointRec(*point, *rec);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionPointCircle(Vector2* point, Vector2* center, float radius) {
	bool _v = CheckCollisionPointCircle(*point, *center, radius);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionPointTriangle(Vector2* point, Vector2* p1, Vector2* p2, Vector2* p3) {
	bool _v = CheckCollisionPointTriangle(*point, *p1, *p2, *p3);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionPointLine(Vector2* point, Vector2* p1, Vector2* p2, int threshold) {
	bool _v = CheckCollisionPointLine(*point, *p1, *p2, threshold);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionPointPoly(Vector2* point, const Vector2 * points, int pointCount) {
	bool _v = CheckCollisionPointPoly(*point, points, pointCount);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionLines(Vector2* startPos1, Vector2* endPos1, Vector2* startPos2, Vector2* endPos2, Vector2 * collisionPoint) {
	bool _v = CheckCollisionLines(*startPos1, *endPos1, *startPos2, *endPos2, collisionPoint);
	bool _r = (bool)_v;
	return _r;
}
static Rectangle* cythGetCollisionRec(Rectangle* rec1, Rectangle* rec2) {
	Rectangle _v = GetCollisionRec(*rec1, *rec2);
	Rectangle* _r = (Rectangle*)cyth_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static Image* cythLoadImage(CyString* fileName) {
	Image _v = LoadImage(fileName->data);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageRaw(CyString* fileName, int width, int height, int format, int headerSize) {
	Image _v = LoadImageRaw(fileName->data, width, height, format, headerSize);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageAnim(CyString* fileName, int * frames) {
	Image _v = LoadImageAnim(fileName->data, frames);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageAnimFromMemory(CyString* fileType, const unsigned char * fileData, int dataSize, int * frames) {
	Image _v = LoadImageAnimFromMemory(fileType->data, fileData, dataSize, frames);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromMemory(CyString* fileType, const unsigned char * fileData, int dataSize) {
	Image _v = LoadImageFromMemory(fileType->data, fileData, dataSize);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromTexture(Texture2D* texture) {
	Image _v = LoadImageFromTexture(*texture);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromScreen() {
	Image _v = LoadImageFromScreen();
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static bool cythIsImageValid(Image* image) {
	bool _v = IsImageValid(*image);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadImage(Image* image) {
	UnloadImage(*image);
}
static bool cythExportImage(Image* image, CyString* fileName) {
	bool _v = ExportImage(*image, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static unsigned char * cythExportImageToMemory(Image* image, CyString* fileType, int * fileSize) {
	unsigned char * _v = ExportImageToMemory(*image, fileType->data, fileSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static bool cythExportImageAsCode(Image* image, CyString* fileName) {
	bool _v = ExportImageAsCode(*image, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static Image* cythGenImageColor(int width, int height, Color* color) {
	Image _v = GenImageColor(width, height, *color);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientLinear(int width, int height, int direction, Color* start, Color* end) {
	Image _v = GenImageGradientLinear(width, height, direction, *start, *end);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientRadial(int width, int height, float density, Color* inner, Color* outer) {
	Image _v = GenImageGradientRadial(width, height, density, *inner, *outer);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientSquare(int width, int height, float density, Color* inner, Color* outer) {
	Image _v = GenImageGradientSquare(width, height, density, *inner, *outer);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageChecked(int width, int height, int checksX, int checksY, Color* col1, Color* col2) {
	Image _v = GenImageChecked(width, height, checksX, checksY, *col1, *col2);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageWhiteNoise(int width, int height, float factor) {
	Image _v = GenImageWhiteNoise(width, height, factor);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
	Image _v = GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageCellular(int width, int height, int tileSize) {
	Image _v = GenImageCellular(width, height, tileSize);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageText(int width, int height, CyString* text) {
	Image _v = GenImageText(width, height, text->data);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageCopy(Image* image) {
	Image _v = ImageCopy(*image);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageFromImage(Image* image, Rectangle* rec) {
	Image _v = ImageFromImage(*image, *rec);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageFromChannel(Image* image, int selectedChannel) {
	Image _v = ImageFromChannel(*image, selectedChannel);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageText(CyString* text, int fontSize, Color* color) {
	Image _v = ImageText(text->data, fontSize, *color);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageTextEx(Font* font, CyString* text, float fontSize, float spacing, Color* tint) {
	Image _v = ImageTextEx(*font, text->data, fontSize, spacing, *tint);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static void cythImageFormat(Image * image, int newFormat) {
	ImageFormat(image, newFormat);
}
static void cythImageToPOT(Image * image, Color* fill) {
	ImageToPOT(image, *fill);
}
static void cythImageCrop(Image * image, Rectangle* crop) {
	ImageCrop(image, *crop);
}
static void cythImageAlphaCrop(Image * image, float threshold) {
	ImageAlphaCrop(image, threshold);
}
static void cythImageAlphaClear(Image * image, Color* color, float threshold) {
	ImageAlphaClear(image, *color, threshold);
}
static void cythImageAlphaMask(Image * image, Image* alphaMask) {
	ImageAlphaMask(image, *alphaMask);
}
static void cythImageAlphaPremultiply(Image * image) {
	ImageAlphaPremultiply(image);
}
static void cythImageBlurGaussian(Image * image, int blurSize) {
	ImageBlurGaussian(image, blurSize);
}
static void cythImageKernelConvolution(Image * image, const float * kernel, int kernelSize) {
	ImageKernelConvolution(image, kernel, kernelSize);
}
static void cythImageResize(Image * image, int newWidth, int newHeight) {
	ImageResize(image, newWidth, newHeight);
}
static void cythImageResizeNN(Image * image, int newWidth, int newHeight) {
	ImageResizeNN(image, newWidth, newHeight);
}
static void cythImageResizeCanvas(Image * image, int newWidth, int newHeight, int offsetX, int offsetY, Color* fill) {
	ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, *fill);
}
static void cythImageMipmaps(Image * image) {
	ImageMipmaps(image);
}
static void cythImageDither(Image * image, int rBpp, int gBpp, int bBpp, int aBpp) {
	ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}
static void cythImageFlipVertical(Image * image) {
	ImageFlipVertical(image);
}
static void cythImageFlipHorizontal(Image * image) {
	ImageFlipHorizontal(image);
}
static void cythImageRotate(Image * image, int degrees) {
	ImageRotate(image, degrees);
}
static void cythImageRotateCW(Image * image) {
	ImageRotateCW(image);
}
static void cythImageRotateCCW(Image * image) {
	ImageRotateCCW(image);
}
static void cythImageColorTint(Image * image, Color* color) {
	ImageColorTint(image, *color);
}
static void cythImageColorInvert(Image * image) {
	ImageColorInvert(image);
}
static void cythImageColorGrayscale(Image * image) {
	ImageColorGrayscale(image);
}
static void cythImageColorContrast(Image * image, float contrast) {
	ImageColorContrast(image, contrast);
}
static void cythImageColorBrightness(Image * image, int brightness) {
	ImageColorBrightness(image, brightness);
}
static void cythImageColorReplace(Image * image, Color* color, Color* replace) {
	ImageColorReplace(image, *color, *replace);
}
static Color * cythLoadImageColors(Image* image) {
	Color * _v = LoadImageColors(*image);
	Color * _r = (Color *)_v;
	return _r;
}
static Color * cythLoadImagePalette(Image* image, int maxPaletteSize, int * colorCount) {
	Color * _v = LoadImagePalette(*image, maxPaletteSize, colorCount);
	Color * _r = (Color *)_v;
	return _r;
}
static void cythUnloadImageColors(Color * colors) {
	UnloadImageColors(colors);
}
static void cythUnloadImagePalette(Color * colors) {
	UnloadImagePalette(colors);
}
static Rectangle* cythGetImageAlphaBorder(Image* image, float threshold) {
	Rectangle _v = GetImageAlphaBorder(*image, threshold);
	Rectangle* _r = (Rectangle*)cyth_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static Color* cythGetImageColor(Image* image, int x, int y) {
	Color _v = GetImageColor(*image, x, y);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static void cythImageClearBackground(Image * dst, Color* color) {
	ImageClearBackground(dst, *color);
}
static void cythImageDrawPixel(Image * dst, int posX, int posY, Color* color) {
	ImageDrawPixel(dst, posX, posY, *color);
}
static void cythImageDrawPixelV(Image * dst, Vector2* position, Color* color) {
	ImageDrawPixelV(dst, *position, *color);
}
static void cythImageDrawLine(Image * dst, int startPosX, int startPosY, int endPosX, int endPosY, Color* color) {
	ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, *color);
}
static void cythImageDrawLineV(Image * dst, Vector2* start, Vector2* end, Color* color) {
	ImageDrawLineV(dst, *start, *end, *color);
}
static void cythImageDrawLineEx(Image * dst, Vector2* start, Vector2* end, int thick, Color* color) {
	ImageDrawLineEx(dst, *start, *end, thick, *color);
}
static void cythImageDrawCircle(Image * dst, int centerX, int centerY, int radius, Color* color) {
	ImageDrawCircle(dst, centerX, centerY, radius, *color);
}
static void cythImageDrawCircleV(Image * dst, Vector2* center, int radius, Color* color) {
	ImageDrawCircleV(dst, *center, radius, *color);
}
static void cythImageDrawCircleLines(Image * dst, int centerX, int centerY, int radius, Color* color) {
	ImageDrawCircleLines(dst, centerX, centerY, radius, *color);
}
static void cythImageDrawCircleLinesV(Image * dst, Vector2* center, int radius, Color* color) {
	ImageDrawCircleLinesV(dst, *center, radius, *color);
}
static void cythImageDrawRectangle(Image * dst, int posX, int posY, int width, int height, Color* color) {
	ImageDrawRectangle(dst, posX, posY, width, height, *color);
}
static void cythImageDrawRectangleV(Image * dst, Vector2* position, Vector2* size, Color* color) {
	ImageDrawRectangleV(dst, *position, *size, *color);
}
static void cythImageDrawRectangleRec(Image * dst, Rectangle* rec, Color* color) {
	ImageDrawRectangleRec(dst, *rec, *color);
}
static void cythImageDrawRectangleLines(Image * dst, Rectangle* rec, int thick, Color* color) {
	ImageDrawRectangleLines(dst, *rec, thick, *color);
}
static void cythImageDrawTriangle(Image * dst, Vector2* v1, Vector2* v2, Vector2* v3, Color* color) {
	ImageDrawTriangle(dst, *v1, *v2, *v3, *color);
}
static void cythImageDrawTriangleEx(Image * dst, Vector2* v1, Vector2* v2, Vector2* v3, Color* c1, Color* c2, Color* c3) {
	ImageDrawTriangleEx(dst, *v1, *v2, *v3, *c1, *c2, *c3);
}
static void cythImageDrawTriangleLines(Image * dst, Vector2* v1, Vector2* v2, Vector2* v3, Color* color) {
	ImageDrawTriangleLines(dst, *v1, *v2, *v3, *color);
}
static void cythImageDrawTriangleFan(Image * dst, Vector2 * points, int pointCount, Color* color) {
	ImageDrawTriangleFan(dst, points, pointCount, *color);
}
static void cythImageDrawTriangleStrip(Image * dst, Vector2 * points, int pointCount, Color* color) {
	ImageDrawTriangleStrip(dst, points, pointCount, *color);
}
static void cythImageDraw(Image * dst, Image* src, Rectangle* srcRec, Rectangle* dstRec, Color* tint) {
	ImageDraw(dst, *src, *srcRec, *dstRec, *tint);
}
static void cythImageDrawText(Image * dst, CyString* text, int posX, int posY, int fontSize, Color* color) {
	ImageDrawText(dst, text->data, posX, posY, fontSize, *color);
}
static void cythImageDrawTextEx(Image * dst, Font* font, CyString* text, Vector2* position, float fontSize, float spacing, Color* tint) {
	ImageDrawTextEx(dst, *font, text->data, *position, fontSize, spacing, *tint);
}
static Texture2D* cythLoadTexture(CyString* fileName) {
	Texture2D _v = LoadTexture(fileName->data);
	Texture2D* _r = (Texture2D*)cyth_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static Texture2D* cythLoadTextureFromImage(Image* image) {
	Texture2D _v = LoadTextureFromImage(*image);
	Texture2D* _r = (Texture2D*)cyth_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static TextureCubemap* cythLoadTextureCubemap(Image* image, int layout) {
	TextureCubemap _v = LoadTextureCubemap(*image, layout);
	TextureCubemap* _r = (TextureCubemap*)cyth_alloc(1, sizeof(TextureCubemap));
	*_r = _v;
	return _r;
}
static RenderTexture2D* cythLoadRenderTexture(int width, int height) {
	RenderTexture2D _v = LoadRenderTexture(width, height);
	RenderTexture2D* _r = (RenderTexture2D*)cyth_alloc(1, sizeof(RenderTexture2D));
	*_r = _v;
	return _r;
}
static bool cythIsTextureValid(Texture2D* texture) {
	bool _v = IsTextureValid(*texture);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadTexture(Texture2D* texture) {
	UnloadTexture(*texture);
}
static bool cythIsRenderTextureValid(RenderTexture2D* target) {
	bool _v = IsRenderTextureValid(*target);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadRenderTexture(RenderTexture2D* target) {
	UnloadRenderTexture(*target);
}
static void cythUpdateTexture(Texture2D* texture, const void * pixels) {
	UpdateTexture(*texture, pixels);
}
static void cythUpdateTextureRec(Texture2D* texture, Rectangle* rec, const void * pixels) {
	UpdateTextureRec(*texture, *rec, pixels);
}
static void cythGenTextureMipmaps(Texture2D * texture) {
	GenTextureMipmaps(texture);
}
static void cythSetTextureFilter(Texture2D* texture, int filter) {
	SetTextureFilter(*texture, filter);
}
static void cythSetTextureWrap(Texture2D* texture, int wrap) {
	SetTextureWrap(*texture, wrap);
}
static void cythDrawTexture(Texture2D* texture, int posX, int posY, Color* tint) {
	DrawTexture(*texture, posX, posY, *tint);
}
static void cythDrawTextureV(Texture2D* texture, Vector2* position, Color* tint) {
	DrawTextureV(*texture, *position, *tint);
}
static void cythDrawTextureEx(Texture2D* texture, Vector2* position, float rotation, float scale, Color* tint) {
	DrawTextureEx(*texture, *position, rotation, scale, *tint);
}
static void cythDrawTextureRec(Texture2D* texture, Rectangle* source, Vector2* position, Color* tint) {
	DrawTextureRec(*texture, *source, *position, *tint);
}
static void cythDrawTexturePro(Texture2D* texture, Rectangle* source, Rectangle* dest, Vector2* origin, float rotation, Color* tint) {
	DrawTexturePro(*texture, *source, *dest, *origin, rotation, *tint);
}
static void cythDrawTextureNPatch(Texture2D* texture, NPatchInfo* nPatchInfo, Rectangle* dest, Vector2* origin, float rotation, Color* tint) {
	DrawTextureNPatch(*texture, *nPatchInfo, *dest, *origin, rotation, *tint);
}
static bool cythColorIsEqual(Color* col1, Color* col2) {
	bool _v = ColorIsEqual(*col1, *col2);
	bool _r = (bool)_v;
	return _r;
}
static Color* cythFade(Color* color, float alpha) {
	Color _v = Fade(*color, alpha);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static int cythColorToInt(Color* color) {
	int _v = ColorToInt(*color);
	int _r = (int)_v;
	return _r;
}
static Vector4* cythColorNormalize(Color* color) {
	Vector4 _v = ColorNormalize(*color);
	Vector4* _r = (Vector4*)cyth_alloc(1, sizeof(Vector4));
	*_r = _v;
	return _r;
}
static Color* cythColorFromNormalized(Vector4* normalized) {
	Color _v = ColorFromNormalized(*normalized);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Vector3* cythColorToHSV(Color* color) {
	Vector3 _v = ColorToHSV(*color);
	Vector3* _r = (Vector3*)cyth_alloc(1, sizeof(Vector3));
	*_r = _v;
	return _r;
}
static Color* cythColorFromHSV(float hue, float saturation, float value) {
	Color _v = ColorFromHSV(hue, saturation, value);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorTint(Color* color, Color* tint) {
	Color _v = ColorTint(*color, *tint);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorBrightness(Color* color, float factor) {
	Color _v = ColorBrightness(*color, factor);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorContrast(Color* color, float contrast) {
	Color _v = ColorContrast(*color, contrast);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorAlpha(Color* color, float alpha) {
	Color _v = ColorAlpha(*color, alpha);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorAlphaBlend(Color* dst, Color* src, Color* tint) {
	Color _v = ColorAlphaBlend(*dst, *src, *tint);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorLerp(Color* color1, Color* color2, float factor) {
	Color _v = ColorLerp(*color1, *color2, factor);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythGetColor(unsigned int hexValue) {
	Color _v = GetColor(hexValue);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythGetPixelColor(void * srcPtr, int format) {
	Color _v = GetPixelColor(srcPtr, format);
	Color* _r = (Color*)cyth_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static void cythSetPixelColor(void * dstPtr, Color* color, int format) {
	SetPixelColor(dstPtr, *color, format);
}
static int cythGetPixelDataSize(int width, int height, int format) {
	int _v = GetPixelDataSize(width, height, format);
	int _r = (int)_v;
	return _r;
}
static Font* cythGetFontDefault() {
	Font _v = GetFontDefault();
	Font* _r = (Font*)cyth_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFont(CyString* fileName) {
	Font _v = LoadFont(fileName->data);
	Font* _r = (Font*)cyth_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontEx(CyString* fileName, int fontSize, int * codepoints, int codepointCount) {
	Font _v = LoadFontEx(fileName->data, fontSize, codepoints, codepointCount);
	Font* _r = (Font*)cyth_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontFromImage(Image* image, Color* key, int firstChar) {
	Font _v = LoadFontFromImage(*image, *key, firstChar);
	Font* _r = (Font*)cyth_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontFromMemory(CyString* fileType, const unsigned char * fileData, int dataSize, int fontSize, int * codepoints, int codepointCount) {
	Font _v = LoadFontFromMemory(fileType->data, fileData, dataSize, fontSize, codepoints, codepointCount);
	Font* _r = (Font*)cyth_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static bool cythIsFontValid(Font* font) {
	bool _v = IsFontValid(*font);
	bool _r = (bool)_v;
	return _r;
}
static GlyphInfo * cythLoadFontData(const unsigned char * fileData, int dataSize, int fontSize, int * codepoints, int codepointCount, int type) {
	GlyphInfo * _v = LoadFontData(fileData, dataSize, fontSize, codepoints, codepointCount, type);
	GlyphInfo * _r = (GlyphInfo *)_v;
	return _r;
}
static Image* cythGenImageFontAtlas(const GlyphInfo * glyphs, Rectangle ** glyphRecs, int glyphCount, int fontSize, int padding, int packMethod) {
	Image _v = GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod);
	Image* _r = (Image*)cyth_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static void cythUnloadFontData(GlyphInfo * glyphs, int glyphCount) {
	UnloadFontData(glyphs, glyphCount);
}
static void cythUnloadFont(Font* font) {
	UnloadFont(*font);
}
static bool cythExportFontAsCode(Font* font, CyString* fileName) {
	bool _v = ExportFontAsCode(*font, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static void cythDrawFPS(int posX, int posY) {
	DrawFPS(posX, posY);
}
static void cythDrawText(CyString* text, int posX, int posY, int fontSize, Color* color) {
	DrawText(text->data, posX, posY, fontSize, *color);
}
static void cythDrawTextEx(Font* font, CyString* text, Vector2* position, float fontSize, float spacing, Color* tint) {
	DrawTextEx(*font, text->data, *position, fontSize, spacing, *tint);
}
static void cythDrawTextPro(Font* font, CyString* text, Vector2* position, Vector2* origin, float rotation, float fontSize, float spacing, Color* tint) {
	DrawTextPro(*font, text->data, *position, *origin, rotation, fontSize, spacing, *tint);
}
static void cythDrawTextCodepoint(Font* font, int codepoint, Vector2* position, float fontSize, Color* tint) {
	DrawTextCodepoint(*font, codepoint, *position, fontSize, *tint);
}
static void cythDrawTextCodepoints(Font* font, const int * codepoints, int codepointCount, Vector2* position, float fontSize, float spacing, Color* tint) {
	DrawTextCodepoints(*font, codepoints, codepointCount, *position, fontSize, spacing, *tint);
}
static void cythSetTextLineSpacing(int spacing) {
	SetTextLineSpacing(spacing);
}
static int cythMeasureText(CyString* text, int fontSize) {
	int _v = MeasureText(text->data, fontSize);
	int _r = (int)_v;
	return _r;
}
static Vector2* cythMeasureTextEx(Font* font, CyString* text, float fontSize, float spacing) {
	Vector2 _v = MeasureTextEx(*font, text->data, fontSize, spacing);
	Vector2* _r = (Vector2*)cyth_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static int cythGetGlyphIndex(Font* font, int codepoint) {
	int _v = GetGlyphIndex(*font, codepoint);
	int _r = (int)_v;
	return _r;
}
static GlyphInfo* cythGetGlyphInfo(Font* font, int codepoint) {
	GlyphInfo _v = GetGlyphInfo(*font, codepoint);
	GlyphInfo* _r = (GlyphInfo*)cyth_alloc(1, sizeof(GlyphInfo));
	*_r = _v;
	return _r;
}
static Rectangle* cythGetGlyphAtlasRec(Font* font, int codepoint) {
	Rectangle _v = GetGlyphAtlasRec(*font, codepoint);
	Rectangle* _r = (Rectangle*)cyth_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static CyArray* cythLoadUTF8(const int * codepoints, int length) {
	char * _v = LoadUTF8(codepoints, length);
	CyArray* _r = (CyArray*)cyth_alloc(1, sizeof(CyArray));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static void cythUnloadUTF8(CyArray* text) {
	UnloadUTF8((char*)text->data);
}
static int * cythLoadCodepoints(CyString* text, int * count) {
	int * _v = LoadCodepoints(text->data, count);
	int * _r = (int *)_v;
	return _r;
}
static void cythUnloadCodepoints(int * codepoints) {
	UnloadCodepoints(codepoints);
}
static int cythGetCodepointCount(CyString* text) {
	int _v = GetCodepointCount(text->data);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepoint(CyString* text, int * codepointSize) {
	int _v = GetCodepoint(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepointNext(CyString* text, int * codepointSize) {
	int _v = GetCodepointNext(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepointPrevious(CyString* text, int * codepointSize) {
	int _v = GetCodepointPrevious(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static CyString* cythCodepointToUTF8(int codepoint, int * utf8Size) {
	const char * _v = CodepointToUTF8(codepoint, utf8Size);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythTextCopy(CyArray* dst, CyString* src) {
	int _v = TextCopy((char*)dst->data, src->data);
	int _r = (int)_v;
	return _r;
}
static bool cythTextIsEqual(CyString* text1, CyString* text2) {
	bool _v = TextIsEqual(text1->data, text2->data);
	bool _r = (bool)_v;
	return _r;
}
static unsigned int cythTextLength(CyString* text) {
	unsigned int _v = TextLength(text->data);
	unsigned int _r = (unsigned int)_v;
	return _r;
}
static CyString* cythTextSubtext(CyString* text, int position, int length) {
	const char * _v = TextSubtext(text->data, position, length);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyArray* cythTextReplace(CyString* text, CyString* replace, CyString* by) {
	char * _v = TextReplace(text->data, replace->data, by->data);
	CyArray* _r = (CyArray*)cyth_alloc(1, sizeof(CyArray));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static CyArray* cythTextInsert(CyString* text, CyString* insert, int position) {
	char * _v = TextInsert(text->data, insert->data, position);
	CyArray* _r = (CyArray*)cyth_alloc(1, sizeof(CyArray));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static CyString* cythTextJoin(const char ** textList, int count, CyString* delimiter) {
	const char * _v = TextJoin(textList, count, delimiter->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static const char ** cythTextSplit(CyString* text, char* delimiter, int * count) {
	const char ** _v = TextSplit(text->data, *delimiter, count);
	const char ** _r = (const char **)_v;
	return _r;
}
static void cythTextAppend(CyArray* text, CyString* append, int * position) {
	TextAppend((char*)text->data, append->data, position);
}
static int cythTextFindIndex(CyString* text, CyString* find) {
	int _v = TextFindIndex(text->data, find->data);
	int _r = (int)_v;
	return _r;
}
static CyString* cythTextToUpper(CyString* text) {
	const char * _v = TextToUpper(text->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythTextToLower(CyString* text) {
	const char * _v = TextToLower(text->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythTextToPascal(CyString* text) {
	const char * _v = TextToPascal(text->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythTextToSnake(CyString* text) {
	const char * _v = TextToSnake(text->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static CyString* cythTextToCamel(CyString* text) {
	const char * _v = TextToCamel(text->data);
	CyString* _r = (CyString*)cyth_alloc(1, sizeof(CyString) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythTextToInteger(CyString* text) {
	int _v = TextToInteger(text->data);
	int _r = (int)_v;
	return _r;
}
static float cythTextToFloat(CyString* text) {
	float _v = TextToFloat(text->data);
	float _r = (float)_v;
	return _r;
}
static void cythDrawLine3D(Vector3* startPos, Vector3* endPos, Color* color) {
	DrawLine3D(*startPos, *endPos, *color);
}
static void cythDrawPoint3D(Vector3* position, Color* color) {
	DrawPoint3D(*position, *color);
}
static void cythDrawCircle3D(Vector3* center, float radius, Vector3* rotationAxis, float rotationAngle, Color* color) {
	DrawCircle3D(*center, radius, *rotationAxis, rotationAngle, *color);
}
static void cythDrawTriangle3D(Vector3* v1, Vector3* v2, Vector3* v3, Color* color) {
	DrawTriangle3D(*v1, *v2, *v3, *color);
}
static void cythDrawTriangleStrip3D(const Vector3 * points, int pointCount, Color* color) {
	DrawTriangleStrip3D(points, pointCount, *color);
}
static void cythDrawCube(Vector3* position, float width, float height, float length, Color* color) {
	DrawCube(*position, width, height, length, *color);
}
static void cythDrawCubeV(Vector3* position, Vector3* size, Color* color) {
	DrawCubeV(*position, *size, *color);
}
static void cythDrawCubeWires(Vector3* position, float width, float height, float length, Color* color) {
	DrawCubeWires(*position, width, height, length, *color);
}
static void cythDrawCubeWiresV(Vector3* position, Vector3* size, Color* color) {
	DrawCubeWiresV(*position, *size, *color);
}
static void cythDrawSphere(Vector3* centerPos, float radius, Color* color) {
	DrawSphere(*centerPos, radius, *color);
}
static void cythDrawSphereEx(Vector3* centerPos, float radius, int rings, int slices, Color* color) {
	DrawSphereEx(*centerPos, radius, rings, slices, *color);
}
static void cythDrawSphereWires(Vector3* centerPos, float radius, int rings, int slices, Color* color) {
	DrawSphereWires(*centerPos, radius, rings, slices, *color);
}
static void cythDrawCylinder(Vector3* position, float radiusTop, float radiusBottom, float height, int slices, Color* color) {
	DrawCylinder(*position, radiusTop, radiusBottom, height, slices, *color);
}
static void cythDrawCylinderEx(Vector3* startPos, Vector3* endPos, float startRadius, float endRadius, int sides, Color* color) {
	DrawCylinderEx(*startPos, *endPos, startRadius, endRadius, sides, *color);
}
static void cythDrawCylinderWires(Vector3* position, float radiusTop, float radiusBottom, float height, int slices, Color* color) {
	DrawCylinderWires(*position, radiusTop, radiusBottom, height, slices, *color);
}
static void cythDrawCylinderWiresEx(Vector3* startPos, Vector3* endPos, float startRadius, float endRadius, int sides, Color* color) {
	DrawCylinderWiresEx(*startPos, *endPos, startRadius, endRadius, sides, *color);
}
static void cythDrawCapsule(Vector3* startPos, Vector3* endPos, float radius, int slices, int rings, Color* color) {
	DrawCapsule(*startPos, *endPos, radius, slices, rings, *color);
}
static void cythDrawCapsuleWires(Vector3* startPos, Vector3* endPos, float radius, int slices, int rings, Color* color) {
	DrawCapsuleWires(*startPos, *endPos, radius, slices, rings, *color);
}
static void cythDrawPlane(Vector3* centerPos, Vector2* size, Color* color) {
	DrawPlane(*centerPos, *size, *color);
}
static void cythDrawRay(Ray* ray, Color* color) {
	DrawRay(*ray, *color);
}
static void cythDrawGrid(int slices, float spacing) {
	DrawGrid(slices, spacing);
}
static Model* cythLoadModel(CyString* fileName) {
	Model _v = LoadModel(fileName->data);
	Model* _r = (Model*)cyth_alloc(1, sizeof(Model));
	*_r = _v;
	return _r;
}
static Model* cythLoadModelFromMesh(Mesh* mesh) {
	Model _v = LoadModelFromMesh(*mesh);
	Model* _r = (Model*)cyth_alloc(1, sizeof(Model));
	*_r = _v;
	return _r;
}
static bool cythIsModelValid(Model* model) {
	bool _v = IsModelValid(*model);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadModel(Model* model) {
	UnloadModel(*model);
}
static BoundingBox* cythGetModelBoundingBox(Model* model) {
	BoundingBox _v = GetModelBoundingBox(*model);
	BoundingBox* _r = (BoundingBox*)cyth_alloc(1, sizeof(BoundingBox));
	*_r = _v;
	return _r;
}
static void cythDrawModel(Model* model, Vector3* position, float scale, Color* tint) {
	DrawModel(*model, *position, scale, *tint);
}
static void cythDrawModelEx(Model* model, Vector3* position, Vector3* rotationAxis, float rotationAngle, Vector3* scale, Color* tint) {
	DrawModelEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);
}
static void cythDrawModelWires(Model* model, Vector3* position, float scale, Color* tint) {
	DrawModelWires(*model, *position, scale, *tint);
}
static void cythDrawModelWiresEx(Model* model, Vector3* position, Vector3* rotationAxis, float rotationAngle, Vector3* scale, Color* tint) {
	DrawModelWiresEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);
}
static void cythDrawModelPoints(Model* model, Vector3* position, float scale, Color* tint) {
	DrawModelPoints(*model, *position, scale, *tint);
}
static void cythDrawModelPointsEx(Model* model, Vector3* position, Vector3* rotationAxis, float rotationAngle, Vector3* scale, Color* tint) {
	DrawModelPointsEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);
}
static void cythDrawBoundingBox(BoundingBox* box, Color* color) {
	DrawBoundingBox(*box, *color);
}
static void cythDrawBillboard(Camera* camera, Texture2D* texture, Vector3* position, float scale, Color* tint) {
	DrawBillboard(*camera, *texture, *position, scale, *tint);
}
static void cythDrawBillboardRec(Camera* camera, Texture2D* texture, Rectangle* source, Vector3* position, Vector2* size, Color* tint) {
	DrawBillboardRec(*camera, *texture, *source, *position, *size, *tint);
}
static void cythDrawBillboardPro(Camera* camera, Texture2D* texture, Rectangle* source, Vector3* position, Vector3* up, Vector2* size, Vector2* origin, float rotation, Color* tint) {
	DrawBillboardPro(*camera, *texture, *source, *position, *up, *size, *origin, rotation, *tint);
}
static void cythUploadMesh(Mesh * mesh, bool dynamic) {
	UploadMesh(mesh, dynamic);
}
static void cythUpdateMeshBuffer(Mesh* mesh, int index, const void * data, int dataSize, int offset) {
	UpdateMeshBuffer(*mesh, index, data, dataSize, offset);
}
static void cythUnloadMesh(Mesh* mesh) {
	UnloadMesh(*mesh);
}
static void cythDrawMesh(Mesh* mesh, Material* material, Matrix* transform) {
	DrawMesh(*mesh, *material, *transform);
}
static void cythDrawMeshInstanced(Mesh* mesh, Material* material, const Matrix * transforms, int instances) {
	DrawMeshInstanced(*mesh, *material, transforms, instances);
}
static BoundingBox* cythGetMeshBoundingBox(Mesh* mesh) {
	BoundingBox _v = GetMeshBoundingBox(*mesh);
	BoundingBox* _r = (BoundingBox*)cyth_alloc(1, sizeof(BoundingBox));
	*_r = _v;
	return _r;
}
static void cythGenMeshTangents(Mesh * mesh) {
	GenMeshTangents(mesh);
}
static bool cythExportMesh(Mesh* mesh, CyString* fileName) {
	bool _v = ExportMesh(*mesh, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportMeshAsCode(Mesh* mesh, CyString* fileName) {
	bool _v = ExportMeshAsCode(*mesh, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static Mesh* cythGenMeshPoly(int sides, float radius) {
	Mesh _v = GenMeshPoly(sides, radius);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshPlane(float width, float length, int resX, int resZ) {
	Mesh _v = GenMeshPlane(width, length, resX, resZ);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCube(float width, float height, float length) {
	Mesh _v = GenMeshCube(width, height, length);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshSphere(float radius, int rings, int slices) {
	Mesh _v = GenMeshSphere(radius, rings, slices);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshHemiSphere(float radius, int rings, int slices) {
	Mesh _v = GenMeshHemiSphere(radius, rings, slices);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCylinder(float radius, float height, int slices) {
	Mesh _v = GenMeshCylinder(radius, height, slices);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCone(float radius, float height, int slices) {
	Mesh _v = GenMeshCone(radius, height, slices);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshTorus(float radius, float size, int radSeg, int sides) {
	Mesh _v = GenMeshTorus(radius, size, radSeg, sides);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshKnot(float radius, float size, int radSeg, int sides) {
	Mesh _v = GenMeshKnot(radius, size, radSeg, sides);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshHeightmap(Image* heightmap, Vector3* size) {
	Mesh _v = GenMeshHeightmap(*heightmap, *size);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCubicmap(Image* cubicmap, Vector3* cubeSize) {
	Mesh _v = GenMeshCubicmap(*cubicmap, *cubeSize);
	Mesh* _r = (Mesh*)cyth_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Material * cythLoadMaterials(CyString* fileName, int * materialCount) {
	Material * _v = LoadMaterials(fileName->data, materialCount);
	Material * _r = (Material *)_v;
	return _r;
}
static Material* cythLoadMaterialDefault() {
	Material _v = LoadMaterialDefault();
	Material* _r = (Material*)cyth_alloc(1, sizeof(Material));
	*_r = _v;
	return _r;
}
static bool cythIsMaterialValid(Material* material) {
	bool _v = IsMaterialValid(*material);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadMaterial(Material* material) {
	UnloadMaterial(*material);
}
static void cythSetMaterialTexture(Material * material, int mapType, Texture2D* texture) {
	SetMaterialTexture(material, mapType, *texture);
}
static void cythSetModelMeshMaterial(Model * model, int meshId, int materialId) {
	SetModelMeshMaterial(model, meshId, materialId);
}
static ModelAnimation * cythLoadModelAnimations(CyString* fileName, int * animCount) {
	ModelAnimation * _v = LoadModelAnimations(fileName->data, animCount);
	ModelAnimation * _r = (ModelAnimation *)_v;
	return _r;
}
static void cythUpdateModelAnimation(Model* model, ModelAnimation* anim, int frame) {
	UpdateModelAnimation(*model, *anim, frame);
}
static void cythUpdateModelAnimationBones(Model* model, ModelAnimation* anim, int frame) {
	UpdateModelAnimationBones(*model, *anim, frame);
}
static void cythUnloadModelAnimation(ModelAnimation* anim) {
	UnloadModelAnimation(*anim);
}
static void cythUnloadModelAnimations(ModelAnimation * animations, int animCount) {
	UnloadModelAnimations(animations, animCount);
}
static bool cythIsModelAnimationValid(Model* model, ModelAnimation* anim) {
	bool _v = IsModelAnimationValid(*model, *anim);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionSpheres(Vector3* center1, float radius1, Vector3* center2, float radius2) {
	bool _v = CheckCollisionSpheres(*center1, radius1, *center2, radius2);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionBoxes(BoundingBox* box1, BoundingBox* box2) {
	bool _v = CheckCollisionBoxes(*box1, *box2);
	bool _r = (bool)_v;
	return _r;
}
static bool cythCheckCollisionBoxSphere(BoundingBox* box, Vector3* center, float radius) {
	bool _v = CheckCollisionBoxSphere(*box, *center, radius);
	bool _r = (bool)_v;
	return _r;
}
static RayCollision* cythGetRayCollisionSphere(Ray* ray, Vector3* center, float radius) {
	RayCollision _v = GetRayCollisionSphere(*ray, *center, radius);
	RayCollision* _r = (RayCollision*)cyth_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionBox(Ray* ray, BoundingBox* box) {
	RayCollision _v = GetRayCollisionBox(*ray, *box);
	RayCollision* _r = (RayCollision*)cyth_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionMesh(Ray* ray, Mesh* mesh, Matrix* transform) {
	RayCollision _v = GetRayCollisionMesh(*ray, *mesh, *transform);
	RayCollision* _r = (RayCollision*)cyth_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionTriangle(Ray* ray, Vector3* p1, Vector3* p2, Vector3* p3) {
	RayCollision _v = GetRayCollisionTriangle(*ray, *p1, *p2, *p3);
	RayCollision* _r = (RayCollision*)cyth_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionQuad(Ray* ray, Vector3* p1, Vector3* p2, Vector3* p3, Vector3* p4) {
	RayCollision _v = GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);
	RayCollision* _r = (RayCollision*)cyth_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static void cythInitAudioDevice() {
	InitAudioDevice();
}
static void cythCloseAudioDevice() {
	CloseAudioDevice();
}
static bool cythIsAudioDeviceReady() {
	bool _v = IsAudioDeviceReady();
	bool _r = (bool)_v;
	return _r;
}
static void cythSetMasterVolume(float volume) {
	SetMasterVolume(volume);
}
static float cythGetMasterVolume() {
	float _v = GetMasterVolume();
	float _r = (float)_v;
	return _r;
}
static Wave* cythLoadWave(CyString* fileName) {
	Wave _v = LoadWave(fileName->data);
	Wave* _r = (Wave*)cyth_alloc(1, sizeof(Wave));
	*_r = _v;
	return _r;
}
static Wave* cythLoadWaveFromMemory(CyString* fileType, const unsigned char * fileData, int dataSize) {
	Wave _v = LoadWaveFromMemory(fileType->data, fileData, dataSize);
	Wave* _r = (Wave*)cyth_alloc(1, sizeof(Wave));
	*_r = _v;
	return _r;
}
static bool cythIsWaveValid(Wave* wave) {
	bool _v = IsWaveValid(*wave);
	bool _r = (bool)_v;
	return _r;
}
static Sound* cythLoadSound(CyString* fileName) {
	Sound _v = LoadSound(fileName->data);
	Sound* _r = (Sound*)cyth_alloc(1, sizeof(Sound));
	*_r = _v;
	return _r;
}
static Sound* cythLoadSoundFromWave(Wave* wave) {
	Sound _v = LoadSoundFromWave(*wave);
	Sound* _r = (Sound*)cyth_alloc(1, sizeof(Sound));
	*_r = _v;
	return _r;
}
static Sound* cythLoadSoundAlias(Sound* source) {
	Sound _v = LoadSoundAlias(*source);
	Sound* _r = (Sound*)cyth_alloc(1, sizeof(Sound));
	*_r = _v;
	return _r;
}
static bool cythIsSoundValid(Sound* sound) {
	bool _v = IsSoundValid(*sound);
	bool _r = (bool)_v;
	return _r;
}
static void cythUpdateSound(Sound* sound, const void * data, int sampleCount) {
	UpdateSound(*sound, data, sampleCount);
}
static void cythUnloadWave(Wave* wave) {
	UnloadWave(*wave);
}
static void cythUnloadSound(Sound* sound) {
	UnloadSound(*sound);
}
static void cythUnloadSoundAlias(Sound* alias) {
	UnloadSoundAlias(*alias);
}
static bool cythExportWave(Wave* wave, CyString* fileName) {
	bool _v = ExportWave(*wave, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportWaveAsCode(Wave* wave, CyString* fileName) {
	bool _v = ExportWaveAsCode(*wave, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static void cythPlaySound(Sound* sound) {
	PlaySound(*sound);
}
static void cythStopSound(Sound* sound) {
	StopSound(*sound);
}
static void cythPauseSound(Sound* sound) {
	PauseSound(*sound);
}
static void cythResumeSound(Sound* sound) {
	ResumeSound(*sound);
}
static bool cythIsSoundPlaying(Sound* sound) {
	bool _v = IsSoundPlaying(*sound);
	bool _r = (bool)_v;
	return _r;
}
static void cythSetSoundVolume(Sound* sound, float volume) {
	SetSoundVolume(*sound, volume);
}
static void cythSetSoundPitch(Sound* sound, float pitch) {
	SetSoundPitch(*sound, pitch);
}
static void cythSetSoundPan(Sound* sound, float pan) {
	SetSoundPan(*sound, pan);
}
static Wave* cythWaveCopy(Wave* wave) {
	Wave _v = WaveCopy(*wave);
	Wave* _r = (Wave*)cyth_alloc(1, sizeof(Wave));
	*_r = _v;
	return _r;
}
static void cythWaveCrop(Wave * wave, int initFrame, int finalFrame) {
	WaveCrop(wave, initFrame, finalFrame);
}
static void cythWaveFormat(Wave * wave, int sampleRate, int sampleSize, int channels) {
	WaveFormat(wave, sampleRate, sampleSize, channels);
}
static float * cythLoadWaveSamples(Wave* wave) {
	float * _v = LoadWaveSamples(*wave);
	float * _r = (float *)_v;
	return _r;
}
static void cythUnloadWaveSamples(float * samples) {
	UnloadWaveSamples(samples);
}
static Music* cythLoadMusicStream(CyString* fileName) {
	Music _v = LoadMusicStream(fileName->data);
	Music* _r = (Music*)cyth_alloc(1, sizeof(Music));
	*_r = _v;
	return _r;
}
static Music* cythLoadMusicStreamFromMemory(CyString* fileType, const unsigned char * data, int dataSize) {
	Music _v = LoadMusicStreamFromMemory(fileType->data, data, dataSize);
	Music* _r = (Music*)cyth_alloc(1, sizeof(Music));
	*_r = _v;
	return _r;
}
static bool cythIsMusicValid(Music* music) {
	bool _v = IsMusicValid(*music);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadMusicStream(Music* music) {
	UnloadMusicStream(*music);
}
static void cythPlayMusicStream(Music* music) {
	PlayMusicStream(*music);
}
static bool cythIsMusicStreamPlaying(Music* music) {
	bool _v = IsMusicStreamPlaying(*music);
	bool _r = (bool)_v;
	return _r;
}
static void cythUpdateMusicStream(Music* music) {
	UpdateMusicStream(*music);
}
static void cythStopMusicStream(Music* music) {
	StopMusicStream(*music);
}
static void cythPauseMusicStream(Music* music) {
	PauseMusicStream(*music);
}
static void cythResumeMusicStream(Music* music) {
	ResumeMusicStream(*music);
}
static void cythSeekMusicStream(Music* music, float position) {
	SeekMusicStream(*music, position);
}
static void cythSetMusicVolume(Music* music, float volume) {
	SetMusicVolume(*music, volume);
}
static void cythSetMusicPitch(Music* music, float pitch) {
	SetMusicPitch(*music, pitch);
}
static void cythSetMusicPan(Music* music, float pan) {
	SetMusicPan(*music, pan);
}
static float cythGetMusicTimeLength(Music* music) {
	float _v = GetMusicTimeLength(*music);
	float _r = (float)_v;
	return _r;
}
static float cythGetMusicTimePlayed(Music* music) {
	float _v = GetMusicTimePlayed(*music);
	float _r = (float)_v;
	return _r;
}
static AudioStream* cythLoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
	AudioStream _v = LoadAudioStream(sampleRate, sampleSize, channels);
	AudioStream* _r = (AudioStream*)cyth_alloc(1, sizeof(AudioStream));
	*_r = _v;
	return _r;
}
static bool cythIsAudioStreamValid(AudioStream* stream) {
	bool _v = IsAudioStreamValid(*stream);
	bool _r = (bool)_v;
	return _r;
}
static void cythUnloadAudioStream(AudioStream* stream) {
	UnloadAudioStream(*stream);
}
static void cythUpdateAudioStream(AudioStream* stream, const void * data, int frameCount) {
	UpdateAudioStream(*stream, data, frameCount);
}
static bool cythIsAudioStreamProcessed(AudioStream* stream) {
	bool _v = IsAudioStreamProcessed(*stream);
	bool _r = (bool)_v;
	return _r;
}
static void cythPlayAudioStream(AudioStream* stream) {
	PlayAudioStream(*stream);
}
static void cythPauseAudioStream(AudioStream* stream) {
	PauseAudioStream(*stream);
}
static void cythResumeAudioStream(AudioStream* stream) {
	ResumeAudioStream(*stream);
}
static bool cythIsAudioStreamPlaying(AudioStream* stream) {
	bool _v = IsAudioStreamPlaying(*stream);
	bool _r = (bool)_v;
	return _r;
}
static void cythStopAudioStream(AudioStream* stream) {
	StopAudioStream(*stream);
}
static void cythSetAudioStreamVolume(AudioStream* stream, float volume) {
	SetAudioStreamVolume(*stream, volume);
}
static void cythSetAudioStreamPitch(AudioStream* stream, float pitch) {
	SetAudioStreamPitch(*stream, pitch);
}
static void cythSetAudioStreamPan(AudioStream* stream, float pan) {
	SetAudioStreamPan(*stream, pan);
}
static void cythSetAudioStreamBufferSizeDefault(int size) {
	SetAudioStreamBufferSizeDefault(size);
}
static void cythSetAudioStreamCallback(AudioStream* stream, AudioCallback* callback) {
	SetAudioStreamCallback(*stream, *callback);
}
static void cythAttachAudioStreamProcessor(AudioStream* stream, AudioCallback* processor) {
	AttachAudioStreamProcessor(*stream, *processor);
}
static void cythDetachAudioStreamProcessor(AudioStream* stream, AudioCallback* processor) {
	DetachAudioStreamProcessor(*stream, *processor);
}
static void cythAttachAudioMixedProcessor(AudioCallback* processor) {
	AttachAudioMixedProcessor(*processor);
}
static void cythDetachAudioMixedProcessor(AudioCallback* processor) {
	DetachAudioMixedProcessor(*processor);
}
#define cyth_load_raylib_functions(_ctx) do { \
  cyth_load_function((_ctx), "void initWindow(int width, int height, string title)", (uintptr_t)cythInitWindow); \
  cyth_load_function((_ctx), "void closeWindow()", (uintptr_t)cythCloseWindow); \
  cyth_load_function((_ctx), "bool windowShouldClose()", (uintptr_t)cythWindowShouldClose); \
  cyth_load_function((_ctx), "bool isWindowReady()", (uintptr_t)cythIsWindowReady); \
  cyth_load_function((_ctx), "bool isWindowFullscreen()", (uintptr_t)cythIsWindowFullscreen); \
  cyth_load_function((_ctx), "bool isWindowHidden()", (uintptr_t)cythIsWindowHidden); \
  cyth_load_function((_ctx), "bool isWindowMinimized()", (uintptr_t)cythIsWindowMinimized); \
  cyth_load_function((_ctx), "bool isWindowMaximized()", (uintptr_t)cythIsWindowMaximized); \
  cyth_load_function((_ctx), "bool isWindowFocused()", (uintptr_t)cythIsWindowFocused); \
  cyth_load_function((_ctx), "bool isWindowResized()", (uintptr_t)cythIsWindowResized); \
  cyth_load_function((_ctx), "bool isWindowState(int flag)", (uintptr_t)cythIsWindowState); \
  cyth_load_function((_ctx), "void setWindowState(int flags)", (uintptr_t)cythSetWindowState); \
  cyth_load_function((_ctx), "void clearWindowState(int flags)", (uintptr_t)cythClearWindowState); \
  cyth_load_function((_ctx), "void toggleFullscreen()", (uintptr_t)cythToggleFullscreen); \
  cyth_load_function((_ctx), "void toggleBorderlessWindowed()", (uintptr_t)cythToggleBorderlessWindowed); \
  cyth_load_function((_ctx), "void maximizeWindow()", (uintptr_t)cythMaximizeWindow); \
  cyth_load_function((_ctx), "void minimizeWindow()", (uintptr_t)cythMinimizeWindow); \
  cyth_load_function((_ctx), "void restoreWindow()", (uintptr_t)cythRestoreWindow); \
  cyth_load_function((_ctx), "void setWindowIcon(Image image)", (uintptr_t)cythSetWindowIcon); \
  cyth_load_function((_ctx), "void setWindowIcons(Image images, int count)", (uintptr_t)cythSetWindowIcons); \
  cyth_load_function((_ctx), "void setWindowTitle(string title)", (uintptr_t)cythSetWindowTitle); \
  cyth_load_function((_ctx), "void setWindowPosition(int x, int y)", (uintptr_t)cythSetWindowPosition); \
  cyth_load_function((_ctx), "void setWindowMonitor(int monitor)", (uintptr_t)cythSetWindowMonitor); \
  cyth_load_function((_ctx), "void setWindowMinSize(int width, int height)", (uintptr_t)cythSetWindowMinSize); \
  cyth_load_function((_ctx), "void setWindowMaxSize(int width, int height)", (uintptr_t)cythSetWindowMaxSize); \
  cyth_load_function((_ctx), "void setWindowSize(int width, int height)", (uintptr_t)cythSetWindowSize); \
  cyth_load_function((_ctx), "void setWindowOpacity(float opacity)", (uintptr_t)cythSetWindowOpacity); \
  cyth_load_function((_ctx), "void setWindowFocused()", (uintptr_t)cythSetWindowFocused); \
  cyth_load_function((_ctx), "any getWindowHandle()", (uintptr_t)cythGetWindowHandle); \
  cyth_load_function((_ctx), "int getScreenWidth()", (uintptr_t)cythGetScreenWidth); \
  cyth_load_function((_ctx), "int getScreenHeight()", (uintptr_t)cythGetScreenHeight); \
  cyth_load_function((_ctx), "int getRenderWidth()", (uintptr_t)cythGetRenderWidth); \
  cyth_load_function((_ctx), "int getRenderHeight()", (uintptr_t)cythGetRenderHeight); \
  cyth_load_function((_ctx), "int getMonitorCount()", (uintptr_t)cythGetMonitorCount); \
  cyth_load_function((_ctx), "int getCurrentMonitor()", (uintptr_t)cythGetCurrentMonitor); \
  cyth_load_function((_ctx), "Vector2 getMonitorPosition(int monitor)", (uintptr_t)cythGetMonitorPosition); \
  cyth_load_function((_ctx), "int getMonitorWidth(int monitor)", (uintptr_t)cythGetMonitorWidth); \
  cyth_load_function((_ctx), "int getMonitorHeight(int monitor)", (uintptr_t)cythGetMonitorHeight); \
  cyth_load_function((_ctx), "int getMonitorPhysicalWidth(int monitor)", (uintptr_t)cythGetMonitorPhysicalWidth); \
  cyth_load_function((_ctx), "int getMonitorPhysicalHeight(int monitor)", (uintptr_t)cythGetMonitorPhysicalHeight); \
  cyth_load_function((_ctx), "int getMonitorRefreshRate(int monitor)", (uintptr_t)cythGetMonitorRefreshRate); \
  cyth_load_function((_ctx), "Vector2 getWindowPosition()", (uintptr_t)cythGetWindowPosition); \
  cyth_load_function((_ctx), "Vector2 getWindowScaleDPI()", (uintptr_t)cythGetWindowScaleDPI); \
  cyth_load_function((_ctx), "string getMonitorName(int monitor)", (uintptr_t)cythGetMonitorName); \
  cyth_load_function((_ctx), "void setClipboardText(string text)", (uintptr_t)cythSetClipboardText); \
  cyth_load_function((_ctx), "string getClipboardText()", (uintptr_t)cythGetClipboardText); \
  cyth_load_function((_ctx), "Image getClipboardImage()", (uintptr_t)cythGetClipboardImage); \
  cyth_load_function((_ctx), "void enableEventWaiting()", (uintptr_t)cythEnableEventWaiting); \
  cyth_load_function((_ctx), "void disableEventWaiting()", (uintptr_t)cythDisableEventWaiting); \
  cyth_load_function((_ctx), "void showCursor()", (uintptr_t)cythShowCursor); \
  cyth_load_function((_ctx), "void hideCursor()", (uintptr_t)cythHideCursor); \
  cyth_load_function((_ctx), "bool isCursorHidden()", (uintptr_t)cythIsCursorHidden); \
  cyth_load_function((_ctx), "void enableCursor()", (uintptr_t)cythEnableCursor); \
  cyth_load_function((_ctx), "void disableCursor()", (uintptr_t)cythDisableCursor); \
  cyth_load_function((_ctx), "bool isCursorOnScreen()", (uintptr_t)cythIsCursorOnScreen); \
  cyth_load_function((_ctx), "void clearBackground(Color color)", (uintptr_t)cythClearBackground); \
  cyth_load_function((_ctx), "void beginDrawing()", (uintptr_t)cythBeginDrawing); \
  cyth_load_function((_ctx), "void endDrawing()", (uintptr_t)cythEndDrawing); \
  cyth_load_function((_ctx), "void beginMode2D(Camera2D camera)", (uintptr_t)cythBeginMode2D); \
  cyth_load_function((_ctx), "void endMode2D()", (uintptr_t)cythEndMode2D); \
  cyth_load_function((_ctx), "void beginMode3D(Camera3D camera)", (uintptr_t)cythBeginMode3D); \
  cyth_load_function((_ctx), "void endMode3D()", (uintptr_t)cythEndMode3D); \
  cyth_load_function((_ctx), "void beginTextureMode(RenderTexture2D target)", (uintptr_t)cythBeginTextureMode); \
  cyth_load_function((_ctx), "void endTextureMode()", (uintptr_t)cythEndTextureMode); \
  cyth_load_function((_ctx), "void beginShaderMode(Shader shader)", (uintptr_t)cythBeginShaderMode); \
  cyth_load_function((_ctx), "void endShaderMode()", (uintptr_t)cythEndShaderMode); \
  cyth_load_function((_ctx), "void beginBlendMode(int mode)", (uintptr_t)cythBeginBlendMode); \
  cyth_load_function((_ctx), "void endBlendMode()", (uintptr_t)cythEndBlendMode); \
  cyth_load_function((_ctx), "void beginScissorMode(int x, int y, int width, int height)", (uintptr_t)cythBeginScissorMode); \
  cyth_load_function((_ctx), "void endScissorMode()", (uintptr_t)cythEndScissorMode); \
  cyth_load_function((_ctx), "void beginVrStereoMode(VrStereoConfig config)", (uintptr_t)cythBeginVrStereoMode); \
  cyth_load_function((_ctx), "void endVrStereoMode()", (uintptr_t)cythEndVrStereoMode); \
  cyth_load_function((_ctx), "VrStereoConfig loadVrStereoConfig(VrDeviceInfo device)", (uintptr_t)cythLoadVrStereoConfig); \
  cyth_load_function((_ctx), "void unloadVrStereoConfig(VrStereoConfig config)", (uintptr_t)cythUnloadVrStereoConfig); \
  cyth_load_function((_ctx), "Shader loadShader(string vsFileName, string fsFileName)", (uintptr_t)cythLoadShader); \
  cyth_load_function((_ctx), "Shader loadShaderFromMemory(string vsCode, string fsCode)", (uintptr_t)cythLoadShaderFromMemory); \
  cyth_load_function((_ctx), "bool isShaderValid(Shader shader)", (uintptr_t)cythIsShaderValid); \
  cyth_load_function((_ctx), "int getShaderLocation(Shader shader, string uniformName)", (uintptr_t)cythGetShaderLocation); \
  cyth_load_function((_ctx), "int getShaderLocationAttrib(Shader shader, string attribName)", (uintptr_t)cythGetShaderLocationAttrib); \
  cyth_load_function((_ctx), "void setShaderValue(Shader shader, int locIndex, any value, int uniformType)", (uintptr_t)cythSetShaderValue); \
  cyth_load_function((_ctx), "void setShaderValueV(Shader shader, int locIndex, any value, int uniformType, int count)", (uintptr_t)cythSetShaderValueV); \
  cyth_load_function((_ctx), "void setShaderValueMatrix(Shader shader, int locIndex, Matrix mat)", (uintptr_t)cythSetShaderValueMatrix); \
  cyth_load_function((_ctx), "void setShaderValueTexture(Shader shader, int locIndex, Texture2D texture)", (uintptr_t)cythSetShaderValueTexture); \
  cyth_load_function((_ctx), "void unloadShader(Shader shader)", (uintptr_t)cythUnloadShader); \
  cyth_load_function((_ctx), "Ray getScreenToWorldRay(Vector2 position, Camera camera)", (uintptr_t)cythGetScreenToWorldRay); \
  cyth_load_function((_ctx), "Ray getScreenToWorldRayEx(Vector2 position, Camera camera, int width, int height)", (uintptr_t)cythGetScreenToWorldRayEx); \
  cyth_load_function((_ctx), "Vector2 getWorldToScreen(Vector3 position, Camera camera)", (uintptr_t)cythGetWorldToScreen); \
  cyth_load_function((_ctx), "Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height)", (uintptr_t)cythGetWorldToScreenEx); \
  cyth_load_function((_ctx), "Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera)", (uintptr_t)cythGetWorldToScreen2D); \
  cyth_load_function((_ctx), "Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera)", (uintptr_t)cythGetScreenToWorld2D); \
  cyth_load_function((_ctx), "Matrix getCameraMatrix(Camera camera)", (uintptr_t)cythGetCameraMatrix); \
  cyth_load_function((_ctx), "Matrix getCameraMatrix2D(Camera2D camera)", (uintptr_t)cythGetCameraMatrix2D); \
  cyth_load_function((_ctx), "void setTargetFPS(int fps)", (uintptr_t)cythSetTargetFPS); \
  cyth_load_function((_ctx), "float getFrameTime()", (uintptr_t)cythGetFrameTime); \
  cyth_load_function((_ctx), "float getTime()", (uintptr_t)cythGetTime); \
  cyth_load_function((_ctx), "int getFPS()", (uintptr_t)cythGetFPS); \
  cyth_load_function((_ctx), "void swapScreenBuffer()", (uintptr_t)cythSwapScreenBuffer); \
  cyth_load_function((_ctx), "void pollInputEvents()", (uintptr_t)cythPollInputEvents); \
  cyth_load_function((_ctx), "void waitTime(float seconds)", (uintptr_t)cythWaitTime); \
  cyth_load_function((_ctx), "void setRandomSeed(int seed)", (uintptr_t)cythSetRandomSeed); \
  cyth_load_function((_ctx), "int getRandomValue(int min, int max)", (uintptr_t)cythGetRandomValue); \
  cyth_load_function((_ctx), "any loadRandomSequence(int count, int min, int max)", (uintptr_t)cythLoadRandomSequence); \
  cyth_load_function((_ctx), "void unloadRandomSequence(any sequence)", (uintptr_t)cythUnloadRandomSequence); \
  cyth_load_function((_ctx), "void takeScreenshot(string fileName)", (uintptr_t)cythTakeScreenshot); \
  cyth_load_function((_ctx), "void setConfigFlags(int flags)", (uintptr_t)cythSetConfigFlags); \
  cyth_load_function((_ctx), "void openURL(string url)", (uintptr_t)cythOpenURL); \
  cyth_load_function((_ctx), "void setTraceLogLevel(int logLevel)", (uintptr_t)cythSetTraceLogLevel); \
  cyth_load_function((_ctx), "any memAlloc(int size)", (uintptr_t)cythMemAlloc); \
  cyth_load_function((_ctx), "any memRealloc(any ptr, int size)", (uintptr_t)cythMemRealloc); \
  cyth_load_function((_ctx), "void memFree(any ptr)", (uintptr_t)cythMemFree); \
  cyth_load_function((_ctx), "void setTraceLogCallback(TraceLogCallback callback)", (uintptr_t)cythSetTraceLogCallback); \
  cyth_load_function((_ctx), "void setLoadFileDataCallback(LoadFileDataCallback callback)", (uintptr_t)cythSetLoadFileDataCallback); \
  cyth_load_function((_ctx), "void setSaveFileDataCallback(SaveFileDataCallback callback)", (uintptr_t)cythSetSaveFileDataCallback); \
  cyth_load_function((_ctx), "void setLoadFileTextCallback(LoadFileTextCallback callback)", (uintptr_t)cythSetLoadFileTextCallback); \
  cyth_load_function((_ctx), "void setSaveFileTextCallback(SaveFileTextCallback callback)", (uintptr_t)cythSetSaveFileTextCallback); \
  cyth_load_function((_ctx), "any loadFileData(string fileName, any dataSize)", (uintptr_t)cythLoadFileData); \
  cyth_load_function((_ctx), "void unloadFileData(any data)", (uintptr_t)cythUnloadFileData); \
  cyth_load_function((_ctx), "bool saveFileData(string fileName, any data, int dataSize)", (uintptr_t)cythSaveFileData); \
  cyth_load_function((_ctx), "bool exportDataAsCode(any data, int dataSize, string fileName)", (uintptr_t)cythExportDataAsCode); \
  cyth_load_function((_ctx), "char[] loadFileText(string fileName)", (uintptr_t)cythLoadFileText); \
  cyth_load_function((_ctx), "void unloadFileText(char[] text)", (uintptr_t)cythUnloadFileText); \
  cyth_load_function((_ctx), "bool saveFileText(string fileName, char[] text)", (uintptr_t)cythSaveFileText); \
  cyth_load_function((_ctx), "bool fileExists(string fileName)", (uintptr_t)cythFileExists); \
  cyth_load_function((_ctx), "bool directoryExists(string dirPath)", (uintptr_t)cythDirectoryExists); \
  cyth_load_function((_ctx), "bool isFileExtension(string fileName, string ext)", (uintptr_t)cythIsFileExtension); \
  cyth_load_function((_ctx), "int getFileLength(string fileName)", (uintptr_t)cythGetFileLength); \
  cyth_load_function((_ctx), "string getFileExtension(string fileName)", (uintptr_t)cythGetFileExtension); \
  cyth_load_function((_ctx), "string getFileName(string filePath)", (uintptr_t)cythGetFileName); \
  cyth_load_function((_ctx), "string getFileNameWithoutExt(string filePath)", (uintptr_t)cythGetFileNameWithoutExt); \
  cyth_load_function((_ctx), "string getDirectoryPath(string filePath)", (uintptr_t)cythGetDirectoryPath); \
  cyth_load_function((_ctx), "string getPrevDirectoryPath(string dirPath)", (uintptr_t)cythGetPrevDirectoryPath); \
  cyth_load_function((_ctx), "string getWorkingDirectory()", (uintptr_t)cythGetWorkingDirectory); \
  cyth_load_function((_ctx), "string getApplicationDirectory()", (uintptr_t)cythGetApplicationDirectory); \
  cyth_load_function((_ctx), "int makeDirectory(string dirPath)", (uintptr_t)cythMakeDirectory); \
  cyth_load_function((_ctx), "bool changeDirectory(string dir)", (uintptr_t)cythChangeDirectory); \
  cyth_load_function((_ctx), "bool isPathFile(string path)", (uintptr_t)cythIsPathFile); \
  cyth_load_function((_ctx), "bool isFileNameValid(string fileName)", (uintptr_t)cythIsFileNameValid); \
  cyth_load_function((_ctx), "FilePathList loadDirectoryFiles(string dirPath)", (uintptr_t)cythLoadDirectoryFiles); \
  cyth_load_function((_ctx), "FilePathList loadDirectoryFilesEx(string basePath, string filter, bool scanSubdirs)", (uintptr_t)cythLoadDirectoryFilesEx); \
  cyth_load_function((_ctx), "void unloadDirectoryFiles(FilePathList files)", (uintptr_t)cythUnloadDirectoryFiles); \
  cyth_load_function((_ctx), "bool isFileDropped()", (uintptr_t)cythIsFileDropped); \
  cyth_load_function((_ctx), "FilePathList loadDroppedFiles()", (uintptr_t)cythLoadDroppedFiles); \
  cyth_load_function((_ctx), "void unloadDroppedFiles(FilePathList files)", (uintptr_t)cythUnloadDroppedFiles); \
  cyth_load_function((_ctx), "int getFileModTime(string fileName)", (uintptr_t)cythGetFileModTime); \
  cyth_load_function((_ctx), "any compressData(any data, int dataSize, any compDataSize)", (uintptr_t)cythCompressData); \
  cyth_load_function((_ctx), "any decompressData(any compData, int compDataSize, any dataSize)", (uintptr_t)cythDecompressData); \
  cyth_load_function((_ctx), "char[] encodeDataBase64(any data, int dataSize, any outputSize)", (uintptr_t)cythEncodeDataBase64); \
  cyth_load_function((_ctx), "any decodeDataBase64(any data, any outputSize)", (uintptr_t)cythDecodeDataBase64); \
  cyth_load_function((_ctx), "int computeCRC32(any data, int dataSize)", (uintptr_t)cythComputeCRC32); \
  cyth_load_function((_ctx), "any computeMD5(any data, int dataSize)", (uintptr_t)cythComputeMD5); \
  cyth_load_function((_ctx), "any computeSHA1(any data, int dataSize)", (uintptr_t)cythComputeSHA1); \
  cyth_load_function((_ctx), "AutomationEventList loadAutomationEventList(string fileName)", (uintptr_t)cythLoadAutomationEventList); \
  cyth_load_function((_ctx), "void unloadAutomationEventList(AutomationEventList list)", (uintptr_t)cythUnloadAutomationEventList); \
  cyth_load_function((_ctx), "bool exportAutomationEventList(AutomationEventList list, string fileName)", (uintptr_t)cythExportAutomationEventList); \
  cyth_load_function((_ctx), "void setAutomationEventList(any list)", (uintptr_t)cythSetAutomationEventList); \
  cyth_load_function((_ctx), "void setAutomationEventBaseFrame(int frame)", (uintptr_t)cythSetAutomationEventBaseFrame); \
  cyth_load_function((_ctx), "void startAutomationEventRecording()", (uintptr_t)cythStartAutomationEventRecording); \
  cyth_load_function((_ctx), "void stopAutomationEventRecording()", (uintptr_t)cythStopAutomationEventRecording); \
  cyth_load_function((_ctx), "void playAutomationEvent(AutomationEvent event)", (uintptr_t)cythPlayAutomationEvent); \
  cyth_load_function((_ctx), "bool isKeyPressed(int key)", (uintptr_t)cythIsKeyPressed); \
  cyth_load_function((_ctx), "bool isKeyPressedRepeat(int key)", (uintptr_t)cythIsKeyPressedRepeat); \
  cyth_load_function((_ctx), "bool isKeyDown(int key)", (uintptr_t)cythIsKeyDown); \
  cyth_load_function((_ctx), "bool isKeyReleased(int key)", (uintptr_t)cythIsKeyReleased); \
  cyth_load_function((_ctx), "bool isKeyUp(int key)", (uintptr_t)cythIsKeyUp); \
  cyth_load_function((_ctx), "int getKeyPressed()", (uintptr_t)cythGetKeyPressed); \
  cyth_load_function((_ctx), "int getCharPressed()", (uintptr_t)cythGetCharPressed); \
  cyth_load_function((_ctx), "void setExitKey(int key)", (uintptr_t)cythSetExitKey); \
  cyth_load_function((_ctx), "bool isGamepadAvailable(int gamepad)", (uintptr_t)cythIsGamepadAvailable); \
  cyth_load_function((_ctx), "string getGamepadName(int gamepad)", (uintptr_t)cythGetGamepadName); \
  cyth_load_function((_ctx), "bool isGamepadButtonPressed(int gamepad, int button)", (uintptr_t)cythIsGamepadButtonPressed); \
  cyth_load_function((_ctx), "bool isGamepadButtonDown(int gamepad, int button)", (uintptr_t)cythIsGamepadButtonDown); \
  cyth_load_function((_ctx), "bool isGamepadButtonReleased(int gamepad, int button)", (uintptr_t)cythIsGamepadButtonReleased); \
  cyth_load_function((_ctx), "bool isGamepadButtonUp(int gamepad, int button)", (uintptr_t)cythIsGamepadButtonUp); \
  cyth_load_function((_ctx), "int getGamepadButtonPressed()", (uintptr_t)cythGetGamepadButtonPressed); \
  cyth_load_function((_ctx), "int getGamepadAxisCount(int gamepad)", (uintptr_t)cythGetGamepadAxisCount); \
  cyth_load_function((_ctx), "float getGamepadAxisMovement(int gamepad, int axis)", (uintptr_t)cythGetGamepadAxisMovement); \
  cyth_load_function((_ctx), "int setGamepadMappings(string mappings)", (uintptr_t)cythSetGamepadMappings); \
  cyth_load_function((_ctx), "void setGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration)", (uintptr_t)cythSetGamepadVibration); \
  cyth_load_function((_ctx), "bool isMouseButtonPressed(int button)", (uintptr_t)cythIsMouseButtonPressed); \
  cyth_load_function((_ctx), "bool isMouseButtonDown(int button)", (uintptr_t)cythIsMouseButtonDown); \
  cyth_load_function((_ctx), "bool isMouseButtonReleased(int button)", (uintptr_t)cythIsMouseButtonReleased); \
  cyth_load_function((_ctx), "bool isMouseButtonUp(int button)", (uintptr_t)cythIsMouseButtonUp); \
  cyth_load_function((_ctx), "int getMouseX()", (uintptr_t)cythGetMouseX); \
  cyth_load_function((_ctx), "int getMouseY()", (uintptr_t)cythGetMouseY); \
  cyth_load_function((_ctx), "Vector2 getMousePosition()", (uintptr_t)cythGetMousePosition); \
  cyth_load_function((_ctx), "Vector2 getMouseDelta()", (uintptr_t)cythGetMouseDelta); \
  cyth_load_function((_ctx), "void setMousePosition(int x, int y)", (uintptr_t)cythSetMousePosition); \
  cyth_load_function((_ctx), "void setMouseOffset(int offsetX, int offsetY)", (uintptr_t)cythSetMouseOffset); \
  cyth_load_function((_ctx), "void setMouseScale(float scaleX, float scaleY)", (uintptr_t)cythSetMouseScale); \
  cyth_load_function((_ctx), "float getMouseWheelMove()", (uintptr_t)cythGetMouseWheelMove); \
  cyth_load_function((_ctx), "Vector2 getMouseWheelMoveV()", (uintptr_t)cythGetMouseWheelMoveV); \
  cyth_load_function((_ctx), "void setMouseCursor(int cursor)", (uintptr_t)cythSetMouseCursor); \
  cyth_load_function((_ctx), "int getTouchX()", (uintptr_t)cythGetTouchX); \
  cyth_load_function((_ctx), "int getTouchY()", (uintptr_t)cythGetTouchY); \
  cyth_load_function((_ctx), "Vector2 getTouchPosition(int index)", (uintptr_t)cythGetTouchPosition); \
  cyth_load_function((_ctx), "int getTouchPointId(int index)", (uintptr_t)cythGetTouchPointId); \
  cyth_load_function((_ctx), "int getTouchPointCount()", (uintptr_t)cythGetTouchPointCount); \
  cyth_load_function((_ctx), "void setGesturesEnabled(int flags)", (uintptr_t)cythSetGesturesEnabled); \
  cyth_load_function((_ctx), "bool isGestureDetected(int gesture)", (uintptr_t)cythIsGestureDetected); \
  cyth_load_function((_ctx), "int getGestureDetected()", (uintptr_t)cythGetGestureDetected); \
  cyth_load_function((_ctx), "float getGestureHoldDuration()", (uintptr_t)cythGetGestureHoldDuration); \
  cyth_load_function((_ctx), "Vector2 getGestureDragVector()", (uintptr_t)cythGetGestureDragVector); \
  cyth_load_function((_ctx), "float getGestureDragAngle()", (uintptr_t)cythGetGestureDragAngle); \
  cyth_load_function((_ctx), "Vector2 getGesturePinchVector()", (uintptr_t)cythGetGesturePinchVector); \
  cyth_load_function((_ctx), "float getGesturePinchAngle()", (uintptr_t)cythGetGesturePinchAngle); \
  cyth_load_function((_ctx), "void updateCamera(any camera, int mode)", (uintptr_t)cythUpdateCamera); \
  cyth_load_function((_ctx), "void updateCameraPro(any camera, Vector3 movement, Vector3 rotation, float zoom)", (uintptr_t)cythUpdateCameraPro); \
  cyth_load_function((_ctx), "void setShapesTexture(Texture2D texture, Rectangle source)", (uintptr_t)cythSetShapesTexture); \
  cyth_load_function((_ctx), "Texture2D getShapesTexture()", (uintptr_t)cythGetShapesTexture); \
  cyth_load_function((_ctx), "Rectangle getShapesTextureRectangle()", (uintptr_t)cythGetShapesTextureRectangle); \
  cyth_load_function((_ctx), "void drawPixel(int posX, int posY, Color color)", (uintptr_t)cythDrawPixel); \
  cyth_load_function((_ctx), "void drawPixelV(Vector2 position, Color color)", (uintptr_t)cythDrawPixelV); \
  cyth_load_function((_ctx), "void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)", (uintptr_t)cythDrawLine); \
  cyth_load_function((_ctx), "void drawLineV(Vector2 startPos, Vector2 endPos, Color color)", (uintptr_t)cythDrawLineV); \
  cyth_load_function((_ctx), "void drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)", (uintptr_t)cythDrawLineEx); \
  cyth_load_function((_ctx), "void drawLineStrip(any points, int pointCount, Color color)", (uintptr_t)cythDrawLineStrip); \
  cyth_load_function((_ctx), "void drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)", (uintptr_t)cythDrawLineBezier); \
  cyth_load_function((_ctx), "void drawCircle(int centerX, int centerY, float radius, Color color)", (uintptr_t)cythDrawCircle); \
  cyth_load_function((_ctx), "void drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)", (uintptr_t)cythDrawCircleSector); \
  cyth_load_function((_ctx), "void drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)", (uintptr_t)cythDrawCircleSectorLines); \
  cyth_load_function((_ctx), "void drawCircleGradient(int centerX, int centerY, float radius, Color inner, Color outer)", (uintptr_t)cythDrawCircleGradient); \
  cyth_load_function((_ctx), "void drawCircleV(Vector2 center, float radius, Color color)", (uintptr_t)cythDrawCircleV); \
  cyth_load_function((_ctx), "void drawCircleLines(int centerX, int centerY, float radius, Color color)", (uintptr_t)cythDrawCircleLines); \
  cyth_load_function((_ctx), "void drawCircleLinesV(Vector2 center, float radius, Color color)", (uintptr_t)cythDrawCircleLinesV); \
  cyth_load_function((_ctx), "void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)", (uintptr_t)cythDrawEllipse); \
  cyth_load_function((_ctx), "void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)", (uintptr_t)cythDrawEllipseLines); \
  cyth_load_function((_ctx), "void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)", (uintptr_t)cythDrawRing); \
  cyth_load_function((_ctx), "void drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)", (uintptr_t)cythDrawRingLines); \
  cyth_load_function((_ctx), "void drawRectangle(int posX, int posY, int width, int height, Color color)", (uintptr_t)cythDrawRectangle); \
  cyth_load_function((_ctx), "void drawRectangleV(Vector2 position, Vector2 size, Color color)", (uintptr_t)cythDrawRectangleV); \
  cyth_load_function((_ctx), "void drawRectangleRec(Rectangle rec, Color color)", (uintptr_t)cythDrawRectangleRec); \
  cyth_load_function((_ctx), "void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)", (uintptr_t)cythDrawRectanglePro); \
  cyth_load_function((_ctx), "void drawRectangleGradientV(int posX, int posY, int width, int height, Color top, Color bottom)", (uintptr_t)cythDrawRectangleGradientV); \
  cyth_load_function((_ctx), "void drawRectangleGradientH(int posX, int posY, int width, int height, Color left, Color right)", (uintptr_t)cythDrawRectangleGradientH); \
  cyth_load_function((_ctx), "void drawRectangleGradientEx(Rectangle rec, Color topLeft, Color bottomLeft, Color topRight, Color bottomRight)", (uintptr_t)cythDrawRectangleGradientEx); \
  cyth_load_function((_ctx), "void drawRectangleLines(int posX, int posY, int width, int height, Color color)", (uintptr_t)cythDrawRectangleLines); \
  cyth_load_function((_ctx), "void drawRectangleLinesEx(Rectangle rec, float lineThick, Color color)", (uintptr_t)cythDrawRectangleLinesEx); \
  cyth_load_function((_ctx), "void drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)", (uintptr_t)cythDrawRectangleRounded); \
  cyth_load_function((_ctx), "void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, Color color)", (uintptr_t)cythDrawRectangleRoundedLines); \
  cyth_load_function((_ctx), "void drawRectangleRoundedLinesEx(Rectangle rec, float roundness, int segments, float lineThick, Color color)", (uintptr_t)cythDrawRectangleRoundedLinesEx); \
  cyth_load_function((_ctx), "void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)", (uintptr_t)cythDrawTriangle); \
  cyth_load_function((_ctx), "void drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)", (uintptr_t)cythDrawTriangleLines); \
  cyth_load_function((_ctx), "void drawTriangleFan(any points, int pointCount, Color color)", (uintptr_t)cythDrawTriangleFan); \
  cyth_load_function((_ctx), "void drawTriangleStrip(any points, int pointCount, Color color)", (uintptr_t)cythDrawTriangleStrip); \
  cyth_load_function((_ctx), "void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color)", (uintptr_t)cythDrawPoly); \
  cyth_load_function((_ctx), "void drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)", (uintptr_t)cythDrawPolyLines); \
  cyth_load_function((_ctx), "void drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)", (uintptr_t)cythDrawPolyLinesEx); \
  cyth_load_function((_ctx), "void drawSplineLinear(any points, int pointCount, float thick, Color color)", (uintptr_t)cythDrawSplineLinear); \
  cyth_load_function((_ctx), "void drawSplineBasis(any points, int pointCount, float thick, Color color)", (uintptr_t)cythDrawSplineBasis); \
  cyth_load_function((_ctx), "void drawSplineCatmullRom(any points, int pointCount, float thick, Color color)", (uintptr_t)cythDrawSplineCatmullRom); \
  cyth_load_function((_ctx), "void drawSplineBezierQuadratic(any points, int pointCount, float thick, Color color)", (uintptr_t)cythDrawSplineBezierQuadratic); \
  cyth_load_function((_ctx), "void drawSplineBezierCubic(any points, int pointCount, float thick, Color color)", (uintptr_t)cythDrawSplineBezierCubic); \
  cyth_load_function((_ctx), "void drawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color)", (uintptr_t)cythDrawSplineSegmentLinear); \
  cyth_load_function((_ctx), "void drawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)", (uintptr_t)cythDrawSplineSegmentBasis); \
  cyth_load_function((_ctx), "void drawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)", (uintptr_t)cythDrawSplineSegmentCatmullRom); \
  cyth_load_function((_ctx), "void drawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color)", (uintptr_t)cythDrawSplineSegmentBezierQuadratic); \
  cyth_load_function((_ctx), "void drawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color)", (uintptr_t)cythDrawSplineSegmentBezierCubic); \
  cyth_load_function((_ctx), "Vector2 getSplinePointLinear(Vector2 startPos, Vector2 endPos, float t)", (uintptr_t)cythGetSplinePointLinear); \
  cyth_load_function((_ctx), "Vector2 getSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)", (uintptr_t)cythGetSplinePointBasis); \
  cyth_load_function((_ctx), "Vector2 getSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)", (uintptr_t)cythGetSplinePointCatmullRom); \
  cyth_load_function((_ctx), "Vector2 getSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t)", (uintptr_t)cythGetSplinePointBezierQuad); \
  cyth_load_function((_ctx), "Vector2 getSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t)", (uintptr_t)cythGetSplinePointBezierCubic); \
  cyth_load_function((_ctx), "bool checkCollisionRecs(Rectangle rec1, Rectangle rec2)", (uintptr_t)cythCheckCollisionRecs); \
  cyth_load_function((_ctx), "bool checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)", (uintptr_t)cythCheckCollisionCircles); \
  cyth_load_function((_ctx), "bool checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec)", (uintptr_t)cythCheckCollisionCircleRec); \
  cyth_load_function((_ctx), "bool checkCollisionCircleLine(Vector2 center, float radius, Vector2 p1, Vector2 p2)", (uintptr_t)cythCheckCollisionCircleLine); \
  cyth_load_function((_ctx), "bool checkCollisionPointRec(Vector2 point, Rectangle rec)", (uintptr_t)cythCheckCollisionPointRec); \
  cyth_load_function((_ctx), "bool checkCollisionPointCircle(Vector2 point, Vector2 center, float radius)", (uintptr_t)cythCheckCollisionPointCircle); \
  cyth_load_function((_ctx), "bool checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)", (uintptr_t)cythCheckCollisionPointTriangle); \
  cyth_load_function((_ctx), "bool checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)", (uintptr_t)cythCheckCollisionPointLine); \
  cyth_load_function((_ctx), "bool checkCollisionPointPoly(Vector2 point, any points, int pointCount)", (uintptr_t)cythCheckCollisionPointPoly); \
  cyth_load_function((_ctx), "bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, any collisionPoint)", (uintptr_t)cythCheckCollisionLines); \
  cyth_load_function((_ctx), "Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2)", (uintptr_t)cythGetCollisionRec); \
  cyth_load_function((_ctx), "Image loadImage(string fileName)", (uintptr_t)cythLoadImage); \
  cyth_load_function((_ctx), "Image loadImageRaw(string fileName, int width, int height, int format, int headerSize)", (uintptr_t)cythLoadImageRaw); \
  cyth_load_function((_ctx), "Image loadImageAnim(string fileName, any frames)", (uintptr_t)cythLoadImageAnim); \
  cyth_load_function((_ctx), "Image loadImageAnimFromMemory(string fileType, any fileData, int dataSize, any frames)", (uintptr_t)cythLoadImageAnimFromMemory); \
  cyth_load_function((_ctx), "Image loadImageFromMemory(string fileType, any fileData, int dataSize)", (uintptr_t)cythLoadImageFromMemory); \
  cyth_load_function((_ctx), "Image loadImageFromTexture(Texture2D texture)", (uintptr_t)cythLoadImageFromTexture); \
  cyth_load_function((_ctx), "Image loadImageFromScreen()", (uintptr_t)cythLoadImageFromScreen); \
  cyth_load_function((_ctx), "bool isImageValid(Image image)", (uintptr_t)cythIsImageValid); \
  cyth_load_function((_ctx), "void unloadImage(Image image)", (uintptr_t)cythUnloadImage); \
  cyth_load_function((_ctx), "bool exportImage(Image image, string fileName)", (uintptr_t)cythExportImage); \
  cyth_load_function((_ctx), "any exportImageToMemory(Image image, string fileType, any fileSize)", (uintptr_t)cythExportImageToMemory); \
  cyth_load_function((_ctx), "bool exportImageAsCode(Image image, string fileName)", (uintptr_t)cythExportImageAsCode); \
  cyth_load_function((_ctx), "Image genImageColor(int width, int height, Color color)", (uintptr_t)cythGenImageColor); \
  cyth_load_function((_ctx), "Image genImageGradientLinear(int width, int height, int direction, Color start, Color end)", (uintptr_t)cythGenImageGradientLinear); \
  cyth_load_function((_ctx), "Image genImageGradientRadial(int width, int height, float density, Color inner, Color outer)", (uintptr_t)cythGenImageGradientRadial); \
  cyth_load_function((_ctx), "Image genImageGradientSquare(int width, int height, float density, Color inner, Color outer)", (uintptr_t)cythGenImageGradientSquare); \
  cyth_load_function((_ctx), "Image genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)", (uintptr_t)cythGenImageChecked); \
  cyth_load_function((_ctx), "Image genImageWhiteNoise(int width, int height, float factor)", (uintptr_t)cythGenImageWhiteNoise); \
  cyth_load_function((_ctx), "Image genImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)", (uintptr_t)cythGenImagePerlinNoise); \
  cyth_load_function((_ctx), "Image genImageCellular(int width, int height, int tileSize)", (uintptr_t)cythGenImageCellular); \
  cyth_load_function((_ctx), "Image genImageText(int width, int height, string text)", (uintptr_t)cythGenImageText); \
  cyth_load_function((_ctx), "Image imageCopy(Image image)", (uintptr_t)cythImageCopy); \
  cyth_load_function((_ctx), "Image imageFromImage(Image image, Rectangle rec)", (uintptr_t)cythImageFromImage); \
  cyth_load_function((_ctx), "Image imageFromChannel(Image image, int selectedChannel)", (uintptr_t)cythImageFromChannel); \
  cyth_load_function((_ctx), "Image imageText(string text, int fontSize, Color color)", (uintptr_t)cythImageText); \
  cyth_load_function((_ctx), "Image imageTextEx(Font font, string text, float fontSize, float spacing, Color tint)", (uintptr_t)cythImageTextEx); \
  cyth_load_function((_ctx), "void imageFormat(Image image, int newFormat)", (uintptr_t)cythImageFormat); \
  cyth_load_function((_ctx), "void imageToPOT(Image image, Color fill)", (uintptr_t)cythImageToPOT); \
  cyth_load_function((_ctx), "void imageCrop(Image image, Rectangle crop)", (uintptr_t)cythImageCrop); \
  cyth_load_function((_ctx), "void imageAlphaCrop(Image image, float threshold)", (uintptr_t)cythImageAlphaCrop); \
  cyth_load_function((_ctx), "void imageAlphaClear(Image image, Color color, float threshold)", (uintptr_t)cythImageAlphaClear); \
  cyth_load_function((_ctx), "void imageAlphaMask(Image image, Image alphaMask)", (uintptr_t)cythImageAlphaMask); \
  cyth_load_function((_ctx), "void imageAlphaPremultiply(Image image)", (uintptr_t)cythImageAlphaPremultiply); \
  cyth_load_function((_ctx), "void imageBlurGaussian(Image image, int blurSize)", (uintptr_t)cythImageBlurGaussian); \
  cyth_load_function((_ctx), "void imageKernelConvolution(Image image, any kernel, int kernelSize)", (uintptr_t)cythImageKernelConvolution); \
  cyth_load_function((_ctx), "void imageResize(Image image, int newWidth, int newHeight)", (uintptr_t)cythImageResize); \
  cyth_load_function((_ctx), "void imageResizeNN(Image image, int newWidth, int newHeight)", (uintptr_t)cythImageResizeNN); \
  cyth_load_function((_ctx), "void imageResizeCanvas(Image image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)", (uintptr_t)cythImageResizeCanvas); \
  cyth_load_function((_ctx), "void imageMipmaps(Image image)", (uintptr_t)cythImageMipmaps); \
  cyth_load_function((_ctx), "void imageDither(Image image, int rBpp, int gBpp, int bBpp, int aBpp)", (uintptr_t)cythImageDither); \
  cyth_load_function((_ctx), "void imageFlipVertical(Image image)", (uintptr_t)cythImageFlipVertical); \
  cyth_load_function((_ctx), "void imageFlipHorizontal(Image image)", (uintptr_t)cythImageFlipHorizontal); \
  cyth_load_function((_ctx), "void imageRotate(Image image, int degrees)", (uintptr_t)cythImageRotate); \
  cyth_load_function((_ctx), "void imageRotateCW(Image image)", (uintptr_t)cythImageRotateCW); \
  cyth_load_function((_ctx), "void imageRotateCCW(Image image)", (uintptr_t)cythImageRotateCCW); \
  cyth_load_function((_ctx), "void imageColorTint(Image image, Color color)", (uintptr_t)cythImageColorTint); \
  cyth_load_function((_ctx), "void imageColorInvert(Image image)", (uintptr_t)cythImageColorInvert); \
  cyth_load_function((_ctx), "void imageColorGrayscale(Image image)", (uintptr_t)cythImageColorGrayscale); \
  cyth_load_function((_ctx), "void imageColorContrast(Image image, float contrast)", (uintptr_t)cythImageColorContrast); \
  cyth_load_function((_ctx), "void imageColorBrightness(Image image, int brightness)", (uintptr_t)cythImageColorBrightness); \
  cyth_load_function((_ctx), "void imageColorReplace(Image image, Color color, Color replace)", (uintptr_t)cythImageColorReplace); \
  cyth_load_function((_ctx), "Color loadImageColors(Image image)", (uintptr_t)cythLoadImageColors); \
  cyth_load_function((_ctx), "Color loadImagePalette(Image image, int maxPaletteSize, any colorCount)", (uintptr_t)cythLoadImagePalette); \
  cyth_load_function((_ctx), "void unloadImageColors(Color colors)", (uintptr_t)cythUnloadImageColors); \
  cyth_load_function((_ctx), "void unloadImagePalette(Color colors)", (uintptr_t)cythUnloadImagePalette); \
  cyth_load_function((_ctx), "Rectangle getImageAlphaBorder(Image image, float threshold)", (uintptr_t)cythGetImageAlphaBorder); \
  cyth_load_function((_ctx), "Color getImageColor(Image image, int x, int y)", (uintptr_t)cythGetImageColor); \
  cyth_load_function((_ctx), "void imageClearBackground(Image dst, Color color)", (uintptr_t)cythImageClearBackground); \
  cyth_load_function((_ctx), "void imageDrawPixel(Image dst, int posX, int posY, Color color)", (uintptr_t)cythImageDrawPixel); \
  cyth_load_function((_ctx), "void imageDrawPixelV(Image dst, Vector2 position, Color color)", (uintptr_t)cythImageDrawPixelV); \
  cyth_load_function((_ctx), "void imageDrawLine(Image dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)", (uintptr_t)cythImageDrawLine); \
  cyth_load_function((_ctx), "void imageDrawLineV(Image dst, Vector2 start, Vector2 end, Color color)", (uintptr_t)cythImageDrawLineV); \
  cyth_load_function((_ctx), "void imageDrawLineEx(Image dst, Vector2 start, Vector2 end, int thick, Color color)", (uintptr_t)cythImageDrawLineEx); \
  cyth_load_function((_ctx), "void imageDrawCircle(Image dst, int centerX, int centerY, int radius, Color color)", (uintptr_t)cythImageDrawCircle); \
  cyth_load_function((_ctx), "void imageDrawCircleV(Image dst, Vector2 center, int radius, Color color)", (uintptr_t)cythImageDrawCircleV); \
  cyth_load_function((_ctx), "void imageDrawCircleLines(Image dst, int centerX, int centerY, int radius, Color color)", (uintptr_t)cythImageDrawCircleLines); \
  cyth_load_function((_ctx), "void imageDrawCircleLinesV(Image dst, Vector2 center, int radius, Color color)", (uintptr_t)cythImageDrawCircleLinesV); \
  cyth_load_function((_ctx), "void imageDrawRectangle(Image dst, int posX, int posY, int width, int height, Color color)", (uintptr_t)cythImageDrawRectangle); \
  cyth_load_function((_ctx), "void imageDrawRectangleV(Image dst, Vector2 position, Vector2 size, Color color)", (uintptr_t)cythImageDrawRectangleV); \
  cyth_load_function((_ctx), "void imageDrawRectangleRec(Image dst, Rectangle rec, Color color)", (uintptr_t)cythImageDrawRectangleRec); \
  cyth_load_function((_ctx), "void imageDrawRectangleLines(Image dst, Rectangle rec, int thick, Color color)", (uintptr_t)cythImageDrawRectangleLines); \
  cyth_load_function((_ctx), "void imageDrawTriangle(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color)", (uintptr_t)cythImageDrawTriangle); \
  cyth_load_function((_ctx), "void imageDrawTriangleEx(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color c1, Color c2, Color c3)", (uintptr_t)cythImageDrawTriangleEx); \
  cyth_load_function((_ctx), "void imageDrawTriangleLines(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color)", (uintptr_t)cythImageDrawTriangleLines); \
  cyth_load_function((_ctx), "void imageDrawTriangleFan(Image dst, any points, int pointCount, Color color)", (uintptr_t)cythImageDrawTriangleFan); \
  cyth_load_function((_ctx), "void imageDrawTriangleStrip(Image dst, any points, int pointCount, Color color)", (uintptr_t)cythImageDrawTriangleStrip); \
  cyth_load_function((_ctx), "void imageDraw(Image dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)", (uintptr_t)cythImageDraw); \
  cyth_load_function((_ctx), "void imageDrawText(Image dst, string text, int posX, int posY, int fontSize, Color color)", (uintptr_t)cythImageDrawText); \
  cyth_load_function((_ctx), "void imageDrawTextEx(Image dst, Font font, string text, Vector2 position, float fontSize, float spacing, Color tint)", (uintptr_t)cythImageDrawTextEx); \
  cyth_load_function((_ctx), "Texture2D loadTexture(string fileName)", (uintptr_t)cythLoadTexture); \
  cyth_load_function((_ctx), "Texture2D loadTextureFromImage(Image image)", (uintptr_t)cythLoadTextureFromImage); \
  cyth_load_function((_ctx), "TextureCubemap loadTextureCubemap(Image image, int layout)", (uintptr_t)cythLoadTextureCubemap); \
  cyth_load_function((_ctx), "RenderTexture2D loadRenderTexture(int width, int height)", (uintptr_t)cythLoadRenderTexture); \
  cyth_load_function((_ctx), "bool isTextureValid(Texture2D texture)", (uintptr_t)cythIsTextureValid); \
  cyth_load_function((_ctx), "void unloadTexture(Texture2D texture)", (uintptr_t)cythUnloadTexture); \
  cyth_load_function((_ctx), "bool isRenderTextureValid(RenderTexture2D target)", (uintptr_t)cythIsRenderTextureValid); \
  cyth_load_function((_ctx), "void unloadRenderTexture(RenderTexture2D target)", (uintptr_t)cythUnloadRenderTexture); \
  cyth_load_function((_ctx), "void updateTexture(Texture2D texture, any pixels)", (uintptr_t)cythUpdateTexture); \
  cyth_load_function((_ctx), "void updateTextureRec(Texture2D texture, Rectangle rec, any pixels)", (uintptr_t)cythUpdateTextureRec); \
  cyth_load_function((_ctx), "void genTextureMipmaps(any texture)", (uintptr_t)cythGenTextureMipmaps); \
  cyth_load_function((_ctx), "void setTextureFilter(Texture2D texture, int filter)", (uintptr_t)cythSetTextureFilter); \
  cyth_load_function((_ctx), "void setTextureWrap(Texture2D texture, int wrap)", (uintptr_t)cythSetTextureWrap); \
  cyth_load_function((_ctx), "void drawTexture(Texture2D texture, int posX, int posY, Color tint)", (uintptr_t)cythDrawTexture); \
  cyth_load_function((_ctx), "void drawTextureV(Texture2D texture, Vector2 position, Color tint)", (uintptr_t)cythDrawTextureV); \
  cyth_load_function((_ctx), "void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)", (uintptr_t)cythDrawTextureEx); \
  cyth_load_function((_ctx), "void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)", (uintptr_t)cythDrawTextureRec); \
  cyth_load_function((_ctx), "void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)", (uintptr_t)cythDrawTexturePro); \
  cyth_load_function((_ctx), "void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)", (uintptr_t)cythDrawTextureNPatch); \
  cyth_load_function((_ctx), "bool colorIsEqual(Color col1, Color col2)", (uintptr_t)cythColorIsEqual); \
  cyth_load_function((_ctx), "Color fade(Color color, float alpha)", (uintptr_t)cythFade); \
  cyth_load_function((_ctx), "int colorToInt(Color color)", (uintptr_t)cythColorToInt); \
  cyth_load_function((_ctx), "Vector4 colorNormalize(Color color)", (uintptr_t)cythColorNormalize); \
  cyth_load_function((_ctx), "Color colorFromNormalized(Vector4 normalized)", (uintptr_t)cythColorFromNormalized); \
  cyth_load_function((_ctx), "Vector3 colorToHSV(Color color)", (uintptr_t)cythColorToHSV); \
  cyth_load_function((_ctx), "Color colorFromHSV(float hue, float saturation, float value)", (uintptr_t)cythColorFromHSV); \
  cyth_load_function((_ctx), "Color colorTint(Color color, Color tint)", (uintptr_t)cythColorTint); \
  cyth_load_function((_ctx), "Color colorBrightness(Color color, float factor)", (uintptr_t)cythColorBrightness); \
  cyth_load_function((_ctx), "Color colorContrast(Color color, float contrast)", (uintptr_t)cythColorContrast); \
  cyth_load_function((_ctx), "Color colorAlpha(Color color, float alpha)", (uintptr_t)cythColorAlpha); \
  cyth_load_function((_ctx), "Color colorAlphaBlend(Color dst, Color src, Color tint)", (uintptr_t)cythColorAlphaBlend); \
  cyth_load_function((_ctx), "Color colorLerp(Color color1, Color color2, float factor)", (uintptr_t)cythColorLerp); \
  cyth_load_function((_ctx), "Color getColor(int hexValue)", (uintptr_t)cythGetColor); \
  cyth_load_function((_ctx), "Color getPixelColor(any srcPtr, int format)", (uintptr_t)cythGetPixelColor); \
  cyth_load_function((_ctx), "void setPixelColor(any dstPtr, Color color, int format)", (uintptr_t)cythSetPixelColor); \
  cyth_load_function((_ctx), "int getPixelDataSize(int width, int height, int format)", (uintptr_t)cythGetPixelDataSize); \
  cyth_load_function((_ctx), "Font getFontDefault()", (uintptr_t)cythGetFontDefault); \
  cyth_load_function((_ctx), "Font loadFont(string fileName)", (uintptr_t)cythLoadFont); \
  cyth_load_function((_ctx), "Font loadFontEx(string fileName, int fontSize, any codepoints, int codepointCount)", (uintptr_t)cythLoadFontEx); \
  cyth_load_function((_ctx), "Font loadFontFromImage(Image image, Color key, int firstChar)", (uintptr_t)cythLoadFontFromImage); \
  cyth_load_function((_ctx), "Font loadFontFromMemory(string fileType, any fileData, int dataSize, int fontSize, any codepoints, int codepointCount)", (uintptr_t)cythLoadFontFromMemory); \
  cyth_load_function((_ctx), "bool isFontValid(Font font)", (uintptr_t)cythIsFontValid); \
  cyth_load_function((_ctx), "any loadFontData(any fileData, int dataSize, int fontSize, any codepoints, int codepointCount, int type)", (uintptr_t)cythLoadFontData); \
  cyth_load_function((_ctx), "Image genImageFontAtlas(any glyphs, any glyphRecs, int glyphCount, int fontSize, int padding, int packMethod)", (uintptr_t)cythGenImageFontAtlas); \
  cyth_load_function((_ctx), "void unloadFontData(any glyphs, int glyphCount)", (uintptr_t)cythUnloadFontData); \
  cyth_load_function((_ctx), "void unloadFont(Font font)", (uintptr_t)cythUnloadFont); \
  cyth_load_function((_ctx), "bool exportFontAsCode(Font font, string fileName)", (uintptr_t)cythExportFontAsCode); \
  cyth_load_function((_ctx), "void drawFPS(int posX, int posY)", (uintptr_t)cythDrawFPS); \
  cyth_load_function((_ctx), "void drawText(string text, int posX, int posY, int fontSize, Color color)", (uintptr_t)cythDrawText); \
  cyth_load_function((_ctx), "void drawTextEx(Font font, string text, Vector2 position, float fontSize, float spacing, Color tint)", (uintptr_t)cythDrawTextEx); \
  cyth_load_function((_ctx), "void drawTextPro(Font font, string text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)", (uintptr_t)cythDrawTextPro); \
  cyth_load_function((_ctx), "void drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)", (uintptr_t)cythDrawTextCodepoint); \
  cyth_load_function((_ctx), "void drawTextCodepoints(Font font, any codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint)", (uintptr_t)cythDrawTextCodepoints); \
  cyth_load_function((_ctx), "void setTextLineSpacing(int spacing)", (uintptr_t)cythSetTextLineSpacing); \
  cyth_load_function((_ctx), "int measureText(string text, int fontSize)", (uintptr_t)cythMeasureText); \
  cyth_load_function((_ctx), "Vector2 measureTextEx(Font font, string text, float fontSize, float spacing)", (uintptr_t)cythMeasureTextEx); \
  cyth_load_function((_ctx), "int getGlyphIndex(Font font, int codepoint)", (uintptr_t)cythGetGlyphIndex); \
  cyth_load_function((_ctx), "GlyphInfo getGlyphInfo(Font font, int codepoint)", (uintptr_t)cythGetGlyphInfo); \
  cyth_load_function((_ctx), "Rectangle getGlyphAtlasRec(Font font, int codepoint)", (uintptr_t)cythGetGlyphAtlasRec); \
  cyth_load_function((_ctx), "char[] loadUTF8(any codepoints, int length)", (uintptr_t)cythLoadUTF8); \
  cyth_load_function((_ctx), "void unloadUTF8(char[] text)", (uintptr_t)cythUnloadUTF8); \
  cyth_load_function((_ctx), "any loadCodepoints(string text, any count)", (uintptr_t)cythLoadCodepoints); \
  cyth_load_function((_ctx), "void unloadCodepoints(any codepoints)", (uintptr_t)cythUnloadCodepoints); \
  cyth_load_function((_ctx), "int getCodepointCount(string text)", (uintptr_t)cythGetCodepointCount); \
  cyth_load_function((_ctx), "int getCodepoint(string text, any codepointSize)", (uintptr_t)cythGetCodepoint); \
  cyth_load_function((_ctx), "int getCodepointNext(string text, any codepointSize)", (uintptr_t)cythGetCodepointNext); \
  cyth_load_function((_ctx), "int getCodepointPrevious(string text, any codepointSize)", (uintptr_t)cythGetCodepointPrevious); \
  cyth_load_function((_ctx), "string codepointToUTF8(int codepoint, any utf8Size)", (uintptr_t)cythCodepointToUTF8); \
  cyth_load_function((_ctx), "int textCopy(char[] dst, string src)", (uintptr_t)cythTextCopy); \
  cyth_load_function((_ctx), "bool textIsEqual(string text1, string text2)", (uintptr_t)cythTextIsEqual); \
  cyth_load_function((_ctx), "int textLength(string text)", (uintptr_t)cythTextLength); \
  cyth_load_function((_ctx), "string textSubtext(string text, int position, int length)", (uintptr_t)cythTextSubtext); \
  cyth_load_function((_ctx), "char[] textReplace(string text, string replace, string by)", (uintptr_t)cythTextReplace); \
  cyth_load_function((_ctx), "char[] textInsert(string text, string insert, int position)", (uintptr_t)cythTextInsert); \
  cyth_load_function((_ctx), "string textJoin(any textList, int count, string delimiter)", (uintptr_t)cythTextJoin); \
  cyth_load_function((_ctx), "any textSplit(string text, char delimiter, any count)", (uintptr_t)cythTextSplit); \
  cyth_load_function((_ctx), "void textAppend(char[] text, string append, any position)", (uintptr_t)cythTextAppend); \
  cyth_load_function((_ctx), "int textFindIndex(string text, string find)", (uintptr_t)cythTextFindIndex); \
  cyth_load_function((_ctx), "string textToUpper(string text)", (uintptr_t)cythTextToUpper); \
  cyth_load_function((_ctx), "string textToLower(string text)", (uintptr_t)cythTextToLower); \
  cyth_load_function((_ctx), "string textToPascal(string text)", (uintptr_t)cythTextToPascal); \
  cyth_load_function((_ctx), "string textToSnake(string text)", (uintptr_t)cythTextToSnake); \
  cyth_load_function((_ctx), "string textToCamel(string text)", (uintptr_t)cythTextToCamel); \
  cyth_load_function((_ctx), "int textToInteger(string text)", (uintptr_t)cythTextToInteger); \
  cyth_load_function((_ctx), "float textToFloat(string text)", (uintptr_t)cythTextToFloat); \
  cyth_load_function((_ctx), "void drawLine3D(Vector3 startPos, Vector3 endPos, Color color)", (uintptr_t)cythDrawLine3D); \
  cyth_load_function((_ctx), "void drawPoint3D(Vector3 position, Color color)", (uintptr_t)cythDrawPoint3D); \
  cyth_load_function((_ctx), "void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)", (uintptr_t)cythDrawCircle3D); \
  cyth_load_function((_ctx), "void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)", (uintptr_t)cythDrawTriangle3D); \
  cyth_load_function((_ctx), "void drawTriangleStrip3D(any points, int pointCount, Color color)", (uintptr_t)cythDrawTriangleStrip3D); \
  cyth_load_function((_ctx), "void drawCube(Vector3 position, float width, float height, float length, Color color)", (uintptr_t)cythDrawCube); \
  cyth_load_function((_ctx), "void drawCubeV(Vector3 position, Vector3 size, Color color)", (uintptr_t)cythDrawCubeV); \
  cyth_load_function((_ctx), "void drawCubeWires(Vector3 position, float width, float height, float length, Color color)", (uintptr_t)cythDrawCubeWires); \
  cyth_load_function((_ctx), "void drawCubeWiresV(Vector3 position, Vector3 size, Color color)", (uintptr_t)cythDrawCubeWiresV); \
  cyth_load_function((_ctx), "void drawSphere(Vector3 centerPos, float radius, Color color)", (uintptr_t)cythDrawSphere); \
  cyth_load_function((_ctx), "void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)", (uintptr_t)cythDrawSphereEx); \
  cyth_load_function((_ctx), "void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)", (uintptr_t)cythDrawSphereWires); \
  cyth_load_function((_ctx), "void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)", (uintptr_t)cythDrawCylinder); \
  cyth_load_function((_ctx), "void drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)", (uintptr_t)cythDrawCylinderEx); \
  cyth_load_function((_ctx), "void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)", (uintptr_t)cythDrawCylinderWires); \
  cyth_load_function((_ctx), "void drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)", (uintptr_t)cythDrawCylinderWiresEx); \
  cyth_load_function((_ctx), "void drawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)", (uintptr_t)cythDrawCapsule); \
  cyth_load_function((_ctx), "void drawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)", (uintptr_t)cythDrawCapsuleWires); \
  cyth_load_function((_ctx), "void drawPlane(Vector3 centerPos, Vector2 size, Color color)", (uintptr_t)cythDrawPlane); \
  cyth_load_function((_ctx), "void drawRay(Ray ray, Color color)", (uintptr_t)cythDrawRay); \
  cyth_load_function((_ctx), "void drawGrid(int slices, float spacing)", (uintptr_t)cythDrawGrid); \
  cyth_load_function((_ctx), "Model loadModel(string fileName)", (uintptr_t)cythLoadModel); \
  cyth_load_function((_ctx), "Model loadModelFromMesh(Mesh mesh)", (uintptr_t)cythLoadModelFromMesh); \
  cyth_load_function((_ctx), "bool isModelValid(Model model)", (uintptr_t)cythIsModelValid); \
  cyth_load_function((_ctx), "void unloadModel(Model model)", (uintptr_t)cythUnloadModel); \
  cyth_load_function((_ctx), "BoundingBox getModelBoundingBox(Model model)", (uintptr_t)cythGetModelBoundingBox); \
  cyth_load_function((_ctx), "void drawModel(Model model, Vector3 position, float scale, Color tint)", (uintptr_t)cythDrawModel); \
  cyth_load_function((_ctx), "void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)", (uintptr_t)cythDrawModelEx); \
  cyth_load_function((_ctx), "void drawModelWires(Model model, Vector3 position, float scale, Color tint)", (uintptr_t)cythDrawModelWires); \
  cyth_load_function((_ctx), "void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)", (uintptr_t)cythDrawModelWiresEx); \
  cyth_load_function((_ctx), "void drawModelPoints(Model model, Vector3 position, float scale, Color tint)", (uintptr_t)cythDrawModelPoints); \
  cyth_load_function((_ctx), "void drawModelPointsEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)", (uintptr_t)cythDrawModelPointsEx); \
  cyth_load_function((_ctx), "void drawBoundingBox(BoundingBox box, Color color)", (uintptr_t)cythDrawBoundingBox); \
  cyth_load_function((_ctx), "void drawBillboard(Camera camera, Texture2D texture, Vector3 position, float scale, Color tint)", (uintptr_t)cythDrawBillboard); \
  cyth_load_function((_ctx), "void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)", (uintptr_t)cythDrawBillboardRec); \
  cyth_load_function((_ctx), "void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)", (uintptr_t)cythDrawBillboardPro); \
  cyth_load_function((_ctx), "void uploadMesh(any mesh, bool dynamic)", (uintptr_t)cythUploadMesh); \
  cyth_load_function((_ctx), "void updateMeshBuffer(Mesh mesh, int index, any data, int dataSize, int offset)", (uintptr_t)cythUpdateMeshBuffer); \
  cyth_load_function((_ctx), "void unloadMesh(Mesh mesh)", (uintptr_t)cythUnloadMesh); \
  cyth_load_function((_ctx), "void drawMesh(Mesh mesh, Material material, Matrix transform)", (uintptr_t)cythDrawMesh); \
  cyth_load_function((_ctx), "void drawMeshInstanced(Mesh mesh, Material material, any transforms, int instances)", (uintptr_t)cythDrawMeshInstanced); \
  cyth_load_function((_ctx), "BoundingBox getMeshBoundingBox(Mesh mesh)", (uintptr_t)cythGetMeshBoundingBox); \
  cyth_load_function((_ctx), "void genMeshTangents(any mesh)", (uintptr_t)cythGenMeshTangents); \
  cyth_load_function((_ctx), "bool exportMesh(Mesh mesh, string fileName)", (uintptr_t)cythExportMesh); \
  cyth_load_function((_ctx), "bool exportMeshAsCode(Mesh mesh, string fileName)", (uintptr_t)cythExportMeshAsCode); \
  cyth_load_function((_ctx), "Mesh genMeshPoly(int sides, float radius)", (uintptr_t)cythGenMeshPoly); \
  cyth_load_function((_ctx), "Mesh genMeshPlane(float width, float length, int resX, int resZ)", (uintptr_t)cythGenMeshPlane); \
  cyth_load_function((_ctx), "Mesh genMeshCube(float width, float height, float length)", (uintptr_t)cythGenMeshCube); \
  cyth_load_function((_ctx), "Mesh genMeshSphere(float radius, int rings, int slices)", (uintptr_t)cythGenMeshSphere); \
  cyth_load_function((_ctx), "Mesh genMeshHemiSphere(float radius, int rings, int slices)", (uintptr_t)cythGenMeshHemiSphere); \
  cyth_load_function((_ctx), "Mesh genMeshCylinder(float radius, float height, int slices)", (uintptr_t)cythGenMeshCylinder); \
  cyth_load_function((_ctx), "Mesh genMeshCone(float radius, float height, int slices)", (uintptr_t)cythGenMeshCone); \
  cyth_load_function((_ctx), "Mesh genMeshTorus(float radius, float size, int radSeg, int sides)", (uintptr_t)cythGenMeshTorus); \
  cyth_load_function((_ctx), "Mesh genMeshKnot(float radius, float size, int radSeg, int sides)", (uintptr_t)cythGenMeshKnot); \
  cyth_load_function((_ctx), "Mesh genMeshHeightmap(Image heightmap, Vector3 size)", (uintptr_t)cythGenMeshHeightmap); \
  cyth_load_function((_ctx), "Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize)", (uintptr_t)cythGenMeshCubicmap); \
  cyth_load_function((_ctx), "any loadMaterials(string fileName, any materialCount)", (uintptr_t)cythLoadMaterials); \
  cyth_load_function((_ctx), "Material loadMaterialDefault()", (uintptr_t)cythLoadMaterialDefault); \
  cyth_load_function((_ctx), "bool isMaterialValid(Material material)", (uintptr_t)cythIsMaterialValid); \
  cyth_load_function((_ctx), "void unloadMaterial(Material material)", (uintptr_t)cythUnloadMaterial); \
  cyth_load_function((_ctx), "void setMaterialTexture(any material, int mapType, Texture2D texture)", (uintptr_t)cythSetMaterialTexture); \
  cyth_load_function((_ctx), "void setModelMeshMaterial(any model, int meshId, int materialId)", (uintptr_t)cythSetModelMeshMaterial); \
  cyth_load_function((_ctx), "any loadModelAnimations(string fileName, any animCount)", (uintptr_t)cythLoadModelAnimations); \
  cyth_load_function((_ctx), "void updateModelAnimation(Model model, ModelAnimation anim, int frame)", (uintptr_t)cythUpdateModelAnimation); \
  cyth_load_function((_ctx), "void updateModelAnimationBones(Model model, ModelAnimation anim, int frame)", (uintptr_t)cythUpdateModelAnimationBones); \
  cyth_load_function((_ctx), "void unloadModelAnimation(ModelAnimation anim)", (uintptr_t)cythUnloadModelAnimation); \
  cyth_load_function((_ctx), "void unloadModelAnimations(any animations, int animCount)", (uintptr_t)cythUnloadModelAnimations); \
  cyth_load_function((_ctx), "bool isModelAnimationValid(Model model, ModelAnimation anim)", (uintptr_t)cythIsModelAnimationValid); \
  cyth_load_function((_ctx), "bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)", (uintptr_t)cythCheckCollisionSpheres); \
  cyth_load_function((_ctx), "bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2)", (uintptr_t)cythCheckCollisionBoxes); \
  cyth_load_function((_ctx), "bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)", (uintptr_t)cythCheckCollisionBoxSphere); \
  cyth_load_function((_ctx), "RayCollision getRayCollisionSphere(Ray ray, Vector3 center, float radius)", (uintptr_t)cythGetRayCollisionSphere); \
  cyth_load_function((_ctx), "RayCollision getRayCollisionBox(Ray ray, BoundingBox box)", (uintptr_t)cythGetRayCollisionBox); \
  cyth_load_function((_ctx), "RayCollision getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)", (uintptr_t)cythGetRayCollisionMesh); \
  cyth_load_function((_ctx), "RayCollision getRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)", (uintptr_t)cythGetRayCollisionTriangle); \
  cyth_load_function((_ctx), "RayCollision getRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)", (uintptr_t)cythGetRayCollisionQuad); \
  cyth_load_function((_ctx), "void initAudioDevice()", (uintptr_t)cythInitAudioDevice); \
  cyth_load_function((_ctx), "void closeAudioDevice()", (uintptr_t)cythCloseAudioDevice); \
  cyth_load_function((_ctx), "bool isAudioDeviceReady()", (uintptr_t)cythIsAudioDeviceReady); \
  cyth_load_function((_ctx), "void setMasterVolume(float volume)", (uintptr_t)cythSetMasterVolume); \
  cyth_load_function((_ctx), "float getMasterVolume()", (uintptr_t)cythGetMasterVolume); \
  cyth_load_function((_ctx), "Wave loadWave(string fileName)", (uintptr_t)cythLoadWave); \
  cyth_load_function((_ctx), "Wave loadWaveFromMemory(string fileType, any fileData, int dataSize)", (uintptr_t)cythLoadWaveFromMemory); \
  cyth_load_function((_ctx), "bool isWaveValid(Wave wave)", (uintptr_t)cythIsWaveValid); \
  cyth_load_function((_ctx), "Sound loadSound(string fileName)", (uintptr_t)cythLoadSound); \
  cyth_load_function((_ctx), "Sound loadSoundFromWave(Wave wave)", (uintptr_t)cythLoadSoundFromWave); \
  cyth_load_function((_ctx), "Sound loadSoundAlias(Sound source)", (uintptr_t)cythLoadSoundAlias); \
  cyth_load_function((_ctx), "bool isSoundValid(Sound sound)", (uintptr_t)cythIsSoundValid); \
  cyth_load_function((_ctx), "void updateSound(Sound sound, any data, int sampleCount)", (uintptr_t)cythUpdateSound); \
  cyth_load_function((_ctx), "void unloadWave(Wave wave)", (uintptr_t)cythUnloadWave); \
  cyth_load_function((_ctx), "void unloadSound(Sound sound)", (uintptr_t)cythUnloadSound); \
  cyth_load_function((_ctx), "void unloadSoundAlias(Sound alias)", (uintptr_t)cythUnloadSoundAlias); \
  cyth_load_function((_ctx), "bool exportWave(Wave wave, string fileName)", (uintptr_t)cythExportWave); \
  cyth_load_function((_ctx), "bool exportWaveAsCode(Wave wave, string fileName)", (uintptr_t)cythExportWaveAsCode); \
  cyth_load_function((_ctx), "void playSound(Sound sound)", (uintptr_t)cythPlaySound); \
  cyth_load_function((_ctx), "void stopSound(Sound sound)", (uintptr_t)cythStopSound); \
  cyth_load_function((_ctx), "void pauseSound(Sound sound)", (uintptr_t)cythPauseSound); \
  cyth_load_function((_ctx), "void resumeSound(Sound sound)", (uintptr_t)cythResumeSound); \
  cyth_load_function((_ctx), "bool isSoundPlaying(Sound sound)", (uintptr_t)cythIsSoundPlaying); \
  cyth_load_function((_ctx), "void setSoundVolume(Sound sound, float volume)", (uintptr_t)cythSetSoundVolume); \
  cyth_load_function((_ctx), "void setSoundPitch(Sound sound, float pitch)", (uintptr_t)cythSetSoundPitch); \
  cyth_load_function((_ctx), "void setSoundPan(Sound sound, float pan)", (uintptr_t)cythSetSoundPan); \
  cyth_load_function((_ctx), "Wave waveCopy(Wave wave)", (uintptr_t)cythWaveCopy); \
  cyth_load_function((_ctx), "void waveCrop(any wave, int initFrame, int finalFrame)", (uintptr_t)cythWaveCrop); \
  cyth_load_function((_ctx), "void waveFormat(any wave, int sampleRate, int sampleSize, int channels)", (uintptr_t)cythWaveFormat); \
  cyth_load_function((_ctx), "any loadWaveSamples(Wave wave)", (uintptr_t)cythLoadWaveSamples); \
  cyth_load_function((_ctx), "void unloadWaveSamples(any samples)", (uintptr_t)cythUnloadWaveSamples); \
  cyth_load_function((_ctx), "Music loadMusicStream(string fileName)", (uintptr_t)cythLoadMusicStream); \
  cyth_load_function((_ctx), "Music loadMusicStreamFromMemory(string fileType, any data, int dataSize)", (uintptr_t)cythLoadMusicStreamFromMemory); \
  cyth_load_function((_ctx), "bool isMusicValid(Music music)", (uintptr_t)cythIsMusicValid); \
  cyth_load_function((_ctx), "void unloadMusicStream(Music music)", (uintptr_t)cythUnloadMusicStream); \
  cyth_load_function((_ctx), "void playMusicStream(Music music)", (uintptr_t)cythPlayMusicStream); \
  cyth_load_function((_ctx), "bool isMusicStreamPlaying(Music music)", (uintptr_t)cythIsMusicStreamPlaying); \
  cyth_load_function((_ctx), "void updateMusicStream(Music music)", (uintptr_t)cythUpdateMusicStream); \
  cyth_load_function((_ctx), "void stopMusicStream(Music music)", (uintptr_t)cythStopMusicStream); \
  cyth_load_function((_ctx), "void pauseMusicStream(Music music)", (uintptr_t)cythPauseMusicStream); \
  cyth_load_function((_ctx), "void resumeMusicStream(Music music)", (uintptr_t)cythResumeMusicStream); \
  cyth_load_function((_ctx), "void seekMusicStream(Music music, float position)", (uintptr_t)cythSeekMusicStream); \
  cyth_load_function((_ctx), "void setMusicVolume(Music music, float volume)", (uintptr_t)cythSetMusicVolume); \
  cyth_load_function((_ctx), "void setMusicPitch(Music music, float pitch)", (uintptr_t)cythSetMusicPitch); \
  cyth_load_function((_ctx), "void setMusicPan(Music music, float pan)", (uintptr_t)cythSetMusicPan); \
  cyth_load_function((_ctx), "float getMusicTimeLength(Music music)", (uintptr_t)cythGetMusicTimeLength); \
  cyth_load_function((_ctx), "float getMusicTimePlayed(Music music)", (uintptr_t)cythGetMusicTimePlayed); \
  cyth_load_function((_ctx), "AudioStream loadAudioStream(int sampleRate, int sampleSize, int channels)", (uintptr_t)cythLoadAudioStream); \
  cyth_load_function((_ctx), "bool isAudioStreamValid(AudioStream stream)", (uintptr_t)cythIsAudioStreamValid); \
  cyth_load_function((_ctx), "void unloadAudioStream(AudioStream stream)", (uintptr_t)cythUnloadAudioStream); \
  cyth_load_function((_ctx), "void updateAudioStream(AudioStream stream, any data, int frameCount)", (uintptr_t)cythUpdateAudioStream); \
  cyth_load_function((_ctx), "bool isAudioStreamProcessed(AudioStream stream)", (uintptr_t)cythIsAudioStreamProcessed); \
  cyth_load_function((_ctx), "void playAudioStream(AudioStream stream)", (uintptr_t)cythPlayAudioStream); \
  cyth_load_function((_ctx), "void pauseAudioStream(AudioStream stream)", (uintptr_t)cythPauseAudioStream); \
  cyth_load_function((_ctx), "void resumeAudioStream(AudioStream stream)", (uintptr_t)cythResumeAudioStream); \
  cyth_load_function((_ctx), "bool isAudioStreamPlaying(AudioStream stream)", (uintptr_t)cythIsAudioStreamPlaying); \
  cyth_load_function((_ctx), "void stopAudioStream(AudioStream stream)", (uintptr_t)cythStopAudioStream); \
  cyth_load_function((_ctx), "void setAudioStreamVolume(AudioStream stream, float volume)", (uintptr_t)cythSetAudioStreamVolume); \
  cyth_load_function((_ctx), "void setAudioStreamPitch(AudioStream stream, float pitch)", (uintptr_t)cythSetAudioStreamPitch); \
  cyth_load_function((_ctx), "void setAudioStreamPan(AudioStream stream, float pan)", (uintptr_t)cythSetAudioStreamPan); \
  cyth_load_function((_ctx), "void setAudioStreamBufferSizeDefault(int size)", (uintptr_t)cythSetAudioStreamBufferSizeDefault); \
  cyth_load_function((_ctx), "void setAudioStreamCallback(AudioStream stream, AudioCallback callback)", (uintptr_t)cythSetAudioStreamCallback); \
  cyth_load_function((_ctx), "void attachAudioStreamProcessor(AudioStream stream, AudioCallback processor)", (uintptr_t)cythAttachAudioStreamProcessor); \
  cyth_load_function((_ctx), "void detachAudioStreamProcessor(AudioStream stream, AudioCallback processor)", (uintptr_t)cythDetachAudioStreamProcessor); \
  cyth_load_function((_ctx), "void attachAudioMixedProcessor(AudioCallback processor)", (uintptr_t)cythAttachAudioMixedProcessor); \
  cyth_load_function((_ctx), "void detachAudioMixedProcessor(AudioCallback processor)", (uintptr_t)cythDetachAudioMixedProcessor); \
  cyth_load_string(vm, (char*)RAYLIB_BUILTINS);\
} while (0)
static const char* RAYLIB_BUILTINS =
"class TraceLogCallback\n"
"class LoadFileDataCallback\n"
"class SaveFileDataCallback\n"
"class LoadFileTextCallback\n"
"class SaveFileTextCallback\n"
"class AudioCallback\n"
"class Vector2\n"
"  float x\n"
"  float y\n"
"class Vector3\n"
"  float x\n"
"  float y\n"
"  float z\n"
"class Vector4\n"
"  float x\n"
"  float y\n"
"  float z\n"
"  float w\n"
"class Quaternion\n"
"  float x\n"
"  float y\n"
"  float z\n"
"  float w\n"
"class Matrix\n"
"  float m0\n"
"  float m4\n"
"  float m8\n"
"  float m12\n"
"  float m1\n"
"  float m5\n"
"  float m9\n"
"  float m13\n"
"  float m2\n"
"  float m6\n"
"  float m10\n"
"  float m14\n"
"  float m3\n"
"  float m7\n"
"  float m11\n"
"  float m15\n"
"class Color\n"
"  char r\n"
"  char g\n"
"  char b\n"
"  char a\n"
"  void __init__(int r, int g, int b, int a)\n"
"    this.r = (char)r\n"
"    this.g = (char)g\n"
"    this.b = (char)b\n"
"    this.a = (char)a\n"
"class Rectangle\n"
"  float x\n"
"  float y\n"
"  float width\n"
"  float height\n"
"class Image\n"
"  any data\n"
"  int width\n"
"  int height\n"
"  int mipmaps\n"
"  int format\n"
"class Texture\n"
"  int id\n"
"  int width\n"
"  int height\n"
"  int mipmaps\n"
"  int format\n"
"class Texture2D\n"
"  int id\n"
"  int width\n"
"  int height\n"
"  int mipmaps\n"
"  int format\n"
"class TextureCubemap\n"
"  int id\n"
"  int width\n"
"  int height\n"
"  int mipmaps\n"
"  int format\n"
"class RenderTexture\n"
"  int id\n"
"  Texture texture\n"
"  Texture depth\n"
"class RenderTexture2D\n"
"  int id\n"
"  Texture texture\n"
"  Texture depth\n"
"class NPatchInfo\n"
"  Rectangle source\n"
"  int left\n"
"  int top\n"
"  int right\n"
"  int bottom\n"
"  int layout\n"
"class GlyphInfo\n"
"  int value\n"
"  int offsetX\n"
"  int offsetY\n"
"  int advanceX\n"
"  Image image\n"
"class Font\n"
"  int baseSize\n"
"  int glyphCount\n"
"  int glyphPadding\n"
"  Texture2D texture\n"
"  any recs\n"
"  any glyphs\n"
"class Camera3D\n"
"  Vector3 position\n"
"  Vector3 target\n"
"  Vector3 up\n"
"  float fovy\n"
"  int projection\n"
"class Camera2D\n"
"  Vector2 offset\n"
"  Vector2 target\n"
"  float rotation\n"
"  float zoom\n"
"class Camera\n"
"  Vector3 position\n"
"  Vector3 target\n"
"  Vector3 up\n"
"  float fovy\n"
"  int projection\n"
"class Mesh\n"
"  int vertexCount\n"
"  int triangleCount\n"
"  any vertices\n"
"  any texcoords\n"
"  any texcoords2\n"
"  any normals\n"
"  any tangents\n"
"  any colors\n"
"  any indices\n"
"  any animVertices\n"
"  any animNormals\n"
"  any boneIds\n"
"  any boneWeights\n"
"  any boneMatrices\n"
"  int boneCount\n"
"  int vaoId\n"
"  any vboId\n"
"class Shader\n"
"  int id\n"
"  any locs\n"
"class MaterialMap\n"
"  Texture2D texture\n"
"  Color color\n"
"  float value\n"
"class Material\n"
"  Shader shader\n"
"  any maps\n"
"  any params\n"
"class Transform\n"
"  Vector3 translation\n"
"  Quaternion rotation\n"
"  Vector3 scale\n"
"class BoneInfo\n"
"  any name\n"
"  int parent\n"
"class Model\n"
"  Matrix transform\n"
"  int meshCount\n"
"  int materialCount\n"
"  any meshes\n"
"  any materials\n"
"  any meshMaterial\n"
"  int boneCount\n"
"  any bones\n"
"  any bindPose\n"
"class ModelAnimation\n"
"  int boneCount\n"
"  int frameCount\n"
"  any bones\n"
"  any framePoses\n"
"  any name\n"
"class Ray\n"
"  Vector3 position\n"
"  Vector3 direction\n"
"class RayCollision\n"
"  bool hit\n"
"  float distance\n"
"  Vector3 point\n"
"  Vector3 normal\n"
"class BoundingBox\n"
"  Vector3 min\n"
"  Vector3 max\n"
"class Wave\n"
"  int frameCount\n"
"  int sampleRate\n"
"  int sampleSize\n"
"  int channels\n"
"  any data\n"
"class AudioStream\n"
"  any buffer\n"
"  any processor\n"
"  int sampleRate\n"
"  int sampleSize\n"
"  int channels\n"
"class Sound\n"
"  any buffer\n"
"  any processor\n"
"  int sampleRate\n"
"  int sampleSize\n"
"  int channels\n"
"  int frameCount\n"
"class Music\n"
"  any buffer\n"
"  any processor\n"
"  int sampleRate\n"
"  int sampleSize\n"
"  int channels\n"
"  int frameCount\n"
"  bool looping\n"
"  int ctxType\n"
"  any ctxData\n"
"class VrDeviceInfo\n"
"  int hResolution\n"
"  int vResolution\n"
"  float hScreenSize\n"
"  float vScreenSize\n"
"  float eyeToScreenDistance\n"
"  float lensSeparationDistance\n"
"  float interpupillaryDistance\n"
"  any lensDistortionValues\n"
"  any chromaAbCorrection\n"
"class VrStereoConfig\n"
"  any projection\n"
"  any viewOffset\n"
"  any leftLensCenter\n"
"  any rightLensCenter\n"
"  any leftScreenCenter\n"
"  any rightScreenCenter\n"
"  any scale\n"
"  any scaleIn\n"
"class FilePathList\n"
"  int capacity\n"
"  int count\n"
"  any paths\n"
"class AutomationEvent\n"
"  int frame\n"
"  int type\n"
"  any params\n"
"class AutomationEventList\n"
"  int capacity\n"
"  int count\n"
"  any events\n"
;
