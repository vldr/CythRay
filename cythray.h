#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <raylib.h>
#include <jit.h>

static void cythInitWindow(int width, int height, String* title) {
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
static void cythSetWindowTitle(String* title) {
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWindowScaleDPI() {
	Vector2 _v = GetWindowScaleDPI();
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static String* cythGetMonitorName(int monitor) {
	const char * _v = GetMonitorName(monitor);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static void cythSetClipboardText(String* text) {
	SetClipboardText(text->data);
}
static String* cythGetClipboardText() {
	const char * _v = GetClipboardText();
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static Image* cythGetClipboardImage() {
	Image _v = GetClipboardImage();
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
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
	VrStereoConfig* _r = (VrStereoConfig*)jit_alloc(1, sizeof(VrStereoConfig));
	*_r = _v;
	return _r;
}
static void cythUnloadVrStereoConfig(VrStereoConfig* config) {
	UnloadVrStereoConfig(*config);
}
static Shader* cythLoadShader(String* vsFileName, String* fsFileName) {
	Shader _v = LoadShader(vsFileName->data, fsFileName->data);
	Shader* _r = (Shader*)jit_alloc(1, sizeof(Shader));
	*_r = _v;
	return _r;
}
static Shader* cythLoadShaderFromMemory(String* vsCode, String* fsCode) {
	Shader _v = LoadShaderFromMemory(vsCode->data, fsCode->data);
	Shader* _r = (Shader*)jit_alloc(1, sizeof(Shader));
	*_r = _v;
	return _r;
}
static bool cythIsShaderValid(Shader* shader) {
	bool _v = IsShaderValid(*shader);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetShaderLocation(Shader* shader, String* uniformName) {
	int _v = GetShaderLocation(*shader, uniformName->data);
	int _r = (int)_v;
	return _r;
}
static int cythGetShaderLocationAttrib(Shader* shader, String* attribName) {
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
	Ray* _r = (Ray*)jit_alloc(1, sizeof(Ray));
	*_r = _v;
	return _r;
}
static Ray* cythGetScreenToWorldRayEx(Vector2* position, Camera* camera, int width, int height) {
	Ray _v = GetScreenToWorldRayEx(*position, *camera, width, height);
	Ray* _r = (Ray*)jit_alloc(1, sizeof(Ray));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreen(Vector3* position, Camera* camera) {
	Vector2 _v = GetWorldToScreen(*position, *camera);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreenEx(Vector3* position, Camera* camera, int width, int height) {
	Vector2 _v = GetWorldToScreenEx(*position, *camera, width, height);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetWorldToScreen2D(Vector2* position, Camera2D* camera) {
	Vector2 _v = GetWorldToScreen2D(*position, *camera);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetScreenToWorld2D(Vector2* position, Camera2D* camera) {
	Vector2 _v = GetScreenToWorld2D(*position, *camera);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Matrix* cythGetCameraMatrix(Camera* camera) {
	Matrix _v = GetCameraMatrix(*camera);
	Matrix* _r = (Matrix*)jit_alloc(1, sizeof(Matrix));
	*_r = _v;
	return _r;
}
static Matrix* cythGetCameraMatrix2D(Camera2D* camera) {
	Matrix _v = GetCameraMatrix2D(*camera);
	Matrix* _r = (Matrix*)jit_alloc(1, sizeof(Matrix));
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
static void cythTakeScreenshot(String* fileName) {
	TakeScreenshot(fileName->data);
}
static void cythSetConfigFlags(unsigned int flags) {
	SetConfigFlags(flags);
}
static void cythOpenURL(String* url) {
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
static unsigned char * cythLoadFileData(String* fileName, int * dataSize) {
	unsigned char * _v = LoadFileData(fileName->data, dataSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static void cythUnloadFileData(unsigned char * data) {
	UnloadFileData(data);
}
static bool cythSaveFileData(String* fileName, void * data, int dataSize) {
	bool _v = SaveFileData(fileName->data, data, dataSize);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportDataAsCode(const unsigned char * data, int dataSize, String* fileName) {
	bool _v = ExportDataAsCode(data, dataSize, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static Array* cythLoadFileText(String* fileName) {
	char * _v = LoadFileText(fileName->data);
	Array* _r = (Array*)jit_alloc(1, sizeof(Array));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static void cythUnloadFileText(Array* text) {
	UnloadFileText(text->data);
}
static bool cythSaveFileText(String* fileName, Array* text) {
	bool _v = SaveFileText(fileName->data, text->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythFileExists(String* fileName) {
	bool _v = FileExists(fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythDirectoryExists(String* dirPath) {
	bool _v = DirectoryExists(dirPath->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsFileExtension(String* fileName, String* ext) {
	bool _v = IsFileExtension(fileName->data, ext->data);
	bool _r = (bool)_v;
	return _r;
}
static int cythGetFileLength(String* fileName) {
	int _v = GetFileLength(fileName->data);
	int _r = (int)_v;
	return _r;
}
static String* cythGetFileExtension(String* fileName) {
	const char * _v = GetFileExtension(fileName->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetFileName(String* filePath) {
	const char * _v = GetFileName(filePath->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetFileNameWithoutExt(String* filePath) {
	const char * _v = GetFileNameWithoutExt(filePath->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetDirectoryPath(String* filePath) {
	const char * _v = GetDirectoryPath(filePath->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetPrevDirectoryPath(String* dirPath) {
	const char * _v = GetPrevDirectoryPath(dirPath->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetWorkingDirectory() {
	const char * _v = GetWorkingDirectory();
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythGetApplicationDirectory() {
	const char * _v = GetApplicationDirectory();
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythMakeDirectory(String* dirPath) {
	int _v = MakeDirectory(dirPath->data);
	int _r = (int)_v;
	return _r;
}
static bool cythChangeDirectory(String* dir) {
	bool _v = ChangeDirectory(dir->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsPathFile(String* path) {
	bool _v = IsPathFile(path->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythIsFileNameValid(String* fileName) {
	bool _v = IsFileNameValid(fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static FilePathList* cythLoadDirectoryFiles(String* dirPath) {
	FilePathList _v = LoadDirectoryFiles(dirPath->data);
	FilePathList* _r = (FilePathList*)jit_alloc(1, sizeof(FilePathList));
	*_r = _v;
	return _r;
}
static FilePathList* cythLoadDirectoryFilesEx(String* basePath, String* filter, bool scanSubdirs) {
	FilePathList _v = LoadDirectoryFilesEx(basePath->data, filter->data, scanSubdirs);
	FilePathList* _r = (FilePathList*)jit_alloc(1, sizeof(FilePathList));
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
	FilePathList* _r = (FilePathList*)jit_alloc(1, sizeof(FilePathList));
	*_r = _v;
	return _r;
}
static void cythUnloadDroppedFiles(FilePathList* files) {
	UnloadDroppedFiles(*files);
}
static long* cythGetFileModTime(String* fileName) {
	long _v = GetFileModTime(fileName->data);
	long* _r = (long*)jit_alloc(1, sizeof(long));
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
static Array* cythEncodeDataBase64(const unsigned char * data, int dataSize, int * outputSize) {
	char * _v = EncodeDataBase64(data, dataSize, outputSize);
	Array* _r = (Array*)jit_alloc(1, sizeof(Array));
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
static AutomationEventList* cythLoadAutomationEventList(String* fileName) {
	AutomationEventList _v = LoadAutomationEventList(fileName->data);
	AutomationEventList* _r = (AutomationEventList*)jit_alloc(1, sizeof(AutomationEventList));
	*_r = _v;
	return _r;
}
static void cythUnloadAutomationEventList(AutomationEventList* list) {
	UnloadAutomationEventList(*list);
}
static bool cythExportAutomationEventList(AutomationEventList* list, String* fileName) {
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
static String* cythGetGamepadName(int gamepad) {
	const char * _v = GetGamepadName(gamepad);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
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
static int cythSetGamepadMappings(String* mappings) {
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetMouseDelta() {
	Vector2 _v = GetMouseDelta();
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Texture2D* _r = (Texture2D*)jit_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static Rectangle* cythGetShapesTextureRectangle() {
	Rectangle _v = GetShapesTextureRectangle();
	Rectangle* _r = (Rectangle*)jit_alloc(1, sizeof(Rectangle));
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
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBasis(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointBasis(*p1, *p2, *p3, *p4, t);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointCatmullRom(Vector2* p1, Vector2* p2, Vector2* p3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointCatmullRom(*p1, *p2, *p3, *p4, t);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBezierQuad(Vector2* p1, Vector2* c2, Vector2* p3, float t) {
	Vector2 _v = GetSplinePointBezierQuad(*p1, *c2, *p3, t);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
	*_r = _v;
	return _r;
}
static Vector2* cythGetSplinePointBezierCubic(Vector2* p1, Vector2* c2, Vector2* c3, Vector2* p4, float t) {
	Vector2 _v = GetSplinePointBezierCubic(*p1, *c2, *c3, *p4, t);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	Rectangle* _r = (Rectangle*)jit_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static Image* cythLoadImage(String* fileName) {
	Image _v = LoadImage(fileName->data);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageRaw(String* fileName, int width, int height, int format, int headerSize) {
	Image _v = LoadImageRaw(fileName->data, width, height, format, headerSize);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageAnim(String* fileName, int * frames) {
	Image _v = LoadImageAnim(fileName->data, frames);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageAnimFromMemory(String* fileType, const unsigned char * fileData, int dataSize, int * frames) {
	Image _v = LoadImageAnimFromMemory(fileType->data, fileData, dataSize, frames);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromMemory(String* fileType, const unsigned char * fileData, int dataSize) {
	Image _v = LoadImageFromMemory(fileType->data, fileData, dataSize);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromTexture(Texture2D* texture) {
	Image _v = LoadImageFromTexture(*texture);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythLoadImageFromScreen() {
	Image _v = LoadImageFromScreen();
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
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
static bool cythExportImage(Image* image, String* fileName) {
	bool _v = ExportImage(*image, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static unsigned char * cythExportImageToMemory(Image* image, String* fileType, int * fileSize) {
	unsigned char * _v = ExportImageToMemory(*image, fileType->data, fileSize);
	unsigned char * _r = (unsigned char *)_v;
	return _r;
}
static bool cythExportImageAsCode(Image* image, String* fileName) {
	bool _v = ExportImageAsCode(*image, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static Image* cythGenImageColor(int width, int height, Color* color) {
	Image _v = GenImageColor(width, height, *color);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientLinear(int width, int height, int direction, Color* start, Color* end) {
	Image _v = GenImageGradientLinear(width, height, direction, *start, *end);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientRadial(int width, int height, float density, Color* inner, Color* outer) {
	Image _v = GenImageGradientRadial(width, height, density, *inner, *outer);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageGradientSquare(int width, int height, float density, Color* inner, Color* outer) {
	Image _v = GenImageGradientSquare(width, height, density, *inner, *outer);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageChecked(int width, int height, int checksX, int checksY, Color* col1, Color* col2) {
	Image _v = GenImageChecked(width, height, checksX, checksY, *col1, *col2);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageWhiteNoise(int width, int height, float factor) {
	Image _v = GenImageWhiteNoise(width, height, factor);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
	Image _v = GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageCellular(int width, int height, int tileSize) {
	Image _v = GenImageCellular(width, height, tileSize);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythGenImageText(int width, int height, String* text) {
	Image _v = GenImageText(width, height, text->data);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageCopy(Image* image) {
	Image _v = ImageCopy(*image);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageFromImage(Image* image, Rectangle* rec) {
	Image _v = ImageFromImage(*image, *rec);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageFromChannel(Image* image, int selectedChannel) {
	Image _v = ImageFromChannel(*image, selectedChannel);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageText(String* text, int fontSize, Color* color) {
	Image _v = ImageText(text->data, fontSize, *color);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static Image* cythImageTextEx(Font* font, String* text, float fontSize, float spacing, Color* tint) {
	Image _v = ImageTextEx(*font, text->data, fontSize, spacing, *tint);
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
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
	Rectangle* _r = (Rectangle*)jit_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static Color* cythGetImageColor(Image* image, int x, int y) {
	Color _v = GetImageColor(*image, x, y);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
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
static void cythImageDrawText(Image * dst, String* text, int posX, int posY, int fontSize, Color* color) {
	ImageDrawText(dst, text->data, posX, posY, fontSize, *color);
}
static void cythImageDrawTextEx(Image * dst, Font* font, String* text, Vector2* position, float fontSize, float spacing, Color* tint) {
	ImageDrawTextEx(dst, *font, text->data, *position, fontSize, spacing, *tint);
}
static Texture2D* cythLoadTexture(String* fileName) {
	Texture2D _v = LoadTexture(fileName->data);
	Texture2D* _r = (Texture2D*)jit_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static Texture2D* cythLoadTextureFromImage(Image* image) {
	Texture2D _v = LoadTextureFromImage(*image);
	Texture2D* _r = (Texture2D*)jit_alloc(1, sizeof(Texture2D));
	*_r = _v;
	return _r;
}
static TextureCubemap* cythLoadTextureCubemap(Image* image, int layout) {
	TextureCubemap _v = LoadTextureCubemap(*image, layout);
	TextureCubemap* _r = (TextureCubemap*)jit_alloc(1, sizeof(TextureCubemap));
	*_r = _v;
	return _r;
}
static RenderTexture2D* cythLoadRenderTexture(int width, int height) {
	RenderTexture2D _v = LoadRenderTexture(width, height);
	RenderTexture2D* _r = (RenderTexture2D*)jit_alloc(1, sizeof(RenderTexture2D));
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
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
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
	Vector4* _r = (Vector4*)jit_alloc(1, sizeof(Vector4));
	*_r = _v;
	return _r;
}
static Color* cythColorFromNormalized(Vector4* normalized) {
	Color _v = ColorFromNormalized(*normalized);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Vector3* cythColorToHSV(Color* color) {
	Vector3 _v = ColorToHSV(*color);
	Vector3* _r = (Vector3*)jit_alloc(1, sizeof(Vector3));
	*_r = _v;
	return _r;
}
static Color* cythColorFromHSV(float hue, float saturation, float value) {
	Color _v = ColorFromHSV(hue, saturation, value);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorTint(Color* color, Color* tint) {
	Color _v = ColorTint(*color, *tint);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorBrightness(Color* color, float factor) {
	Color _v = ColorBrightness(*color, factor);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorContrast(Color* color, float contrast) {
	Color _v = ColorContrast(*color, contrast);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorAlpha(Color* color, float alpha) {
	Color _v = ColorAlpha(*color, alpha);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorAlphaBlend(Color* dst, Color* src, Color* tint) {
	Color _v = ColorAlphaBlend(*dst, *src, *tint);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythColorLerp(Color* color1, Color* color2, float factor) {
	Color _v = ColorLerp(*color1, *color2, factor);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythGetColor(unsigned int hexValue) {
	Color _v = GetColor(hexValue);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
	*_r = _v;
	return _r;
}
static Color* cythGetPixelColor(void * srcPtr, int format) {
	Color _v = GetPixelColor(srcPtr, format);
	Color* _r = (Color*)jit_alloc(1, sizeof(Color));
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
	Font* _r = (Font*)jit_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFont(String* fileName) {
	Font _v = LoadFont(fileName->data);
	Font* _r = (Font*)jit_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontEx(String* fileName, int fontSize, int * codepoints, int codepointCount) {
	Font _v = LoadFontEx(fileName->data, fontSize, codepoints, codepointCount);
	Font* _r = (Font*)jit_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontFromImage(Image* image, Color* key, int firstChar) {
	Font _v = LoadFontFromImage(*image, *key, firstChar);
	Font* _r = (Font*)jit_alloc(1, sizeof(Font));
	*_r = _v;
	return _r;
}
static Font* cythLoadFontFromMemory(String* fileType, const unsigned char * fileData, int dataSize, int fontSize, int * codepoints, int codepointCount) {
	Font _v = LoadFontFromMemory(fileType->data, fileData, dataSize, fontSize, codepoints, codepointCount);
	Font* _r = (Font*)jit_alloc(1, sizeof(Font));
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
	Image* _r = (Image*)jit_alloc(1, sizeof(Image));
	*_r = _v;
	return _r;
}
static void cythUnloadFontData(GlyphInfo * glyphs, int glyphCount) {
	UnloadFontData(glyphs, glyphCount);
}
static void cythUnloadFont(Font* font) {
	UnloadFont(*font);
}
static bool cythExportFontAsCode(Font* font, String* fileName) {
	bool _v = ExportFontAsCode(*font, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static void cythDrawFPS(int posX, int posY) {
	DrawFPS(posX, posY);
}
static void cythDrawText(String* text, int posX, int posY, int fontSize, Color* color) {
	DrawText(text->data, posX, posY, fontSize, *color);
}
static void cythDrawTextEx(Font* font, String* text, Vector2* position, float fontSize, float spacing, Color* tint) {
	DrawTextEx(*font, text->data, *position, fontSize, spacing, *tint);
}
static void cythDrawTextPro(Font* font, String* text, Vector2* position, Vector2* origin, float rotation, float fontSize, float spacing, Color* tint) {
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
static int cythMeasureText(String* text, int fontSize) {
	int _v = MeasureText(text->data, fontSize);
	int _r = (int)_v;
	return _r;
}
static Vector2* cythMeasureTextEx(Font* font, String* text, float fontSize, float spacing) {
	Vector2 _v = MeasureTextEx(*font, text->data, fontSize, spacing);
	Vector2* _r = (Vector2*)jit_alloc(1, sizeof(Vector2));
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
	GlyphInfo* _r = (GlyphInfo*)jit_alloc(1, sizeof(GlyphInfo));
	*_r = _v;
	return _r;
}
static Rectangle* cythGetGlyphAtlasRec(Font* font, int codepoint) {
	Rectangle _v = GetGlyphAtlasRec(*font, codepoint);
	Rectangle* _r = (Rectangle*)jit_alloc(1, sizeof(Rectangle));
	*_r = _v;
	return _r;
}
static Array* cythLoadUTF8(const int * codepoints, int length) {
	char * _v = LoadUTF8(codepoints, length);
	Array* _r = (Array*)jit_alloc(1, sizeof(Array));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static void cythUnloadUTF8(Array* text) {
	UnloadUTF8(text->data);
}
static int * cythLoadCodepoints(String* text, int * count) {
	int * _v = LoadCodepoints(text->data, count);
	int * _r = (int *)_v;
	return _r;
}
static void cythUnloadCodepoints(int * codepoints) {
	UnloadCodepoints(codepoints);
}
static int cythGetCodepointCount(String* text) {
	int _v = GetCodepointCount(text->data);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepoint(String* text, int * codepointSize) {
	int _v = GetCodepoint(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepointNext(String* text, int * codepointSize) {
	int _v = GetCodepointNext(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static int cythGetCodepointPrevious(String* text, int * codepointSize) {
	int _v = GetCodepointPrevious(text->data, codepointSize);
	int _r = (int)_v;
	return _r;
}
static String* cythCodepointToUTF8(int codepoint, int * utf8Size) {
	const char * _v = CodepointToUTF8(codepoint, utf8Size);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythTextCopy(Array* dst, String* src) {
	int _v = TextCopy(dst->data, src->data);
	int _r = (int)_v;
	return _r;
}
static bool cythTextIsEqual(String* text1, String* text2) {
	bool _v = TextIsEqual(text1->data, text2->data);
	bool _r = (bool)_v;
	return _r;
}
static unsigned int cythTextLength(String* text) {
	unsigned int _v = TextLength(text->data);
	unsigned int _r = (unsigned int)_v;
	return _r;
}
static String* cythTextSubtext(String* text, int position, int length) {
	const char * _v = TextSubtext(text->data, position, length);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static Array* cythTextReplace(String* text, String* replace, String* by) {
	char * _v = TextReplace(text->data, replace->data, by->data);
	Array* _r = (Array*)jit_alloc(1, sizeof(Array));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static Array* cythTextInsert(String* text, String* insert, int position) {
	char * _v = TextInsert(text->data, insert->data, position);
	Array* _r = (Array*)jit_alloc(1, sizeof(Array));
	_r->size = (int)strlen(_v);
	_r->capacity = _r->capacity;
	_r->data = (void*)_v;
	return _r;
}
static String* cythTextJoin(const char ** textList, int count, String* delimiter) {
	const char * _v = TextJoin(textList, count, delimiter->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static const char ** cythTextSplit(String* text, char* delimiter, int * count) {
	const char ** _v = TextSplit(text->data, *delimiter, count);
	const char ** _r = (const char **)_v;
	return _r;
}
static void cythTextAppend(Array* text, String* append, int * position) {
	TextAppend(text->data, append->data, position);
}
static int cythTextFindIndex(String* text, String* find) {
	int _v = TextFindIndex(text->data, find->data);
	int _r = (int)_v;
	return _r;
}
static String* cythTextToUpper(String* text) {
	const char * _v = TextToUpper(text->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythTextToLower(String* text) {
	const char * _v = TextToLower(text->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythTextToPascal(String* text) {
	const char * _v = TextToPascal(text->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythTextToSnake(String* text) {
	const char * _v = TextToSnake(text->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static String* cythTextToCamel(String* text) {
	const char * _v = TextToCamel(text->data);
	String* _r = (String*)jit_alloc(1, sizeof(String) + strlen(_v));
	_r->size = (int)strlen(_v);
	memcpy(_r->data, _v, _r->size);
	return _r;
}
static int cythTextToInteger(String* text) {
	int _v = TextToInteger(text->data);
	int _r = (int)_v;
	return _r;
}
static float cythTextToFloat(String* text) {
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
static Model* cythLoadModel(String* fileName) {
	Model _v = LoadModel(fileName->data);
	Model* _r = (Model*)jit_alloc(1, sizeof(Model));
	*_r = _v;
	return _r;
}
static Model* cythLoadModelFromMesh(Mesh* mesh) {
	Model _v = LoadModelFromMesh(*mesh);
	Model* _r = (Model*)jit_alloc(1, sizeof(Model));
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
	BoundingBox* _r = (BoundingBox*)jit_alloc(1, sizeof(BoundingBox));
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
	BoundingBox* _r = (BoundingBox*)jit_alloc(1, sizeof(BoundingBox));
	*_r = _v;
	return _r;
}
static void cythGenMeshTangents(Mesh * mesh) {
	GenMeshTangents(mesh);
}
static bool cythExportMesh(Mesh* mesh, String* fileName) {
	bool _v = ExportMesh(*mesh, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportMeshAsCode(Mesh* mesh, String* fileName) {
	bool _v = ExportMeshAsCode(*mesh, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static Mesh* cythGenMeshPoly(int sides, float radius) {
	Mesh _v = GenMeshPoly(sides, radius);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshPlane(float width, float length, int resX, int resZ) {
	Mesh _v = GenMeshPlane(width, length, resX, resZ);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCube(float width, float height, float length) {
	Mesh _v = GenMeshCube(width, height, length);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshSphere(float radius, int rings, int slices) {
	Mesh _v = GenMeshSphere(radius, rings, slices);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshHemiSphere(float radius, int rings, int slices) {
	Mesh _v = GenMeshHemiSphere(radius, rings, slices);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCylinder(float radius, float height, int slices) {
	Mesh _v = GenMeshCylinder(radius, height, slices);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCone(float radius, float height, int slices) {
	Mesh _v = GenMeshCone(radius, height, slices);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshTorus(float radius, float size, int radSeg, int sides) {
	Mesh _v = GenMeshTorus(radius, size, radSeg, sides);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshKnot(float radius, float size, int radSeg, int sides) {
	Mesh _v = GenMeshKnot(radius, size, radSeg, sides);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshHeightmap(Image* heightmap, Vector3* size) {
	Mesh _v = GenMeshHeightmap(*heightmap, *size);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Mesh* cythGenMeshCubicmap(Image* cubicmap, Vector3* cubeSize) {
	Mesh _v = GenMeshCubicmap(*cubicmap, *cubeSize);
	Mesh* _r = (Mesh*)jit_alloc(1, sizeof(Mesh));
	*_r = _v;
	return _r;
}
static Material * cythLoadMaterials(String* fileName, int * materialCount) {
	Material * _v = LoadMaterials(fileName->data, materialCount);
	Material * _r = (Material *)_v;
	return _r;
}
static Material* cythLoadMaterialDefault() {
	Material _v = LoadMaterialDefault();
	Material* _r = (Material*)jit_alloc(1, sizeof(Material));
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
static ModelAnimation * cythLoadModelAnimations(String* fileName, int * animCount) {
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
	RayCollision* _r = (RayCollision*)jit_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionBox(Ray* ray, BoundingBox* box) {
	RayCollision _v = GetRayCollisionBox(*ray, *box);
	RayCollision* _r = (RayCollision*)jit_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionMesh(Ray* ray, Mesh* mesh, Matrix* transform) {
	RayCollision _v = GetRayCollisionMesh(*ray, *mesh, *transform);
	RayCollision* _r = (RayCollision*)jit_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionTriangle(Ray* ray, Vector3* p1, Vector3* p2, Vector3* p3) {
	RayCollision _v = GetRayCollisionTriangle(*ray, *p1, *p2, *p3);
	RayCollision* _r = (RayCollision*)jit_alloc(1, sizeof(RayCollision));
	*_r = _v;
	return _r;
}
static RayCollision* cythGetRayCollisionQuad(Ray* ray, Vector3* p1, Vector3* p2, Vector3* p3, Vector3* p4) {
	RayCollision _v = GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);
	RayCollision* _r = (RayCollision*)jit_alloc(1, sizeof(RayCollision));
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
static Wave* cythLoadWave(String* fileName) {
	Wave _v = LoadWave(fileName->data);
	Wave* _r = (Wave*)jit_alloc(1, sizeof(Wave));
	*_r = _v;
	return _r;
}
static Wave* cythLoadWaveFromMemory(String* fileType, const unsigned char * fileData, int dataSize) {
	Wave _v = LoadWaveFromMemory(fileType->data, fileData, dataSize);
	Wave* _r = (Wave*)jit_alloc(1, sizeof(Wave));
	*_r = _v;
	return _r;
}
static bool cythIsWaveValid(Wave* wave) {
	bool _v = IsWaveValid(*wave);
	bool _r = (bool)_v;
	return _r;
}
static Sound* cythLoadSound(String* fileName) {
	Sound _v = LoadSound(fileName->data);
	Sound* _r = (Sound*)jit_alloc(1, sizeof(Sound));
	*_r = _v;
	return _r;
}
static Sound* cythLoadSoundFromWave(Wave* wave) {
	Sound _v = LoadSoundFromWave(*wave);
	Sound* _r = (Sound*)jit_alloc(1, sizeof(Sound));
	*_r = _v;
	return _r;
}
static Sound* cythLoadSoundAlias(Sound* source) {
	Sound _v = LoadSoundAlias(*source);
	Sound* _r = (Sound*)jit_alloc(1, sizeof(Sound));
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
static bool cythExportWave(Wave* wave, String* fileName) {
	bool _v = ExportWave(*wave, fileName->data);
	bool _r = (bool)_v;
	return _r;
}
static bool cythExportWaveAsCode(Wave* wave, String* fileName) {
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
	Wave* _r = (Wave*)jit_alloc(1, sizeof(Wave));
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
static Music* cythLoadMusicStream(String* fileName) {
	Music _v = LoadMusicStream(fileName->data);
	Music* _r = (Music*)jit_alloc(1, sizeof(Music));
	*_r = _v;
	return _r;
}
static Music* cythLoadMusicStreamFromMemory(String* fileType, const unsigned char * data, int dataSize) {
	Music _v = LoadMusicStreamFromMemory(fileType->data, data, dataSize);
	Music* _r = (Music*)jit_alloc(1, sizeof(Music));
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
	AudioStream* _r = (AudioStream*)jit_alloc(1, sizeof(AudioStream));
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
#define jit_set_raylib_functions(_ctx) do { \
  jit_set_function((_ctx), "raylib.initWindow", (uintptr_t)cythInitWindow); \
  jit_set_function((_ctx), "raylib.closeWindow", (uintptr_t)cythCloseWindow); \
  jit_set_function((_ctx), "raylib.windowShouldClose", (uintptr_t)cythWindowShouldClose); \
  jit_set_function((_ctx), "raylib.isWindowReady", (uintptr_t)cythIsWindowReady); \
  jit_set_function((_ctx), "raylib.isWindowFullscreen", (uintptr_t)cythIsWindowFullscreen); \
  jit_set_function((_ctx), "raylib.isWindowHidden", (uintptr_t)cythIsWindowHidden); \
  jit_set_function((_ctx), "raylib.isWindowMinimized", (uintptr_t)cythIsWindowMinimized); \
  jit_set_function((_ctx), "raylib.isWindowMaximized", (uintptr_t)cythIsWindowMaximized); \
  jit_set_function((_ctx), "raylib.isWindowFocused", (uintptr_t)cythIsWindowFocused); \
  jit_set_function((_ctx), "raylib.isWindowResized", (uintptr_t)cythIsWindowResized); \
  jit_set_function((_ctx), "raylib.isWindowState", (uintptr_t)cythIsWindowState); \
  jit_set_function((_ctx), "raylib.setWindowState", (uintptr_t)cythSetWindowState); \
  jit_set_function((_ctx), "raylib.clearWindowState", (uintptr_t)cythClearWindowState); \
  jit_set_function((_ctx), "raylib.toggleFullscreen", (uintptr_t)cythToggleFullscreen); \
  jit_set_function((_ctx), "raylib.toggleBorderlessWindowed", (uintptr_t)cythToggleBorderlessWindowed); \
  jit_set_function((_ctx), "raylib.maximizeWindow", (uintptr_t)cythMaximizeWindow); \
  jit_set_function((_ctx), "raylib.minimizeWindow", (uintptr_t)cythMinimizeWindow); \
  jit_set_function((_ctx), "raylib.restoreWindow", (uintptr_t)cythRestoreWindow); \
  jit_set_function((_ctx), "raylib.setWindowIcon", (uintptr_t)cythSetWindowIcon); \
  jit_set_function((_ctx), "raylib.setWindowIcons", (uintptr_t)cythSetWindowIcons); \
  jit_set_function((_ctx), "raylib.setWindowTitle", (uintptr_t)cythSetWindowTitle); \
  jit_set_function((_ctx), "raylib.setWindowPosition", (uintptr_t)cythSetWindowPosition); \
  jit_set_function((_ctx), "raylib.setWindowMonitor", (uintptr_t)cythSetWindowMonitor); \
  jit_set_function((_ctx), "raylib.setWindowMinSize", (uintptr_t)cythSetWindowMinSize); \
  jit_set_function((_ctx), "raylib.setWindowMaxSize", (uintptr_t)cythSetWindowMaxSize); \
  jit_set_function((_ctx), "raylib.setWindowSize", (uintptr_t)cythSetWindowSize); \
  jit_set_function((_ctx), "raylib.setWindowOpacity", (uintptr_t)cythSetWindowOpacity); \
  jit_set_function((_ctx), "raylib.setWindowFocused", (uintptr_t)cythSetWindowFocused); \
  jit_set_function((_ctx), "raylib.getWindowHandle", (uintptr_t)cythGetWindowHandle); \
  jit_set_function((_ctx), "raylib.getScreenWidth", (uintptr_t)cythGetScreenWidth); \
  jit_set_function((_ctx), "raylib.getScreenHeight", (uintptr_t)cythGetScreenHeight); \
  jit_set_function((_ctx), "raylib.getRenderWidth", (uintptr_t)cythGetRenderWidth); \
  jit_set_function((_ctx), "raylib.getRenderHeight", (uintptr_t)cythGetRenderHeight); \
  jit_set_function((_ctx), "raylib.getMonitorCount", (uintptr_t)cythGetMonitorCount); \
  jit_set_function((_ctx), "raylib.getCurrentMonitor", (uintptr_t)cythGetCurrentMonitor); \
  jit_set_function((_ctx), "raylib.getMonitorPosition", (uintptr_t)cythGetMonitorPosition); \
  jit_set_function((_ctx), "raylib.getMonitorWidth", (uintptr_t)cythGetMonitorWidth); \
  jit_set_function((_ctx), "raylib.getMonitorHeight", (uintptr_t)cythGetMonitorHeight); \
  jit_set_function((_ctx), "raylib.getMonitorPhysicalWidth", (uintptr_t)cythGetMonitorPhysicalWidth); \
  jit_set_function((_ctx), "raylib.getMonitorPhysicalHeight", (uintptr_t)cythGetMonitorPhysicalHeight); \
  jit_set_function((_ctx), "raylib.getMonitorRefreshRate", (uintptr_t)cythGetMonitorRefreshRate); \
  jit_set_function((_ctx), "raylib.getWindowPosition", (uintptr_t)cythGetWindowPosition); \
  jit_set_function((_ctx), "raylib.getWindowScaleDPI", (uintptr_t)cythGetWindowScaleDPI); \
  jit_set_function((_ctx), "raylib.getMonitorName", (uintptr_t)cythGetMonitorName); \
  jit_set_function((_ctx), "raylib.setClipboardText", (uintptr_t)cythSetClipboardText); \
  jit_set_function((_ctx), "raylib.getClipboardText", (uintptr_t)cythGetClipboardText); \
  jit_set_function((_ctx), "raylib.getClipboardImage", (uintptr_t)cythGetClipboardImage); \
  jit_set_function((_ctx), "raylib.enableEventWaiting", (uintptr_t)cythEnableEventWaiting); \
  jit_set_function((_ctx), "raylib.disableEventWaiting", (uintptr_t)cythDisableEventWaiting); \
  jit_set_function((_ctx), "raylib.showCursor", (uintptr_t)cythShowCursor); \
  jit_set_function((_ctx), "raylib.hideCursor", (uintptr_t)cythHideCursor); \
  jit_set_function((_ctx), "raylib.isCursorHidden", (uintptr_t)cythIsCursorHidden); \
  jit_set_function((_ctx), "raylib.enableCursor", (uintptr_t)cythEnableCursor); \
  jit_set_function((_ctx), "raylib.disableCursor", (uintptr_t)cythDisableCursor); \
  jit_set_function((_ctx), "raylib.isCursorOnScreen", (uintptr_t)cythIsCursorOnScreen); \
  jit_set_function((_ctx), "raylib.clearBackground", (uintptr_t)cythClearBackground); \
  jit_set_function((_ctx), "raylib.beginDrawing", (uintptr_t)cythBeginDrawing); \
  jit_set_function((_ctx), "raylib.endDrawing", (uintptr_t)cythEndDrawing); \
  jit_set_function((_ctx), "raylib.beginMode2D", (uintptr_t)cythBeginMode2D); \
  jit_set_function((_ctx), "raylib.endMode2D", (uintptr_t)cythEndMode2D); \
  jit_set_function((_ctx), "raylib.beginMode3D", (uintptr_t)cythBeginMode3D); \
  jit_set_function((_ctx), "raylib.endMode3D", (uintptr_t)cythEndMode3D); \
  jit_set_function((_ctx), "raylib.beginTextureMode", (uintptr_t)cythBeginTextureMode); \
  jit_set_function((_ctx), "raylib.endTextureMode", (uintptr_t)cythEndTextureMode); \
  jit_set_function((_ctx), "raylib.beginShaderMode", (uintptr_t)cythBeginShaderMode); \
  jit_set_function((_ctx), "raylib.endShaderMode", (uintptr_t)cythEndShaderMode); \
  jit_set_function((_ctx), "raylib.beginBlendMode", (uintptr_t)cythBeginBlendMode); \
  jit_set_function((_ctx), "raylib.endBlendMode", (uintptr_t)cythEndBlendMode); \
  jit_set_function((_ctx), "raylib.beginScissorMode", (uintptr_t)cythBeginScissorMode); \
  jit_set_function((_ctx), "raylib.endScissorMode", (uintptr_t)cythEndScissorMode); \
  jit_set_function((_ctx), "raylib.beginVrStereoMode", (uintptr_t)cythBeginVrStereoMode); \
  jit_set_function((_ctx), "raylib.endVrStereoMode", (uintptr_t)cythEndVrStereoMode); \
  jit_set_function((_ctx), "raylib.loadVrStereoConfig", (uintptr_t)cythLoadVrStereoConfig); \
  jit_set_function((_ctx), "raylib.unloadVrStereoConfig", (uintptr_t)cythUnloadVrStereoConfig); \
  jit_set_function((_ctx), "raylib.loadShader", (uintptr_t)cythLoadShader); \
  jit_set_function((_ctx), "raylib.loadShaderFromMemory", (uintptr_t)cythLoadShaderFromMemory); \
  jit_set_function((_ctx), "raylib.isShaderValid", (uintptr_t)cythIsShaderValid); \
  jit_set_function((_ctx), "raylib.getShaderLocation", (uintptr_t)cythGetShaderLocation); \
  jit_set_function((_ctx), "raylib.getShaderLocationAttrib", (uintptr_t)cythGetShaderLocationAttrib); \
  jit_set_function((_ctx), "raylib.setShaderValue", (uintptr_t)cythSetShaderValue); \
  jit_set_function((_ctx), "raylib.setShaderValueV", (uintptr_t)cythSetShaderValueV); \
  jit_set_function((_ctx), "raylib.setShaderValueMatrix", (uintptr_t)cythSetShaderValueMatrix); \
  jit_set_function((_ctx), "raylib.setShaderValueTexture", (uintptr_t)cythSetShaderValueTexture); \
  jit_set_function((_ctx), "raylib.unloadShader", (uintptr_t)cythUnloadShader); \
  jit_set_function((_ctx), "raylib.getScreenToWorldRay", (uintptr_t)cythGetScreenToWorldRay); \
  jit_set_function((_ctx), "raylib.getScreenToWorldRayEx", (uintptr_t)cythGetScreenToWorldRayEx); \
  jit_set_function((_ctx), "raylib.getWorldToScreen", (uintptr_t)cythGetWorldToScreen); \
  jit_set_function((_ctx), "raylib.getWorldToScreenEx", (uintptr_t)cythGetWorldToScreenEx); \
  jit_set_function((_ctx), "raylib.getWorldToScreen2D", (uintptr_t)cythGetWorldToScreen2D); \
  jit_set_function((_ctx), "raylib.getScreenToWorld2D", (uintptr_t)cythGetScreenToWorld2D); \
  jit_set_function((_ctx), "raylib.getCameraMatrix", (uintptr_t)cythGetCameraMatrix); \
  jit_set_function((_ctx), "raylib.getCameraMatrix2D", (uintptr_t)cythGetCameraMatrix2D); \
  jit_set_function((_ctx), "raylib.setTargetFPS", (uintptr_t)cythSetTargetFPS); \
  jit_set_function((_ctx), "raylib.getFrameTime", (uintptr_t)cythGetFrameTime); \
  jit_set_function((_ctx), "raylib.getTime", (uintptr_t)cythGetTime); \
  jit_set_function((_ctx), "raylib.getFPS", (uintptr_t)cythGetFPS); \
  jit_set_function((_ctx), "raylib.swapScreenBuffer", (uintptr_t)cythSwapScreenBuffer); \
  jit_set_function((_ctx), "raylib.pollInputEvents", (uintptr_t)cythPollInputEvents); \
  jit_set_function((_ctx), "raylib.waitTime", (uintptr_t)cythWaitTime); \
  jit_set_function((_ctx), "raylib.setRandomSeed", (uintptr_t)cythSetRandomSeed); \
  jit_set_function((_ctx), "raylib.getRandomValue", (uintptr_t)cythGetRandomValue); \
  jit_set_function((_ctx), "raylib.loadRandomSequence", (uintptr_t)cythLoadRandomSequence); \
  jit_set_function((_ctx), "raylib.unloadRandomSequence", (uintptr_t)cythUnloadRandomSequence); \
  jit_set_function((_ctx), "raylib.takeScreenshot", (uintptr_t)cythTakeScreenshot); \
  jit_set_function((_ctx), "raylib.setConfigFlags", (uintptr_t)cythSetConfigFlags); \
  jit_set_function((_ctx), "raylib.openURL", (uintptr_t)cythOpenURL); \
  jit_set_function((_ctx), "raylib.setTraceLogLevel", (uintptr_t)cythSetTraceLogLevel); \
  jit_set_function((_ctx), "raylib.memAlloc", (uintptr_t)cythMemAlloc); \
  jit_set_function((_ctx), "raylib.memRealloc", (uintptr_t)cythMemRealloc); \
  jit_set_function((_ctx), "raylib.memFree", (uintptr_t)cythMemFree); \
  jit_set_function((_ctx), "raylib.setTraceLogCallback", (uintptr_t)cythSetTraceLogCallback); \
  jit_set_function((_ctx), "raylib.setLoadFileDataCallback", (uintptr_t)cythSetLoadFileDataCallback); \
  jit_set_function((_ctx), "raylib.setSaveFileDataCallback", (uintptr_t)cythSetSaveFileDataCallback); \
  jit_set_function((_ctx), "raylib.setLoadFileTextCallback", (uintptr_t)cythSetLoadFileTextCallback); \
  jit_set_function((_ctx), "raylib.setSaveFileTextCallback", (uintptr_t)cythSetSaveFileTextCallback); \
  jit_set_function((_ctx), "raylib.loadFileData", (uintptr_t)cythLoadFileData); \
  jit_set_function((_ctx), "raylib.unloadFileData", (uintptr_t)cythUnloadFileData); \
  jit_set_function((_ctx), "raylib.saveFileData", (uintptr_t)cythSaveFileData); \
  jit_set_function((_ctx), "raylib.exportDataAsCode", (uintptr_t)cythExportDataAsCode); \
  jit_set_function((_ctx), "raylib.loadFileText", (uintptr_t)cythLoadFileText); \
  jit_set_function((_ctx), "raylib.unloadFileText", (uintptr_t)cythUnloadFileText); \
  jit_set_function((_ctx), "raylib.saveFileText", (uintptr_t)cythSaveFileText); \
  jit_set_function((_ctx), "raylib.fileExists", (uintptr_t)cythFileExists); \
  jit_set_function((_ctx), "raylib.directoryExists", (uintptr_t)cythDirectoryExists); \
  jit_set_function((_ctx), "raylib.isFileExtension", (uintptr_t)cythIsFileExtension); \
  jit_set_function((_ctx), "raylib.getFileLength", (uintptr_t)cythGetFileLength); \
  jit_set_function((_ctx), "raylib.getFileExtension", (uintptr_t)cythGetFileExtension); \
  jit_set_function((_ctx), "raylib.getFileName", (uintptr_t)cythGetFileName); \
  jit_set_function((_ctx), "raylib.getFileNameWithoutExt", (uintptr_t)cythGetFileNameWithoutExt); \
  jit_set_function((_ctx), "raylib.getDirectoryPath", (uintptr_t)cythGetDirectoryPath); \
  jit_set_function((_ctx), "raylib.getPrevDirectoryPath", (uintptr_t)cythGetPrevDirectoryPath); \
  jit_set_function((_ctx), "raylib.getWorkingDirectory", (uintptr_t)cythGetWorkingDirectory); \
  jit_set_function((_ctx), "raylib.getApplicationDirectory", (uintptr_t)cythGetApplicationDirectory); \
  jit_set_function((_ctx), "raylib.makeDirectory", (uintptr_t)cythMakeDirectory); \
  jit_set_function((_ctx), "raylib.changeDirectory", (uintptr_t)cythChangeDirectory); \
  jit_set_function((_ctx), "raylib.isPathFile", (uintptr_t)cythIsPathFile); \
  jit_set_function((_ctx), "raylib.isFileNameValid", (uintptr_t)cythIsFileNameValid); \
  jit_set_function((_ctx), "raylib.loadDirectoryFiles", (uintptr_t)cythLoadDirectoryFiles); \
  jit_set_function((_ctx), "raylib.loadDirectoryFilesEx", (uintptr_t)cythLoadDirectoryFilesEx); \
  jit_set_function((_ctx), "raylib.unloadDirectoryFiles", (uintptr_t)cythUnloadDirectoryFiles); \
  jit_set_function((_ctx), "raylib.isFileDropped", (uintptr_t)cythIsFileDropped); \
  jit_set_function((_ctx), "raylib.loadDroppedFiles", (uintptr_t)cythLoadDroppedFiles); \
  jit_set_function((_ctx), "raylib.unloadDroppedFiles", (uintptr_t)cythUnloadDroppedFiles); \
  jit_set_function((_ctx), "raylib.getFileModTime", (uintptr_t)cythGetFileModTime); \
  jit_set_function((_ctx), "raylib.compressData", (uintptr_t)cythCompressData); \
  jit_set_function((_ctx), "raylib.decompressData", (uintptr_t)cythDecompressData); \
  jit_set_function((_ctx), "raylib.encodeDataBase64", (uintptr_t)cythEncodeDataBase64); \
  jit_set_function((_ctx), "raylib.decodeDataBase64", (uintptr_t)cythDecodeDataBase64); \
  jit_set_function((_ctx), "raylib.computeCRC32", (uintptr_t)cythComputeCRC32); \
  jit_set_function((_ctx), "raylib.computeMD5", (uintptr_t)cythComputeMD5); \
  jit_set_function((_ctx), "raylib.computeSHA1", (uintptr_t)cythComputeSHA1); \
  jit_set_function((_ctx), "raylib.loadAutomationEventList", (uintptr_t)cythLoadAutomationEventList); \
  jit_set_function((_ctx), "raylib.unloadAutomationEventList", (uintptr_t)cythUnloadAutomationEventList); \
  jit_set_function((_ctx), "raylib.exportAutomationEventList", (uintptr_t)cythExportAutomationEventList); \
  jit_set_function((_ctx), "raylib.setAutomationEventList", (uintptr_t)cythSetAutomationEventList); \
  jit_set_function((_ctx), "raylib.setAutomationEventBaseFrame", (uintptr_t)cythSetAutomationEventBaseFrame); \
  jit_set_function((_ctx), "raylib.startAutomationEventRecording", (uintptr_t)cythStartAutomationEventRecording); \
  jit_set_function((_ctx), "raylib.stopAutomationEventRecording", (uintptr_t)cythStopAutomationEventRecording); \
  jit_set_function((_ctx), "raylib.playAutomationEvent", (uintptr_t)cythPlayAutomationEvent); \
  jit_set_function((_ctx), "raylib.isKeyPressed", (uintptr_t)cythIsKeyPressed); \
  jit_set_function((_ctx), "raylib.isKeyPressedRepeat", (uintptr_t)cythIsKeyPressedRepeat); \
  jit_set_function((_ctx), "raylib.isKeyDown", (uintptr_t)cythIsKeyDown); \
  jit_set_function((_ctx), "raylib.isKeyReleased", (uintptr_t)cythIsKeyReleased); \
  jit_set_function((_ctx), "raylib.isKeyUp", (uintptr_t)cythIsKeyUp); \
  jit_set_function((_ctx), "raylib.getKeyPressed", (uintptr_t)cythGetKeyPressed); \
  jit_set_function((_ctx), "raylib.getCharPressed", (uintptr_t)cythGetCharPressed); \
  jit_set_function((_ctx), "raylib.setExitKey", (uintptr_t)cythSetExitKey); \
  jit_set_function((_ctx), "raylib.isGamepadAvailable", (uintptr_t)cythIsGamepadAvailable); \
  jit_set_function((_ctx), "raylib.getGamepadName", (uintptr_t)cythGetGamepadName); \
  jit_set_function((_ctx), "raylib.isGamepadButtonPressed", (uintptr_t)cythIsGamepadButtonPressed); \
  jit_set_function((_ctx), "raylib.isGamepadButtonDown", (uintptr_t)cythIsGamepadButtonDown); \
  jit_set_function((_ctx), "raylib.isGamepadButtonReleased", (uintptr_t)cythIsGamepadButtonReleased); \
  jit_set_function((_ctx), "raylib.isGamepadButtonUp", (uintptr_t)cythIsGamepadButtonUp); \
  jit_set_function((_ctx), "raylib.getGamepadButtonPressed", (uintptr_t)cythGetGamepadButtonPressed); \
  jit_set_function((_ctx), "raylib.getGamepadAxisCount", (uintptr_t)cythGetGamepadAxisCount); \
  jit_set_function((_ctx), "raylib.getGamepadAxisMovement", (uintptr_t)cythGetGamepadAxisMovement); \
  jit_set_function((_ctx), "raylib.setGamepadMappings", (uintptr_t)cythSetGamepadMappings); \
  jit_set_function((_ctx), "raylib.setGamepadVibration", (uintptr_t)cythSetGamepadVibration); \
  jit_set_function((_ctx), "raylib.isMouseButtonPressed", (uintptr_t)cythIsMouseButtonPressed); \
  jit_set_function((_ctx), "raylib.isMouseButtonDown", (uintptr_t)cythIsMouseButtonDown); \
  jit_set_function((_ctx), "raylib.isMouseButtonReleased", (uintptr_t)cythIsMouseButtonReleased); \
  jit_set_function((_ctx), "raylib.isMouseButtonUp", (uintptr_t)cythIsMouseButtonUp); \
  jit_set_function((_ctx), "raylib.getMouseX", (uintptr_t)cythGetMouseX); \
  jit_set_function((_ctx), "raylib.getMouseY", (uintptr_t)cythGetMouseY); \
  jit_set_function((_ctx), "raylib.getMousePosition", (uintptr_t)cythGetMousePosition); \
  jit_set_function((_ctx), "raylib.getMouseDelta", (uintptr_t)cythGetMouseDelta); \
  jit_set_function((_ctx), "raylib.setMousePosition", (uintptr_t)cythSetMousePosition); \
  jit_set_function((_ctx), "raylib.setMouseOffset", (uintptr_t)cythSetMouseOffset); \
  jit_set_function((_ctx), "raylib.setMouseScale", (uintptr_t)cythSetMouseScale); \
  jit_set_function((_ctx), "raylib.getMouseWheelMove", (uintptr_t)cythGetMouseWheelMove); \
  jit_set_function((_ctx), "raylib.getMouseWheelMoveV", (uintptr_t)cythGetMouseWheelMoveV); \
  jit_set_function((_ctx), "raylib.setMouseCursor", (uintptr_t)cythSetMouseCursor); \
  jit_set_function((_ctx), "raylib.getTouchX", (uintptr_t)cythGetTouchX); \
  jit_set_function((_ctx), "raylib.getTouchY", (uintptr_t)cythGetTouchY); \
  jit_set_function((_ctx), "raylib.getTouchPosition", (uintptr_t)cythGetTouchPosition); \
  jit_set_function((_ctx), "raylib.getTouchPointId", (uintptr_t)cythGetTouchPointId); \
  jit_set_function((_ctx), "raylib.getTouchPointCount", (uintptr_t)cythGetTouchPointCount); \
  jit_set_function((_ctx), "raylib.setGesturesEnabled", (uintptr_t)cythSetGesturesEnabled); \
  jit_set_function((_ctx), "raylib.isGestureDetected", (uintptr_t)cythIsGestureDetected); \
  jit_set_function((_ctx), "raylib.getGestureDetected", (uintptr_t)cythGetGestureDetected); \
  jit_set_function((_ctx), "raylib.getGestureHoldDuration", (uintptr_t)cythGetGestureHoldDuration); \
  jit_set_function((_ctx), "raylib.getGestureDragVector", (uintptr_t)cythGetGestureDragVector); \
  jit_set_function((_ctx), "raylib.getGestureDragAngle", (uintptr_t)cythGetGestureDragAngle); \
  jit_set_function((_ctx), "raylib.getGesturePinchVector", (uintptr_t)cythGetGesturePinchVector); \
  jit_set_function((_ctx), "raylib.getGesturePinchAngle", (uintptr_t)cythGetGesturePinchAngle); \
  jit_set_function((_ctx), "raylib.updateCamera", (uintptr_t)cythUpdateCamera); \
  jit_set_function((_ctx), "raylib.updateCameraPro", (uintptr_t)cythUpdateCameraPro); \
  jit_set_function((_ctx), "raylib.setShapesTexture", (uintptr_t)cythSetShapesTexture); \
  jit_set_function((_ctx), "raylib.getShapesTexture", (uintptr_t)cythGetShapesTexture); \
  jit_set_function((_ctx), "raylib.getShapesTextureRectangle", (uintptr_t)cythGetShapesTextureRectangle); \
  jit_set_function((_ctx), "raylib.drawPixel", (uintptr_t)cythDrawPixel); \
  jit_set_function((_ctx), "raylib.drawPixelV", (uintptr_t)cythDrawPixelV); \
  jit_set_function((_ctx), "raylib.drawLine", (uintptr_t)cythDrawLine); \
  jit_set_function((_ctx), "raylib.drawLineV", (uintptr_t)cythDrawLineV); \
  jit_set_function((_ctx), "raylib.drawLineEx", (uintptr_t)cythDrawLineEx); \
  jit_set_function((_ctx), "raylib.drawLineStrip", (uintptr_t)cythDrawLineStrip); \
  jit_set_function((_ctx), "raylib.drawLineBezier", (uintptr_t)cythDrawLineBezier); \
  jit_set_function((_ctx), "raylib.drawCircle", (uintptr_t)cythDrawCircle); \
  jit_set_function((_ctx), "raylib.drawCircleSector", (uintptr_t)cythDrawCircleSector); \
  jit_set_function((_ctx), "raylib.drawCircleSectorLines", (uintptr_t)cythDrawCircleSectorLines); \
  jit_set_function((_ctx), "raylib.drawCircleGradient", (uintptr_t)cythDrawCircleGradient); \
  jit_set_function((_ctx), "raylib.drawCircleV", (uintptr_t)cythDrawCircleV); \
  jit_set_function((_ctx), "raylib.drawCircleLines", (uintptr_t)cythDrawCircleLines); \
  jit_set_function((_ctx), "raylib.drawCircleLinesV", (uintptr_t)cythDrawCircleLinesV); \
  jit_set_function((_ctx), "raylib.drawEllipse", (uintptr_t)cythDrawEllipse); \
  jit_set_function((_ctx), "raylib.drawEllipseLines", (uintptr_t)cythDrawEllipseLines); \
  jit_set_function((_ctx), "raylib.drawRing", (uintptr_t)cythDrawRing); \
  jit_set_function((_ctx), "raylib.drawRingLines", (uintptr_t)cythDrawRingLines); \
  jit_set_function((_ctx), "raylib.drawRectangle", (uintptr_t)cythDrawRectangle); \
  jit_set_function((_ctx), "raylib.drawRectangleV", (uintptr_t)cythDrawRectangleV); \
  jit_set_function((_ctx), "raylib.drawRectangleRec", (uintptr_t)cythDrawRectangleRec); \
  jit_set_function((_ctx), "raylib.drawRectanglePro", (uintptr_t)cythDrawRectanglePro); \
  jit_set_function((_ctx), "raylib.drawRectangleGradientV", (uintptr_t)cythDrawRectangleGradientV); \
  jit_set_function((_ctx), "raylib.drawRectangleGradientH", (uintptr_t)cythDrawRectangleGradientH); \
  jit_set_function((_ctx), "raylib.drawRectangleGradientEx", (uintptr_t)cythDrawRectangleGradientEx); \
  jit_set_function((_ctx), "raylib.drawRectangleLines", (uintptr_t)cythDrawRectangleLines); \
  jit_set_function((_ctx), "raylib.drawRectangleLinesEx", (uintptr_t)cythDrawRectangleLinesEx); \
  jit_set_function((_ctx), "raylib.drawRectangleRounded", (uintptr_t)cythDrawRectangleRounded); \
  jit_set_function((_ctx), "raylib.drawRectangleRoundedLines", (uintptr_t)cythDrawRectangleRoundedLines); \
  jit_set_function((_ctx), "raylib.drawRectangleRoundedLinesEx", (uintptr_t)cythDrawRectangleRoundedLinesEx); \
  jit_set_function((_ctx), "raylib.drawTriangle", (uintptr_t)cythDrawTriangle); \
  jit_set_function((_ctx), "raylib.drawTriangleLines", (uintptr_t)cythDrawTriangleLines); \
  jit_set_function((_ctx), "raylib.drawTriangleFan", (uintptr_t)cythDrawTriangleFan); \
  jit_set_function((_ctx), "raylib.drawTriangleStrip", (uintptr_t)cythDrawTriangleStrip); \
  jit_set_function((_ctx), "raylib.drawPoly", (uintptr_t)cythDrawPoly); \
  jit_set_function((_ctx), "raylib.drawPolyLines", (uintptr_t)cythDrawPolyLines); \
  jit_set_function((_ctx), "raylib.drawPolyLinesEx", (uintptr_t)cythDrawPolyLinesEx); \
  jit_set_function((_ctx), "raylib.drawSplineLinear", (uintptr_t)cythDrawSplineLinear); \
  jit_set_function((_ctx), "raylib.drawSplineBasis", (uintptr_t)cythDrawSplineBasis); \
  jit_set_function((_ctx), "raylib.drawSplineCatmullRom", (uintptr_t)cythDrawSplineCatmullRom); \
  jit_set_function((_ctx), "raylib.drawSplineBezierQuadratic", (uintptr_t)cythDrawSplineBezierQuadratic); \
  jit_set_function((_ctx), "raylib.drawSplineBezierCubic", (uintptr_t)cythDrawSplineBezierCubic); \
  jit_set_function((_ctx), "raylib.drawSplineSegmentLinear", (uintptr_t)cythDrawSplineSegmentLinear); \
  jit_set_function((_ctx), "raylib.drawSplineSegmentBasis", (uintptr_t)cythDrawSplineSegmentBasis); \
  jit_set_function((_ctx), "raylib.drawSplineSegmentCatmullRom", (uintptr_t)cythDrawSplineSegmentCatmullRom); \
  jit_set_function((_ctx), "raylib.drawSplineSegmentBezierQuadratic", (uintptr_t)cythDrawSplineSegmentBezierQuadratic); \
  jit_set_function((_ctx), "raylib.drawSplineSegmentBezierCubic", (uintptr_t)cythDrawSplineSegmentBezierCubic); \
  jit_set_function((_ctx), "raylib.getSplinePointLinear", (uintptr_t)cythGetSplinePointLinear); \
  jit_set_function((_ctx), "raylib.getSplinePointBasis", (uintptr_t)cythGetSplinePointBasis); \
  jit_set_function((_ctx), "raylib.getSplinePointCatmullRom", (uintptr_t)cythGetSplinePointCatmullRom); \
  jit_set_function((_ctx), "raylib.getSplinePointBezierQuad", (uintptr_t)cythGetSplinePointBezierQuad); \
  jit_set_function((_ctx), "raylib.getSplinePointBezierCubic", (uintptr_t)cythGetSplinePointBezierCubic); \
  jit_set_function((_ctx), "raylib.checkCollisionRecs", (uintptr_t)cythCheckCollisionRecs); \
  jit_set_function((_ctx), "raylib.checkCollisionCircles", (uintptr_t)cythCheckCollisionCircles); \
  jit_set_function((_ctx), "raylib.checkCollisionCircleRec", (uintptr_t)cythCheckCollisionCircleRec); \
  jit_set_function((_ctx), "raylib.checkCollisionCircleLine", (uintptr_t)cythCheckCollisionCircleLine); \
  jit_set_function((_ctx), "raylib.checkCollisionPointRec", (uintptr_t)cythCheckCollisionPointRec); \
  jit_set_function((_ctx), "raylib.checkCollisionPointCircle", (uintptr_t)cythCheckCollisionPointCircle); \
  jit_set_function((_ctx), "raylib.checkCollisionPointTriangle", (uintptr_t)cythCheckCollisionPointTriangle); \
  jit_set_function((_ctx), "raylib.checkCollisionPointLine", (uintptr_t)cythCheckCollisionPointLine); \
  jit_set_function((_ctx), "raylib.checkCollisionPointPoly", (uintptr_t)cythCheckCollisionPointPoly); \
  jit_set_function((_ctx), "raylib.checkCollisionLines", (uintptr_t)cythCheckCollisionLines); \
  jit_set_function((_ctx), "raylib.getCollisionRec", (uintptr_t)cythGetCollisionRec); \
  jit_set_function((_ctx), "raylib.loadImage", (uintptr_t)cythLoadImage); \
  jit_set_function((_ctx), "raylib.loadImageRaw", (uintptr_t)cythLoadImageRaw); \
  jit_set_function((_ctx), "raylib.loadImageAnim", (uintptr_t)cythLoadImageAnim); \
  jit_set_function((_ctx), "raylib.loadImageAnimFromMemory", (uintptr_t)cythLoadImageAnimFromMemory); \
  jit_set_function((_ctx), "raylib.loadImageFromMemory", (uintptr_t)cythLoadImageFromMemory); \
  jit_set_function((_ctx), "raylib.loadImageFromTexture", (uintptr_t)cythLoadImageFromTexture); \
  jit_set_function((_ctx), "raylib.loadImageFromScreen", (uintptr_t)cythLoadImageFromScreen); \
  jit_set_function((_ctx), "raylib.isImageValid", (uintptr_t)cythIsImageValid); \
  jit_set_function((_ctx), "raylib.unloadImage", (uintptr_t)cythUnloadImage); \
  jit_set_function((_ctx), "raylib.exportImage", (uintptr_t)cythExportImage); \
  jit_set_function((_ctx), "raylib.exportImageToMemory", (uintptr_t)cythExportImageToMemory); \
  jit_set_function((_ctx), "raylib.exportImageAsCode", (uintptr_t)cythExportImageAsCode); \
  jit_set_function((_ctx), "raylib.genImageColor", (uintptr_t)cythGenImageColor); \
  jit_set_function((_ctx), "raylib.genImageGradientLinear", (uintptr_t)cythGenImageGradientLinear); \
  jit_set_function((_ctx), "raylib.genImageGradientRadial", (uintptr_t)cythGenImageGradientRadial); \
  jit_set_function((_ctx), "raylib.genImageGradientSquare", (uintptr_t)cythGenImageGradientSquare); \
  jit_set_function((_ctx), "raylib.genImageChecked", (uintptr_t)cythGenImageChecked); \
  jit_set_function((_ctx), "raylib.genImageWhiteNoise", (uintptr_t)cythGenImageWhiteNoise); \
  jit_set_function((_ctx), "raylib.genImagePerlinNoise", (uintptr_t)cythGenImagePerlinNoise); \
  jit_set_function((_ctx), "raylib.genImageCellular", (uintptr_t)cythGenImageCellular); \
  jit_set_function((_ctx), "raylib.genImageText", (uintptr_t)cythGenImageText); \
  jit_set_function((_ctx), "raylib.imageCopy", (uintptr_t)cythImageCopy); \
  jit_set_function((_ctx), "raylib.imageFromImage", (uintptr_t)cythImageFromImage); \
  jit_set_function((_ctx), "raylib.imageFromChannel", (uintptr_t)cythImageFromChannel); \
  jit_set_function((_ctx), "raylib.imageText", (uintptr_t)cythImageText); \
  jit_set_function((_ctx), "raylib.imageTextEx", (uintptr_t)cythImageTextEx); \
  jit_set_function((_ctx), "raylib.imageFormat", (uintptr_t)cythImageFormat); \
  jit_set_function((_ctx), "raylib.imageToPOT", (uintptr_t)cythImageToPOT); \
  jit_set_function((_ctx), "raylib.imageCrop", (uintptr_t)cythImageCrop); \
  jit_set_function((_ctx), "raylib.imageAlphaCrop", (uintptr_t)cythImageAlphaCrop); \
  jit_set_function((_ctx), "raylib.imageAlphaClear", (uintptr_t)cythImageAlphaClear); \
  jit_set_function((_ctx), "raylib.imageAlphaMask", (uintptr_t)cythImageAlphaMask); \
  jit_set_function((_ctx), "raylib.imageAlphaPremultiply", (uintptr_t)cythImageAlphaPremultiply); \
  jit_set_function((_ctx), "raylib.imageBlurGaussian", (uintptr_t)cythImageBlurGaussian); \
  jit_set_function((_ctx), "raylib.imageKernelConvolution", (uintptr_t)cythImageKernelConvolution); \
  jit_set_function((_ctx), "raylib.imageResize", (uintptr_t)cythImageResize); \
  jit_set_function((_ctx), "raylib.imageResizeNN", (uintptr_t)cythImageResizeNN); \
  jit_set_function((_ctx), "raylib.imageResizeCanvas", (uintptr_t)cythImageResizeCanvas); \
  jit_set_function((_ctx), "raylib.imageMipmaps", (uintptr_t)cythImageMipmaps); \
  jit_set_function((_ctx), "raylib.imageDither", (uintptr_t)cythImageDither); \
  jit_set_function((_ctx), "raylib.imageFlipVertical", (uintptr_t)cythImageFlipVertical); \
  jit_set_function((_ctx), "raylib.imageFlipHorizontal", (uintptr_t)cythImageFlipHorizontal); \
  jit_set_function((_ctx), "raylib.imageRotate", (uintptr_t)cythImageRotate); \
  jit_set_function((_ctx), "raylib.imageRotateCW", (uintptr_t)cythImageRotateCW); \
  jit_set_function((_ctx), "raylib.imageRotateCCW", (uintptr_t)cythImageRotateCCW); \
  jit_set_function((_ctx), "raylib.imageColorTint", (uintptr_t)cythImageColorTint); \
  jit_set_function((_ctx), "raylib.imageColorInvert", (uintptr_t)cythImageColorInvert); \
  jit_set_function((_ctx), "raylib.imageColorGrayscale", (uintptr_t)cythImageColorGrayscale); \
  jit_set_function((_ctx), "raylib.imageColorContrast", (uintptr_t)cythImageColorContrast); \
  jit_set_function((_ctx), "raylib.imageColorBrightness", (uintptr_t)cythImageColorBrightness); \
  jit_set_function((_ctx), "raylib.imageColorReplace", (uintptr_t)cythImageColorReplace); \
  jit_set_function((_ctx), "raylib.loadImageColors", (uintptr_t)cythLoadImageColors); \
  jit_set_function((_ctx), "raylib.loadImagePalette", (uintptr_t)cythLoadImagePalette); \
  jit_set_function((_ctx), "raylib.unloadImageColors", (uintptr_t)cythUnloadImageColors); \
  jit_set_function((_ctx), "raylib.unloadImagePalette", (uintptr_t)cythUnloadImagePalette); \
  jit_set_function((_ctx), "raylib.getImageAlphaBorder", (uintptr_t)cythGetImageAlphaBorder); \
  jit_set_function((_ctx), "raylib.getImageColor", (uintptr_t)cythGetImageColor); \
  jit_set_function((_ctx), "raylib.imageClearBackground", (uintptr_t)cythImageClearBackground); \
  jit_set_function((_ctx), "raylib.imageDrawPixel", (uintptr_t)cythImageDrawPixel); \
  jit_set_function((_ctx), "raylib.imageDrawPixelV", (uintptr_t)cythImageDrawPixelV); \
  jit_set_function((_ctx), "raylib.imageDrawLine", (uintptr_t)cythImageDrawLine); \
  jit_set_function((_ctx), "raylib.imageDrawLineV", (uintptr_t)cythImageDrawLineV); \
  jit_set_function((_ctx), "raylib.imageDrawLineEx", (uintptr_t)cythImageDrawLineEx); \
  jit_set_function((_ctx), "raylib.imageDrawCircle", (uintptr_t)cythImageDrawCircle); \
  jit_set_function((_ctx), "raylib.imageDrawCircleV", (uintptr_t)cythImageDrawCircleV); \
  jit_set_function((_ctx), "raylib.imageDrawCircleLines", (uintptr_t)cythImageDrawCircleLines); \
  jit_set_function((_ctx), "raylib.imageDrawCircleLinesV", (uintptr_t)cythImageDrawCircleLinesV); \
  jit_set_function((_ctx), "raylib.imageDrawRectangle", (uintptr_t)cythImageDrawRectangle); \
  jit_set_function((_ctx), "raylib.imageDrawRectangleV", (uintptr_t)cythImageDrawRectangleV); \
  jit_set_function((_ctx), "raylib.imageDrawRectangleRec", (uintptr_t)cythImageDrawRectangleRec); \
  jit_set_function((_ctx), "raylib.imageDrawRectangleLines", (uintptr_t)cythImageDrawRectangleLines); \
  jit_set_function((_ctx), "raylib.imageDrawTriangle", (uintptr_t)cythImageDrawTriangle); \
  jit_set_function((_ctx), "raylib.imageDrawTriangleEx", (uintptr_t)cythImageDrawTriangleEx); \
  jit_set_function((_ctx), "raylib.imageDrawTriangleLines", (uintptr_t)cythImageDrawTriangleLines); \
  jit_set_function((_ctx), "raylib.imageDrawTriangleFan", (uintptr_t)cythImageDrawTriangleFan); \
  jit_set_function((_ctx), "raylib.imageDrawTriangleStrip", (uintptr_t)cythImageDrawTriangleStrip); \
  jit_set_function((_ctx), "raylib.imageDraw", (uintptr_t)cythImageDraw); \
  jit_set_function((_ctx), "raylib.imageDrawText", (uintptr_t)cythImageDrawText); \
  jit_set_function((_ctx), "raylib.imageDrawTextEx", (uintptr_t)cythImageDrawTextEx); \
  jit_set_function((_ctx), "raylib.loadTexture", (uintptr_t)cythLoadTexture); \
  jit_set_function((_ctx), "raylib.loadTextureFromImage", (uintptr_t)cythLoadTextureFromImage); \
  jit_set_function((_ctx), "raylib.loadTextureCubemap", (uintptr_t)cythLoadTextureCubemap); \
  jit_set_function((_ctx), "raylib.loadRenderTexture", (uintptr_t)cythLoadRenderTexture); \
  jit_set_function((_ctx), "raylib.isTextureValid", (uintptr_t)cythIsTextureValid); \
  jit_set_function((_ctx), "raylib.unloadTexture", (uintptr_t)cythUnloadTexture); \
  jit_set_function((_ctx), "raylib.isRenderTextureValid", (uintptr_t)cythIsRenderTextureValid); \
  jit_set_function((_ctx), "raylib.unloadRenderTexture", (uintptr_t)cythUnloadRenderTexture); \
  jit_set_function((_ctx), "raylib.updateTexture", (uintptr_t)cythUpdateTexture); \
  jit_set_function((_ctx), "raylib.updateTextureRec", (uintptr_t)cythUpdateTextureRec); \
  jit_set_function((_ctx), "raylib.genTextureMipmaps", (uintptr_t)cythGenTextureMipmaps); \
  jit_set_function((_ctx), "raylib.setTextureFilter", (uintptr_t)cythSetTextureFilter); \
  jit_set_function((_ctx), "raylib.setTextureWrap", (uintptr_t)cythSetTextureWrap); \
  jit_set_function((_ctx), "raylib.drawTexture", (uintptr_t)cythDrawTexture); \
  jit_set_function((_ctx), "raylib.drawTextureV", (uintptr_t)cythDrawTextureV); \
  jit_set_function((_ctx), "raylib.drawTextureEx", (uintptr_t)cythDrawTextureEx); \
  jit_set_function((_ctx), "raylib.drawTextureRec", (uintptr_t)cythDrawTextureRec); \
  jit_set_function((_ctx), "raylib.drawTexturePro", (uintptr_t)cythDrawTexturePro); \
  jit_set_function((_ctx), "raylib.drawTextureNPatch", (uintptr_t)cythDrawTextureNPatch); \
  jit_set_function((_ctx), "raylib.colorIsEqual", (uintptr_t)cythColorIsEqual); \
  jit_set_function((_ctx), "raylib.fade", (uintptr_t)cythFade); \
  jit_set_function((_ctx), "raylib.colorToInt", (uintptr_t)cythColorToInt); \
  jit_set_function((_ctx), "raylib.colorNormalize", (uintptr_t)cythColorNormalize); \
  jit_set_function((_ctx), "raylib.colorFromNormalized", (uintptr_t)cythColorFromNormalized); \
  jit_set_function((_ctx), "raylib.colorToHSV", (uintptr_t)cythColorToHSV); \
  jit_set_function((_ctx), "raylib.colorFromHSV", (uintptr_t)cythColorFromHSV); \
  jit_set_function((_ctx), "raylib.colorTint", (uintptr_t)cythColorTint); \
  jit_set_function((_ctx), "raylib.colorBrightness", (uintptr_t)cythColorBrightness); \
  jit_set_function((_ctx), "raylib.colorContrast", (uintptr_t)cythColorContrast); \
  jit_set_function((_ctx), "raylib.colorAlpha", (uintptr_t)cythColorAlpha); \
  jit_set_function((_ctx), "raylib.colorAlphaBlend", (uintptr_t)cythColorAlphaBlend); \
  jit_set_function((_ctx), "raylib.colorLerp", (uintptr_t)cythColorLerp); \
  jit_set_function((_ctx), "raylib.getColor", (uintptr_t)cythGetColor); \
  jit_set_function((_ctx), "raylib.getPixelColor", (uintptr_t)cythGetPixelColor); \
  jit_set_function((_ctx), "raylib.setPixelColor", (uintptr_t)cythSetPixelColor); \
  jit_set_function((_ctx), "raylib.getPixelDataSize", (uintptr_t)cythGetPixelDataSize); \
  jit_set_function((_ctx), "raylib.getFontDefault", (uintptr_t)cythGetFontDefault); \
  jit_set_function((_ctx), "raylib.loadFont", (uintptr_t)cythLoadFont); \
  jit_set_function((_ctx), "raylib.loadFontEx", (uintptr_t)cythLoadFontEx); \
  jit_set_function((_ctx), "raylib.loadFontFromImage", (uintptr_t)cythLoadFontFromImage); \
  jit_set_function((_ctx), "raylib.loadFontFromMemory", (uintptr_t)cythLoadFontFromMemory); \
  jit_set_function((_ctx), "raylib.isFontValid", (uintptr_t)cythIsFontValid); \
  jit_set_function((_ctx), "raylib.loadFontData", (uintptr_t)cythLoadFontData); \
  jit_set_function((_ctx), "raylib.genImageFontAtlas", (uintptr_t)cythGenImageFontAtlas); \
  jit_set_function((_ctx), "raylib.unloadFontData", (uintptr_t)cythUnloadFontData); \
  jit_set_function((_ctx), "raylib.unloadFont", (uintptr_t)cythUnloadFont); \
  jit_set_function((_ctx), "raylib.exportFontAsCode", (uintptr_t)cythExportFontAsCode); \
  jit_set_function((_ctx), "raylib.drawFPS", (uintptr_t)cythDrawFPS); \
  jit_set_function((_ctx), "raylib.drawText", (uintptr_t)cythDrawText); \
  jit_set_function((_ctx), "raylib.drawTextEx", (uintptr_t)cythDrawTextEx); \
  jit_set_function((_ctx), "raylib.drawTextPro", (uintptr_t)cythDrawTextPro); \
  jit_set_function((_ctx), "raylib.drawTextCodepoint", (uintptr_t)cythDrawTextCodepoint); \
  jit_set_function((_ctx), "raylib.drawTextCodepoints", (uintptr_t)cythDrawTextCodepoints); \
  jit_set_function((_ctx), "raylib.setTextLineSpacing", (uintptr_t)cythSetTextLineSpacing); \
  jit_set_function((_ctx), "raylib.measureText", (uintptr_t)cythMeasureText); \
  jit_set_function((_ctx), "raylib.measureTextEx", (uintptr_t)cythMeasureTextEx); \
  jit_set_function((_ctx), "raylib.getGlyphIndex", (uintptr_t)cythGetGlyphIndex); \
  jit_set_function((_ctx), "raylib.getGlyphInfo", (uintptr_t)cythGetGlyphInfo); \
  jit_set_function((_ctx), "raylib.getGlyphAtlasRec", (uintptr_t)cythGetGlyphAtlasRec); \
  jit_set_function((_ctx), "raylib.loadUTF8", (uintptr_t)cythLoadUTF8); \
  jit_set_function((_ctx), "raylib.unloadUTF8", (uintptr_t)cythUnloadUTF8); \
  jit_set_function((_ctx), "raylib.loadCodepoints", (uintptr_t)cythLoadCodepoints); \
  jit_set_function((_ctx), "raylib.unloadCodepoints", (uintptr_t)cythUnloadCodepoints); \
  jit_set_function((_ctx), "raylib.getCodepointCount", (uintptr_t)cythGetCodepointCount); \
  jit_set_function((_ctx), "raylib.getCodepoint", (uintptr_t)cythGetCodepoint); \
  jit_set_function((_ctx), "raylib.getCodepointNext", (uintptr_t)cythGetCodepointNext); \
  jit_set_function((_ctx), "raylib.getCodepointPrevious", (uintptr_t)cythGetCodepointPrevious); \
  jit_set_function((_ctx), "raylib.codepointToUTF8", (uintptr_t)cythCodepointToUTF8); \
  jit_set_function((_ctx), "raylib.textCopy", (uintptr_t)cythTextCopy); \
  jit_set_function((_ctx), "raylib.textIsEqual", (uintptr_t)cythTextIsEqual); \
  jit_set_function((_ctx), "raylib.textLength", (uintptr_t)cythTextLength); \
  jit_set_function((_ctx), "raylib.textSubtext", (uintptr_t)cythTextSubtext); \
  jit_set_function((_ctx), "raylib.textReplace", (uintptr_t)cythTextReplace); \
  jit_set_function((_ctx), "raylib.textInsert", (uintptr_t)cythTextInsert); \
  jit_set_function((_ctx), "raylib.textJoin", (uintptr_t)cythTextJoin); \
  jit_set_function((_ctx), "raylib.textSplit", (uintptr_t)cythTextSplit); \
  jit_set_function((_ctx), "raylib.textAppend", (uintptr_t)cythTextAppend); \
  jit_set_function((_ctx), "raylib.textFindIndex", (uintptr_t)cythTextFindIndex); \
  jit_set_function((_ctx), "raylib.textToUpper", (uintptr_t)cythTextToUpper); \
  jit_set_function((_ctx), "raylib.textToLower", (uintptr_t)cythTextToLower); \
  jit_set_function((_ctx), "raylib.textToPascal", (uintptr_t)cythTextToPascal); \
  jit_set_function((_ctx), "raylib.textToSnake", (uintptr_t)cythTextToSnake); \
  jit_set_function((_ctx), "raylib.textToCamel", (uintptr_t)cythTextToCamel); \
  jit_set_function((_ctx), "raylib.textToInteger", (uintptr_t)cythTextToInteger); \
  jit_set_function((_ctx), "raylib.textToFloat", (uintptr_t)cythTextToFloat); \
  jit_set_function((_ctx), "raylib.drawLine3D", (uintptr_t)cythDrawLine3D); \
  jit_set_function((_ctx), "raylib.drawPoint3D", (uintptr_t)cythDrawPoint3D); \
  jit_set_function((_ctx), "raylib.drawCircle3D", (uintptr_t)cythDrawCircle3D); \
  jit_set_function((_ctx), "raylib.drawTriangle3D", (uintptr_t)cythDrawTriangle3D); \
  jit_set_function((_ctx), "raylib.drawTriangleStrip3D", (uintptr_t)cythDrawTriangleStrip3D); \
  jit_set_function((_ctx), "raylib.drawCube", (uintptr_t)cythDrawCube); \
  jit_set_function((_ctx), "raylib.drawCubeV", (uintptr_t)cythDrawCubeV); \
  jit_set_function((_ctx), "raylib.drawCubeWires", (uintptr_t)cythDrawCubeWires); \
  jit_set_function((_ctx), "raylib.drawCubeWiresV", (uintptr_t)cythDrawCubeWiresV); \
  jit_set_function((_ctx), "raylib.drawSphere", (uintptr_t)cythDrawSphere); \
  jit_set_function((_ctx), "raylib.drawSphereEx", (uintptr_t)cythDrawSphereEx); \
  jit_set_function((_ctx), "raylib.drawSphereWires", (uintptr_t)cythDrawSphereWires); \
  jit_set_function((_ctx), "raylib.drawCylinder", (uintptr_t)cythDrawCylinder); \
  jit_set_function((_ctx), "raylib.drawCylinderEx", (uintptr_t)cythDrawCylinderEx); \
  jit_set_function((_ctx), "raylib.drawCylinderWires", (uintptr_t)cythDrawCylinderWires); \
  jit_set_function((_ctx), "raylib.drawCylinderWiresEx", (uintptr_t)cythDrawCylinderWiresEx); \
  jit_set_function((_ctx), "raylib.drawCapsule", (uintptr_t)cythDrawCapsule); \
  jit_set_function((_ctx), "raylib.drawCapsuleWires", (uintptr_t)cythDrawCapsuleWires); \
  jit_set_function((_ctx), "raylib.drawPlane", (uintptr_t)cythDrawPlane); \
  jit_set_function((_ctx), "raylib.drawRay", (uintptr_t)cythDrawRay); \
  jit_set_function((_ctx), "raylib.drawGrid", (uintptr_t)cythDrawGrid); \
  jit_set_function((_ctx), "raylib.loadModel", (uintptr_t)cythLoadModel); \
  jit_set_function((_ctx), "raylib.loadModelFromMesh", (uintptr_t)cythLoadModelFromMesh); \
  jit_set_function((_ctx), "raylib.isModelValid", (uintptr_t)cythIsModelValid); \
  jit_set_function((_ctx), "raylib.unloadModel", (uintptr_t)cythUnloadModel); \
  jit_set_function((_ctx), "raylib.getModelBoundingBox", (uintptr_t)cythGetModelBoundingBox); \
  jit_set_function((_ctx), "raylib.drawModel", (uintptr_t)cythDrawModel); \
  jit_set_function((_ctx), "raylib.drawModelEx", (uintptr_t)cythDrawModelEx); \
  jit_set_function((_ctx), "raylib.drawModelWires", (uintptr_t)cythDrawModelWires); \
  jit_set_function((_ctx), "raylib.drawModelWiresEx", (uintptr_t)cythDrawModelWiresEx); \
  jit_set_function((_ctx), "raylib.drawModelPoints", (uintptr_t)cythDrawModelPoints); \
  jit_set_function((_ctx), "raylib.drawModelPointsEx", (uintptr_t)cythDrawModelPointsEx); \
  jit_set_function((_ctx), "raylib.drawBoundingBox", (uintptr_t)cythDrawBoundingBox); \
  jit_set_function((_ctx), "raylib.drawBillboard", (uintptr_t)cythDrawBillboard); \
  jit_set_function((_ctx), "raylib.drawBillboardRec", (uintptr_t)cythDrawBillboardRec); \
  jit_set_function((_ctx), "raylib.drawBillboardPro", (uintptr_t)cythDrawBillboardPro); \
  jit_set_function((_ctx), "raylib.uploadMesh", (uintptr_t)cythUploadMesh); \
  jit_set_function((_ctx), "raylib.updateMeshBuffer", (uintptr_t)cythUpdateMeshBuffer); \
  jit_set_function((_ctx), "raylib.unloadMesh", (uintptr_t)cythUnloadMesh); \
  jit_set_function((_ctx), "raylib.drawMesh", (uintptr_t)cythDrawMesh); \
  jit_set_function((_ctx), "raylib.drawMeshInstanced", (uintptr_t)cythDrawMeshInstanced); \
  jit_set_function((_ctx), "raylib.getMeshBoundingBox", (uintptr_t)cythGetMeshBoundingBox); \
  jit_set_function((_ctx), "raylib.genMeshTangents", (uintptr_t)cythGenMeshTangents); \
  jit_set_function((_ctx), "raylib.exportMesh", (uintptr_t)cythExportMesh); \
  jit_set_function((_ctx), "raylib.exportMeshAsCode", (uintptr_t)cythExportMeshAsCode); \
  jit_set_function((_ctx), "raylib.genMeshPoly", (uintptr_t)cythGenMeshPoly); \
  jit_set_function((_ctx), "raylib.genMeshPlane", (uintptr_t)cythGenMeshPlane); \
  jit_set_function((_ctx), "raylib.genMeshCube", (uintptr_t)cythGenMeshCube); \
  jit_set_function((_ctx), "raylib.genMeshSphere", (uintptr_t)cythGenMeshSphere); \
  jit_set_function((_ctx), "raylib.genMeshHemiSphere", (uintptr_t)cythGenMeshHemiSphere); \
  jit_set_function((_ctx), "raylib.genMeshCylinder", (uintptr_t)cythGenMeshCylinder); \
  jit_set_function((_ctx), "raylib.genMeshCone", (uintptr_t)cythGenMeshCone); \
  jit_set_function((_ctx), "raylib.genMeshTorus", (uintptr_t)cythGenMeshTorus); \
  jit_set_function((_ctx), "raylib.genMeshKnot", (uintptr_t)cythGenMeshKnot); \
  jit_set_function((_ctx), "raylib.genMeshHeightmap", (uintptr_t)cythGenMeshHeightmap); \
  jit_set_function((_ctx), "raylib.genMeshCubicmap", (uintptr_t)cythGenMeshCubicmap); \
  jit_set_function((_ctx), "raylib.loadMaterials", (uintptr_t)cythLoadMaterials); \
  jit_set_function((_ctx), "raylib.loadMaterialDefault", (uintptr_t)cythLoadMaterialDefault); \
  jit_set_function((_ctx), "raylib.isMaterialValid", (uintptr_t)cythIsMaterialValid); \
  jit_set_function((_ctx), "raylib.unloadMaterial", (uintptr_t)cythUnloadMaterial); \
  jit_set_function((_ctx), "raylib.setMaterialTexture", (uintptr_t)cythSetMaterialTexture); \
  jit_set_function((_ctx), "raylib.setModelMeshMaterial", (uintptr_t)cythSetModelMeshMaterial); \
  jit_set_function((_ctx), "raylib.loadModelAnimations", (uintptr_t)cythLoadModelAnimations); \
  jit_set_function((_ctx), "raylib.updateModelAnimation", (uintptr_t)cythUpdateModelAnimation); \
  jit_set_function((_ctx), "raylib.updateModelAnimationBones", (uintptr_t)cythUpdateModelAnimationBones); \
  jit_set_function((_ctx), "raylib.unloadModelAnimation", (uintptr_t)cythUnloadModelAnimation); \
  jit_set_function((_ctx), "raylib.unloadModelAnimations", (uintptr_t)cythUnloadModelAnimations); \
  jit_set_function((_ctx), "raylib.isModelAnimationValid", (uintptr_t)cythIsModelAnimationValid); \
  jit_set_function((_ctx), "raylib.checkCollisionSpheres", (uintptr_t)cythCheckCollisionSpheres); \
  jit_set_function((_ctx), "raylib.checkCollisionBoxes", (uintptr_t)cythCheckCollisionBoxes); \
  jit_set_function((_ctx), "raylib.checkCollisionBoxSphere", (uintptr_t)cythCheckCollisionBoxSphere); \
  jit_set_function((_ctx), "raylib.getRayCollisionSphere", (uintptr_t)cythGetRayCollisionSphere); \
  jit_set_function((_ctx), "raylib.getRayCollisionBox", (uintptr_t)cythGetRayCollisionBox); \
  jit_set_function((_ctx), "raylib.getRayCollisionMesh", (uintptr_t)cythGetRayCollisionMesh); \
  jit_set_function((_ctx), "raylib.getRayCollisionTriangle", (uintptr_t)cythGetRayCollisionTriangle); \
  jit_set_function((_ctx), "raylib.getRayCollisionQuad", (uintptr_t)cythGetRayCollisionQuad); \
  jit_set_function((_ctx), "raylib.initAudioDevice", (uintptr_t)cythInitAudioDevice); \
  jit_set_function((_ctx), "raylib.closeAudioDevice", (uintptr_t)cythCloseAudioDevice); \
  jit_set_function((_ctx), "raylib.isAudioDeviceReady", (uintptr_t)cythIsAudioDeviceReady); \
  jit_set_function((_ctx), "raylib.setMasterVolume", (uintptr_t)cythSetMasterVolume); \
  jit_set_function((_ctx), "raylib.getMasterVolume", (uintptr_t)cythGetMasterVolume); \
  jit_set_function((_ctx), "raylib.loadWave", (uintptr_t)cythLoadWave); \
  jit_set_function((_ctx), "raylib.loadWaveFromMemory", (uintptr_t)cythLoadWaveFromMemory); \
  jit_set_function((_ctx), "raylib.isWaveValid", (uintptr_t)cythIsWaveValid); \
  jit_set_function((_ctx), "raylib.loadSound", (uintptr_t)cythLoadSound); \
  jit_set_function((_ctx), "raylib.loadSoundFromWave", (uintptr_t)cythLoadSoundFromWave); \
  jit_set_function((_ctx), "raylib.loadSoundAlias", (uintptr_t)cythLoadSoundAlias); \
  jit_set_function((_ctx), "raylib.isSoundValid", (uintptr_t)cythIsSoundValid); \
  jit_set_function((_ctx), "raylib.updateSound", (uintptr_t)cythUpdateSound); \
  jit_set_function((_ctx), "raylib.unloadWave", (uintptr_t)cythUnloadWave); \
  jit_set_function((_ctx), "raylib.unloadSound", (uintptr_t)cythUnloadSound); \
  jit_set_function((_ctx), "raylib.unloadSoundAlias", (uintptr_t)cythUnloadSoundAlias); \
  jit_set_function((_ctx), "raylib.exportWave", (uintptr_t)cythExportWave); \
  jit_set_function((_ctx), "raylib.exportWaveAsCode", (uintptr_t)cythExportWaveAsCode); \
  jit_set_function((_ctx), "raylib.playSound", (uintptr_t)cythPlaySound); \
  jit_set_function((_ctx), "raylib.stopSound", (uintptr_t)cythStopSound); \
  jit_set_function((_ctx), "raylib.pauseSound", (uintptr_t)cythPauseSound); \
  jit_set_function((_ctx), "raylib.resumeSound", (uintptr_t)cythResumeSound); \
  jit_set_function((_ctx), "raylib.isSoundPlaying", (uintptr_t)cythIsSoundPlaying); \
  jit_set_function((_ctx), "raylib.setSoundVolume", (uintptr_t)cythSetSoundVolume); \
  jit_set_function((_ctx), "raylib.setSoundPitch", (uintptr_t)cythSetSoundPitch); \
  jit_set_function((_ctx), "raylib.setSoundPan", (uintptr_t)cythSetSoundPan); \
  jit_set_function((_ctx), "raylib.waveCopy", (uintptr_t)cythWaveCopy); \
  jit_set_function((_ctx), "raylib.waveCrop", (uintptr_t)cythWaveCrop); \
  jit_set_function((_ctx), "raylib.waveFormat", (uintptr_t)cythWaveFormat); \
  jit_set_function((_ctx), "raylib.loadWaveSamples", (uintptr_t)cythLoadWaveSamples); \
  jit_set_function((_ctx), "raylib.unloadWaveSamples", (uintptr_t)cythUnloadWaveSamples); \
  jit_set_function((_ctx), "raylib.loadMusicStream", (uintptr_t)cythLoadMusicStream); \
  jit_set_function((_ctx), "raylib.loadMusicStreamFromMemory", (uintptr_t)cythLoadMusicStreamFromMemory); \
  jit_set_function((_ctx), "raylib.isMusicValid", (uintptr_t)cythIsMusicValid); \
  jit_set_function((_ctx), "raylib.unloadMusicStream", (uintptr_t)cythUnloadMusicStream); \
  jit_set_function((_ctx), "raylib.playMusicStream", (uintptr_t)cythPlayMusicStream); \
  jit_set_function((_ctx), "raylib.isMusicStreamPlaying", (uintptr_t)cythIsMusicStreamPlaying); \
  jit_set_function((_ctx), "raylib.updateMusicStream", (uintptr_t)cythUpdateMusicStream); \
  jit_set_function((_ctx), "raylib.stopMusicStream", (uintptr_t)cythStopMusicStream); \
  jit_set_function((_ctx), "raylib.pauseMusicStream", (uintptr_t)cythPauseMusicStream); \
  jit_set_function((_ctx), "raylib.resumeMusicStream", (uintptr_t)cythResumeMusicStream); \
  jit_set_function((_ctx), "raylib.seekMusicStream", (uintptr_t)cythSeekMusicStream); \
  jit_set_function((_ctx), "raylib.setMusicVolume", (uintptr_t)cythSetMusicVolume); \
  jit_set_function((_ctx), "raylib.setMusicPitch", (uintptr_t)cythSetMusicPitch); \
  jit_set_function((_ctx), "raylib.setMusicPan", (uintptr_t)cythSetMusicPan); \
  jit_set_function((_ctx), "raylib.getMusicTimeLength", (uintptr_t)cythGetMusicTimeLength); \
  jit_set_function((_ctx), "raylib.getMusicTimePlayed", (uintptr_t)cythGetMusicTimePlayed); \
  jit_set_function((_ctx), "raylib.loadAudioStream", (uintptr_t)cythLoadAudioStream); \
  jit_set_function((_ctx), "raylib.isAudioStreamValid", (uintptr_t)cythIsAudioStreamValid); \
  jit_set_function((_ctx), "raylib.unloadAudioStream", (uintptr_t)cythUnloadAudioStream); \
  jit_set_function((_ctx), "raylib.updateAudioStream", (uintptr_t)cythUpdateAudioStream); \
  jit_set_function((_ctx), "raylib.isAudioStreamProcessed", (uintptr_t)cythIsAudioStreamProcessed); \
  jit_set_function((_ctx), "raylib.playAudioStream", (uintptr_t)cythPlayAudioStream); \
  jit_set_function((_ctx), "raylib.pauseAudioStream", (uintptr_t)cythPauseAudioStream); \
  jit_set_function((_ctx), "raylib.resumeAudioStream", (uintptr_t)cythResumeAudioStream); \
  jit_set_function((_ctx), "raylib.isAudioStreamPlaying", (uintptr_t)cythIsAudioStreamPlaying); \
  jit_set_function((_ctx), "raylib.stopAudioStream", (uintptr_t)cythStopAudioStream); \
  jit_set_function((_ctx), "raylib.setAudioStreamVolume", (uintptr_t)cythSetAudioStreamVolume); \
  jit_set_function((_ctx), "raylib.setAudioStreamPitch", (uintptr_t)cythSetAudioStreamPitch); \
  jit_set_function((_ctx), "raylib.setAudioStreamPan", (uintptr_t)cythSetAudioStreamPan); \
  jit_set_function((_ctx), "raylib.setAudioStreamBufferSizeDefault", (uintptr_t)cythSetAudioStreamBufferSizeDefault); \
  jit_set_function((_ctx), "raylib.setAudioStreamCallback", (uintptr_t)cythSetAudioStreamCallback); \
  jit_set_function((_ctx), "raylib.attachAudioStreamProcessor", (uintptr_t)cythAttachAudioStreamProcessor); \
  jit_set_function((_ctx), "raylib.detachAudioStreamProcessor", (uintptr_t)cythDetachAudioStreamProcessor); \
  jit_set_function((_ctx), "raylib.attachAudioMixedProcessor", (uintptr_t)cythAttachAudioMixedProcessor); \
  jit_set_function((_ctx), "raylib.detachAudioMixedProcessor", (uintptr_t)cythDetachAudioMixedProcessor); \
} while (0)
static const char* PREFIX = "import \"raylib\"\n"
"  void initWindow(int width, int height, string title)\n"
"  void closeWindow()\n"
"  bool windowShouldClose()\n"
"  bool isWindowReady()\n"
"  bool isWindowFullscreen()\n"
"  bool isWindowHidden()\n"
"  bool isWindowMinimized()\n"
"  bool isWindowMaximized()\n"
"  bool isWindowFocused()\n"
"  bool isWindowResized()\n"
"  bool isWindowState(int flag)\n"
"  void setWindowState(int flags)\n"
"  void clearWindowState(int flags)\n"
"  void toggleFullscreen()\n"
"  void toggleBorderlessWindowed()\n"
"  void maximizeWindow()\n"
"  void minimizeWindow()\n"
"  void restoreWindow()\n"
"  void setWindowIcon(Image image)\n"
"  void setWindowIcons(Image images, int count)\n"
"  void setWindowTitle(string title)\n"
"  void setWindowPosition(int x, int y)\n"
"  void setWindowMonitor(int monitor)\n"
"  void setWindowMinSize(int width, int height)\n"
"  void setWindowMaxSize(int width, int height)\n"
"  void setWindowSize(int width, int height)\n"
"  void setWindowOpacity(float opacity)\n"
"  void setWindowFocused()\n"
"  any getWindowHandle()\n"
"  int getScreenWidth()\n"
"  int getScreenHeight()\n"
"  int getRenderWidth()\n"
"  int getRenderHeight()\n"
"  int getMonitorCount()\n"
"  int getCurrentMonitor()\n"
"  Vector2 getMonitorPosition(int monitor)\n"
"  int getMonitorWidth(int monitor)\n"
"  int getMonitorHeight(int monitor)\n"
"  int getMonitorPhysicalWidth(int monitor)\n"
"  int getMonitorPhysicalHeight(int monitor)\n"
"  int getMonitorRefreshRate(int monitor)\n"
"  Vector2 getWindowPosition()\n"
"  Vector2 getWindowScaleDPI()\n"
"  string getMonitorName(int monitor)\n"
"  void setClipboardText(string text)\n"
"  string getClipboardText()\n"
"  Image getClipboardImage()\n"
"  void enableEventWaiting()\n"
"  void disableEventWaiting()\n"
"  void showCursor()\n"
"  void hideCursor()\n"
"  bool isCursorHidden()\n"
"  void enableCursor()\n"
"  void disableCursor()\n"
"  bool isCursorOnScreen()\n"
"  void clearBackground(Color color)\n"
"  void beginDrawing()\n"
"  void endDrawing()\n"
"  void beginMode2D(Camera2D camera)\n"
"  void endMode2D()\n"
"  void beginMode3D(Camera3D camera)\n"
"  void endMode3D()\n"
"  void beginTextureMode(RenderTexture2D target)\n"
"  void endTextureMode()\n"
"  void beginShaderMode(Shader shader)\n"
"  void endShaderMode()\n"
"  void beginBlendMode(int mode)\n"
"  void endBlendMode()\n"
"  void beginScissorMode(int x, int y, int width, int height)\n"
"  void endScissorMode()\n"
"  void beginVrStereoMode(VrStereoConfig config)\n"
"  void endVrStereoMode()\n"
"  VrStereoConfig loadVrStereoConfig(VrDeviceInfo device)\n"
"  void unloadVrStereoConfig(VrStereoConfig config)\n"
"  Shader loadShader(string vsFileName, string fsFileName)\n"
"  Shader loadShaderFromMemory(string vsCode, string fsCode)\n"
"  bool isShaderValid(Shader shader)\n"
"  int getShaderLocation(Shader shader, string uniformName)\n"
"  int getShaderLocationAttrib(Shader shader, string attribName)\n"
"  void setShaderValue(Shader shader, int locIndex, any value, int uniformType)\n"
"  void setShaderValueV(Shader shader, int locIndex, any value, int uniformType, int count)\n"
"  void setShaderValueMatrix(Shader shader, int locIndex, Matrix mat)\n"
"  void setShaderValueTexture(Shader shader, int locIndex, Texture2D texture)\n"
"  void unloadShader(Shader shader)\n"
"  Ray getScreenToWorldRay(Vector2 position, Camera camera)\n"
"  Ray getScreenToWorldRayEx(Vector2 position, Camera camera, int width, int height)\n"
"  Vector2 getWorldToScreen(Vector3 position, Camera camera)\n"
"  Vector2 getWorldToScreenEx(Vector3 position, Camera camera, int width, int height)\n"
"  Vector2 getWorldToScreen2D(Vector2 position, Camera2D camera)\n"
"  Vector2 getScreenToWorld2D(Vector2 position, Camera2D camera)\n"
"  Matrix getCameraMatrix(Camera camera)\n"
"  Matrix getCameraMatrix2D(Camera2D camera)\n"
"  void setTargetFPS(int fps)\n"
"  float getFrameTime()\n"
"  float getTime()\n"
"  int getFPS()\n"
"  void swapScreenBuffer()\n"
"  void pollInputEvents()\n"
"  void waitTime(float seconds)\n"
"  void setRandomSeed(int seed)\n"
"  int getRandomValue(int min, int max)\n"
"  any loadRandomSequence(int count, int min, int max)\n"
"  void unloadRandomSequence(any sequence)\n"
"  void takeScreenshot(string fileName)\n"
"  void setConfigFlags(int flags)\n"
"  void openURL(string url)\n"
"  void setTraceLogLevel(int logLevel)\n"
"  any memAlloc(int size)\n"
"  any memRealloc(any ptr, int size)\n"
"  void memFree(any ptr)\n"
"  void setTraceLogCallback(TraceLogCallback callback)\n"
"  void setLoadFileDataCallback(LoadFileDataCallback callback)\n"
"  void setSaveFileDataCallback(SaveFileDataCallback callback)\n"
"  void setLoadFileTextCallback(LoadFileTextCallback callback)\n"
"  void setSaveFileTextCallback(SaveFileTextCallback callback)\n"
"  any loadFileData(string fileName, any dataSize)\n"
"  void unloadFileData(any data)\n"
"  bool saveFileData(string fileName, any data, int dataSize)\n"
"  bool exportDataAsCode(any data, int dataSize, string fileName)\n"
"  char[] loadFileText(string fileName)\n"
"  void unloadFileText(char[] text)\n"
"  bool saveFileText(string fileName, char[] text)\n"
"  bool fileExists(string fileName)\n"
"  bool directoryExists(string dirPath)\n"
"  bool isFileExtension(string fileName, string ext)\n"
"  int getFileLength(string fileName)\n"
"  string getFileExtension(string fileName)\n"
"  string getFileName(string filePath)\n"
"  string getFileNameWithoutExt(string filePath)\n"
"  string getDirectoryPath(string filePath)\n"
"  string getPrevDirectoryPath(string dirPath)\n"
"  string getWorkingDirectory()\n"
"  string getApplicationDirectory()\n"
"  int makeDirectory(string dirPath)\n"
"  bool changeDirectory(string dir)\n"
"  bool isPathFile(string path)\n"
"  bool isFileNameValid(string fileName)\n"
"  FilePathList loadDirectoryFiles(string dirPath)\n"
"  FilePathList loadDirectoryFilesEx(string basePath, string filter, bool scanSubdirs)\n"
"  void unloadDirectoryFiles(FilePathList files)\n"
"  bool isFileDropped()\n"
"  FilePathList loadDroppedFiles()\n"
"  void unloadDroppedFiles(FilePathList files)\n"
"  int getFileModTime(string fileName)\n"
"  any compressData(any data, int dataSize, any compDataSize)\n"
"  any decompressData(any compData, int compDataSize, any dataSize)\n"
"  char[] encodeDataBase64(any data, int dataSize, any outputSize)\n"
"  any decodeDataBase64(any data, any outputSize)\n"
"  int computeCRC32(any data, int dataSize)\n"
"  any computeMD5(any data, int dataSize)\n"
"  any computeSHA1(any data, int dataSize)\n"
"  AutomationEventList loadAutomationEventList(string fileName)\n"
"  void unloadAutomationEventList(AutomationEventList list)\n"
"  bool exportAutomationEventList(AutomationEventList list, string fileName)\n"
"  void setAutomationEventList(any list)\n"
"  void setAutomationEventBaseFrame(int frame)\n"
"  void startAutomationEventRecording()\n"
"  void stopAutomationEventRecording()\n"
"  void playAutomationEvent(AutomationEvent event)\n"
"  bool isKeyPressed(int key)\n"
"  bool isKeyPressedRepeat(int key)\n"
"  bool isKeyDown(int key)\n"
"  bool isKeyReleased(int key)\n"
"  bool isKeyUp(int key)\n"
"  int getKeyPressed()\n"
"  int getCharPressed()\n"
"  void setExitKey(int key)\n"
"  bool isGamepadAvailable(int gamepad)\n"
"  string getGamepadName(int gamepad)\n"
"  bool isGamepadButtonPressed(int gamepad, int button)\n"
"  bool isGamepadButtonDown(int gamepad, int button)\n"
"  bool isGamepadButtonReleased(int gamepad, int button)\n"
"  bool isGamepadButtonUp(int gamepad, int button)\n"
"  int getGamepadButtonPressed()\n"
"  int getGamepadAxisCount(int gamepad)\n"
"  float getGamepadAxisMovement(int gamepad, int axis)\n"
"  int setGamepadMappings(string mappings)\n"
"  void setGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration)\n"
"  bool isMouseButtonPressed(int button)\n"
"  bool isMouseButtonDown(int button)\n"
"  bool isMouseButtonReleased(int button)\n"
"  bool isMouseButtonUp(int button)\n"
"  int getMouseX()\n"
"  int getMouseY()\n"
"  Vector2 getMousePosition()\n"
"  Vector2 getMouseDelta()\n"
"  void setMousePosition(int x, int y)\n"
"  void setMouseOffset(int offsetX, int offsetY)\n"
"  void setMouseScale(float scaleX, float scaleY)\n"
"  float getMouseWheelMove()\n"
"  Vector2 getMouseWheelMoveV()\n"
"  void setMouseCursor(int cursor)\n"
"  int getTouchX()\n"
"  int getTouchY()\n"
"  Vector2 getTouchPosition(int index)\n"
"  int getTouchPointId(int index)\n"
"  int getTouchPointCount()\n"
"  void setGesturesEnabled(int flags)\n"
"  bool isGestureDetected(int gesture)\n"
"  int getGestureDetected()\n"
"  float getGestureHoldDuration()\n"
"  Vector2 getGestureDragVector()\n"
"  float getGestureDragAngle()\n"
"  Vector2 getGesturePinchVector()\n"
"  float getGesturePinchAngle()\n"
"  void updateCamera(any camera, int mode)\n"
"  void updateCameraPro(any camera, Vector3 movement, Vector3 rotation, float zoom)\n"
"  void setShapesTexture(Texture2D texture, Rectangle source)\n"
"  Texture2D getShapesTexture()\n"
"  Rectangle getShapesTextureRectangle()\n"
"  void drawPixel(int posX, int posY, Color color)\n"
"  void drawPixelV(Vector2 position, Color color)\n"
"  void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)\n"
"  void drawLineV(Vector2 startPos, Vector2 endPos, Color color)\n"
"  void drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)\n"
"  void drawLineStrip(any points, int pointCount, Color color)\n"
"  void drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)\n"
"  void drawCircle(int centerX, int centerY, float radius, Color color)\n"
"  void drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)\n"
"  void drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)\n"
"  void drawCircleGradient(int centerX, int centerY, float radius, Color inner, Color outer)\n"
"  void drawCircleV(Vector2 center, float radius, Color color)\n"
"  void drawCircleLines(int centerX, int centerY, float radius, Color color)\n"
"  void drawCircleLinesV(Vector2 center, float radius, Color color)\n"
"  void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)\n"
"  void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)\n"
"  void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)\n"
"  void drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)\n"
"  void drawRectangle(int posX, int posY, int width, int height, Color color)\n"
"  void drawRectangleV(Vector2 position, Vector2 size, Color color)\n"
"  void drawRectangleRec(Rectangle rec, Color color)\n"
"  void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)\n"
"  void drawRectangleGradientV(int posX, int posY, int width, int height, Color top, Color bottom)\n"
"  void drawRectangleGradientH(int posX, int posY, int width, int height, Color left, Color right)\n"
"  void drawRectangleGradientEx(Rectangle rec, Color topLeft, Color bottomLeft, Color topRight, Color bottomRight)\n"
"  void drawRectangleLines(int posX, int posY, int width, int height, Color color)\n"
"  void drawRectangleLinesEx(Rectangle rec, float lineThick, Color color)\n"
"  void drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)\n"
"  void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, Color color)\n"
"  void drawRectangleRoundedLinesEx(Rectangle rec, float roundness, int segments, float lineThick, Color color)\n"
"  void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)\n"
"  void drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)\n"
"  void drawTriangleFan(any points, int pointCount, Color color)\n"
"  void drawTriangleStrip(any points, int pointCount, Color color)\n"
"  void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color)\n"
"  void drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)\n"
"  void drawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color)\n"
"  void drawSplineLinear(any points, int pointCount, float thick, Color color)\n"
"  void drawSplineBasis(any points, int pointCount, float thick, Color color)\n"
"  void drawSplineCatmullRom(any points, int pointCount, float thick, Color color)\n"
"  void drawSplineBezierQuadratic(any points, int pointCount, float thick, Color color)\n"
"  void drawSplineBezierCubic(any points, int pointCount, float thick, Color color)\n"
"  void drawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color)\n"
"  void drawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)\n"
"  void drawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color)\n"
"  void drawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color)\n"
"  void drawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color)\n"
"  Vector2 getSplinePointLinear(Vector2 startPos, Vector2 endPos, float t)\n"
"  Vector2 getSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)\n"
"  Vector2 getSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t)\n"
"  Vector2 getSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t)\n"
"  Vector2 getSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t)\n"
"  bool checkCollisionRecs(Rectangle rec1, Rectangle rec2)\n"
"  bool checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)\n"
"  bool checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec)\n"
"  bool checkCollisionCircleLine(Vector2 center, float radius, Vector2 p1, Vector2 p2)\n"
"  bool checkCollisionPointRec(Vector2 point, Rectangle rec)\n"
"  bool checkCollisionPointCircle(Vector2 point, Vector2 center, float radius)\n"
"  bool checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)\n"
"  bool checkCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold)\n"
"  bool checkCollisionPointPoly(Vector2 point, any points, int pointCount)\n"
"  bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, any collisionPoint)\n"
"  Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2)\n"
"  Image loadImage(string fileName)\n"
"  Image loadImageRaw(string fileName, int width, int height, int format, int headerSize)\n"
"  Image loadImageAnim(string fileName, any frames)\n"
"  Image loadImageAnimFromMemory(string fileType, any fileData, int dataSize, any frames)\n"
"  Image loadImageFromMemory(string fileType, any fileData, int dataSize)\n"
"  Image loadImageFromTexture(Texture2D texture)\n"
"  Image loadImageFromScreen()\n"
"  bool isImageValid(Image image)\n"
"  void unloadImage(Image image)\n"
"  bool exportImage(Image image, string fileName)\n"
"  any exportImageToMemory(Image image, string fileType, any fileSize)\n"
"  bool exportImageAsCode(Image image, string fileName)\n"
"  Image genImageColor(int width, int height, Color color)\n"
"  Image genImageGradientLinear(int width, int height, int direction, Color start, Color end)\n"
"  Image genImageGradientRadial(int width, int height, float density, Color inner, Color outer)\n"
"  Image genImageGradientSquare(int width, int height, float density, Color inner, Color outer)\n"
"  Image genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)\n"
"  Image genImageWhiteNoise(int width, int height, float factor)\n"
"  Image genImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)\n"
"  Image genImageCellular(int width, int height, int tileSize)\n"
"  Image genImageText(int width, int height, string text)\n"
"  Image imageCopy(Image image)\n"
"  Image imageFromImage(Image image, Rectangle rec)\n"
"  Image imageFromChannel(Image image, int selectedChannel)\n"
"  Image imageText(string text, int fontSize, Color color)\n"
"  Image imageTextEx(Font font, string text, float fontSize, float spacing, Color tint)\n"
"  void imageFormat(Image image, int newFormat)\n"
"  void imageToPOT(Image image, Color fill)\n"
"  void imageCrop(Image image, Rectangle crop)\n"
"  void imageAlphaCrop(Image image, float threshold)\n"
"  void imageAlphaClear(Image image, Color color, float threshold)\n"
"  void imageAlphaMask(Image image, Image alphaMask)\n"
"  void imageAlphaPremultiply(Image image)\n"
"  void imageBlurGaussian(Image image, int blurSize)\n"
"  void imageKernelConvolution(Image image, any kernel, int kernelSize)\n"
"  void imageResize(Image image, int newWidth, int newHeight)\n"
"  void imageResizeNN(Image image, int newWidth, int newHeight)\n"
"  void imageResizeCanvas(Image image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)\n"
"  void imageMipmaps(Image image)\n"
"  void imageDither(Image image, int rBpp, int gBpp, int bBpp, int aBpp)\n"
"  void imageFlipVertical(Image image)\n"
"  void imageFlipHorizontal(Image image)\n"
"  void imageRotate(Image image, int degrees)\n"
"  void imageRotateCW(Image image)\n"
"  void imageRotateCCW(Image image)\n"
"  void imageColorTint(Image image, Color color)\n"
"  void imageColorInvert(Image image)\n"
"  void imageColorGrayscale(Image image)\n"
"  void imageColorContrast(Image image, float contrast)\n"
"  void imageColorBrightness(Image image, int brightness)\n"
"  void imageColorReplace(Image image, Color color, Color replace)\n"
"  Color loadImageColors(Image image)\n"
"  Color loadImagePalette(Image image, int maxPaletteSize, any colorCount)\n"
"  void unloadImageColors(Color colors)\n"
"  void unloadImagePalette(Color colors)\n"
"  Rectangle getImageAlphaBorder(Image image, float threshold)\n"
"  Color getImageColor(Image image, int x, int y)\n"
"  void imageClearBackground(Image dst, Color color)\n"
"  void imageDrawPixel(Image dst, int posX, int posY, Color color)\n"
"  void imageDrawPixelV(Image dst, Vector2 position, Color color)\n"
"  void imageDrawLine(Image dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)\n"
"  void imageDrawLineV(Image dst, Vector2 start, Vector2 end, Color color)\n"
"  void imageDrawLineEx(Image dst, Vector2 start, Vector2 end, int thick, Color color)\n"
"  void imageDrawCircle(Image dst, int centerX, int centerY, int radius, Color color)\n"
"  void imageDrawCircleV(Image dst, Vector2 center, int radius, Color color)\n"
"  void imageDrawCircleLines(Image dst, int centerX, int centerY, int radius, Color color)\n"
"  void imageDrawCircleLinesV(Image dst, Vector2 center, int radius, Color color)\n"
"  void imageDrawRectangle(Image dst, int posX, int posY, int width, int height, Color color)\n"
"  void imageDrawRectangleV(Image dst, Vector2 position, Vector2 size, Color color)\n"
"  void imageDrawRectangleRec(Image dst, Rectangle rec, Color color)\n"
"  void imageDrawRectangleLines(Image dst, Rectangle rec, int thick, Color color)\n"
"  void imageDrawTriangle(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color)\n"
"  void imageDrawTriangleEx(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color c1, Color c2, Color c3)\n"
"  void imageDrawTriangleLines(Image dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color)\n"
"  void imageDrawTriangleFan(Image dst, any points, int pointCount, Color color)\n"
"  void imageDrawTriangleStrip(Image dst, any points, int pointCount, Color color)\n"
"  void imageDraw(Image dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)\n"
"  void imageDrawText(Image dst, string text, int posX, int posY, int fontSize, Color color)\n"
"  void imageDrawTextEx(Image dst, Font font, string text, Vector2 position, float fontSize, float spacing, Color tint)\n"
"  Texture2D loadTexture(string fileName)\n"
"  Texture2D loadTextureFromImage(Image image)\n"
"  TextureCubemap loadTextureCubemap(Image image, int layout)\n"
"  RenderTexture2D loadRenderTexture(int width, int height)\n"
"  bool isTextureValid(Texture2D texture)\n"
"  void unloadTexture(Texture2D texture)\n"
"  bool isRenderTextureValid(RenderTexture2D target)\n"
"  void unloadRenderTexture(RenderTexture2D target)\n"
"  void updateTexture(Texture2D texture, any pixels)\n"
"  void updateTextureRec(Texture2D texture, Rectangle rec, any pixels)\n"
"  void genTextureMipmaps(any texture)\n"
"  void setTextureFilter(Texture2D texture, int filter)\n"
"  void setTextureWrap(Texture2D texture, int wrap)\n"
"  void drawTexture(Texture2D texture, int posX, int posY, Color tint)\n"
"  void drawTextureV(Texture2D texture, Vector2 position, Color tint)\n"
"  void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)\n"
"  void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)\n"
"  void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)\n"
"  void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)\n"
"  bool colorIsEqual(Color col1, Color col2)\n"
"  Color fade(Color color, float alpha)\n"
"  int colorToInt(Color color)\n"
"  Vector4 colorNormalize(Color color)\n"
"  Color colorFromNormalized(Vector4 normalized)\n"
"  Vector3 colorToHSV(Color color)\n"
"  Color colorFromHSV(float hue, float saturation, float value)\n"
"  Color colorTint(Color color, Color tint)\n"
"  Color colorBrightness(Color color, float factor)\n"
"  Color colorContrast(Color color, float contrast)\n"
"  Color colorAlpha(Color color, float alpha)\n"
"  Color colorAlphaBlend(Color dst, Color src, Color tint)\n"
"  Color colorLerp(Color color1, Color color2, float factor)\n"
"  Color getColor(int hexValue)\n"
"  Color getPixelColor(any srcPtr, int format)\n"
"  void setPixelColor(any dstPtr, Color color, int format)\n"
"  int getPixelDataSize(int width, int height, int format)\n"
"  Font getFontDefault()\n"
"  Font loadFont(string fileName)\n"
"  Font loadFontEx(string fileName, int fontSize, any codepoints, int codepointCount)\n"
"  Font loadFontFromImage(Image image, Color key, int firstChar)\n"
"  Font loadFontFromMemory(string fileType, any fileData, int dataSize, int fontSize, any codepoints, int codepointCount)\n"
"  bool isFontValid(Font font)\n"
"  any loadFontData(any fileData, int dataSize, int fontSize, any codepoints, int codepointCount, int type)\n"
"  Image genImageFontAtlas(any glyphs, any glyphRecs, int glyphCount, int fontSize, int padding, int packMethod)\n"
"  void unloadFontData(any glyphs, int glyphCount)\n"
"  void unloadFont(Font font)\n"
"  bool exportFontAsCode(Font font, string fileName)\n"
"  void drawFPS(int posX, int posY)\n"
"  void drawText(string text, int posX, int posY, int fontSize, Color color)\n"
"  void drawTextEx(Font font, string text, Vector2 position, float fontSize, float spacing, Color tint)\n"
"  void drawTextPro(Font font, string text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint)\n"
"  void drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)\n"
"  void drawTextCodepoints(Font font, any codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint)\n"
"  void setTextLineSpacing(int spacing)\n"
"  int measureText(string text, int fontSize)\n"
"  Vector2 measureTextEx(Font font, string text, float fontSize, float spacing)\n"
"  int getGlyphIndex(Font font, int codepoint)\n"
"  GlyphInfo getGlyphInfo(Font font, int codepoint)\n"
"  Rectangle getGlyphAtlasRec(Font font, int codepoint)\n"
"  char[] loadUTF8(any codepoints, int length)\n"
"  void unloadUTF8(char[] text)\n"
"  any loadCodepoints(string text, any count)\n"
"  void unloadCodepoints(any codepoints)\n"
"  int getCodepointCount(string text)\n"
"  int getCodepoint(string text, any codepointSize)\n"
"  int getCodepointNext(string text, any codepointSize)\n"
"  int getCodepointPrevious(string text, any codepointSize)\n"
"  string codepointToUTF8(int codepoint, any utf8Size)\n"
"  int textCopy(char[] dst, string src)\n"
"  bool textIsEqual(string text1, string text2)\n"
"  int textLength(string text)\n"
"  string textSubtext(string text, int position, int length)\n"
"  char[] textReplace(string text, string replace, string by)\n"
"  char[] textInsert(string text, string insert, int position)\n"
"  string textJoin(any textList, int count, string delimiter)\n"
"  any textSplit(string text, char delimiter, any count)\n"
"  void textAppend(char[] text, string append, any position)\n"
"  int textFindIndex(string text, string find)\n"
"  string textToUpper(string text)\n"
"  string textToLower(string text)\n"
"  string textToPascal(string text)\n"
"  string textToSnake(string text)\n"
"  string textToCamel(string text)\n"
"  int textToInteger(string text)\n"
"  float textToFloat(string text)\n"
"  void drawLine3D(Vector3 startPos, Vector3 endPos, Color color)\n"
"  void drawPoint3D(Vector3 position, Color color)\n"
"  void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)\n"
"  void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)\n"
"  void drawTriangleStrip3D(any points, int pointCount, Color color)\n"
"  void drawCube(Vector3 position, float width, float height, float length, Color color)\n"
"  void drawCubeV(Vector3 position, Vector3 size, Color color)\n"
"  void drawCubeWires(Vector3 position, float width, float height, float length, Color color)\n"
"  void drawCubeWiresV(Vector3 position, Vector3 size, Color color)\n"
"  void drawSphere(Vector3 centerPos, float radius, Color color)\n"
"  void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)\n"
"  void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)\n"
"  void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)\n"
"  void drawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)\n"
"  void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)\n"
"  void drawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color)\n"
"  void drawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)\n"
"  void drawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color)\n"
"  void drawPlane(Vector3 centerPos, Vector2 size, Color color)\n"
"  void drawRay(Ray ray, Color color)\n"
"  void drawGrid(int slices, float spacing)\n"
"  Model loadModel(string fileName)\n"
"  Model loadModelFromMesh(Mesh mesh)\n"
"  bool isModelValid(Model model)\n"
"  void unloadModel(Model model)\n"
"  BoundingBox getModelBoundingBox(Model model)\n"
"  void drawModel(Model model, Vector3 position, float scale, Color tint)\n"
"  void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)\n"
"  void drawModelWires(Model model, Vector3 position, float scale, Color tint)\n"
"  void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)\n"
"  void drawModelPoints(Model model, Vector3 position, float scale, Color tint)\n"
"  void drawModelPointsEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)\n"
"  void drawBoundingBox(BoundingBox box, Color color)\n"
"  void drawBillboard(Camera camera, Texture2D texture, Vector3 position, float scale, Color tint)\n"
"  void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint)\n"
"  void drawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint)\n"
"  void uploadMesh(any mesh, bool dynamic)\n"
"  void updateMeshBuffer(Mesh mesh, int index, any data, int dataSize, int offset)\n"
"  void unloadMesh(Mesh mesh)\n"
"  void drawMesh(Mesh mesh, Material material, Matrix transform)\n"
"  void drawMeshInstanced(Mesh mesh, Material material, any transforms, int instances)\n"
"  BoundingBox getMeshBoundingBox(Mesh mesh)\n"
"  void genMeshTangents(any mesh)\n"
"  bool exportMesh(Mesh mesh, string fileName)\n"
"  bool exportMeshAsCode(Mesh mesh, string fileName)\n"
"  Mesh genMeshPoly(int sides, float radius)\n"
"  Mesh genMeshPlane(float width, float length, int resX, int resZ)\n"
"  Mesh genMeshCube(float width, float height, float length)\n"
"  Mesh genMeshSphere(float radius, int rings, int slices)\n"
"  Mesh genMeshHemiSphere(float radius, int rings, int slices)\n"
"  Mesh genMeshCylinder(float radius, float height, int slices)\n"
"  Mesh genMeshCone(float radius, float height, int slices)\n"
"  Mesh genMeshTorus(float radius, float size, int radSeg, int sides)\n"
"  Mesh genMeshKnot(float radius, float size, int radSeg, int sides)\n"
"  Mesh genMeshHeightmap(Image heightmap, Vector3 size)\n"
"  Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize)\n"
"  any loadMaterials(string fileName, any materialCount)\n"
"  Material loadMaterialDefault()\n"
"  bool isMaterialValid(Material material)\n"
"  void unloadMaterial(Material material)\n"
"  void setMaterialTexture(any material, int mapType, Texture2D texture)\n"
"  void setModelMeshMaterial(any model, int meshId, int materialId)\n"
"  any loadModelAnimations(string fileName, any animCount)\n"
"  void updateModelAnimation(Model model, ModelAnimation anim, int frame)\n"
"  void updateModelAnimationBones(Model model, ModelAnimation anim, int frame)\n"
"  void unloadModelAnimation(ModelAnimation anim)\n"
"  void unloadModelAnimations(any animations, int animCount)\n"
"  bool isModelAnimationValid(Model model, ModelAnimation anim)\n"
"  bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)\n"
"  bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2)\n"
"  bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)\n"
"  RayCollision getRayCollisionSphere(Ray ray, Vector3 center, float radius)\n"
"  RayCollision getRayCollisionBox(Ray ray, BoundingBox box)\n"
"  RayCollision getRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform)\n"
"  RayCollision getRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)\n"
"  RayCollision getRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)\n"
"  void initAudioDevice()\n"
"  void closeAudioDevice()\n"
"  bool isAudioDeviceReady()\n"
"  void setMasterVolume(float volume)\n"
"  float getMasterVolume()\n"
"  Wave loadWave(string fileName)\n"
"  Wave loadWaveFromMemory(string fileType, any fileData, int dataSize)\n"
"  bool isWaveValid(Wave wave)\n"
"  Sound loadSound(string fileName)\n"
"  Sound loadSoundFromWave(Wave wave)\n"
"  Sound loadSoundAlias(Sound source)\n"
"  bool isSoundValid(Sound sound)\n"
"  void updateSound(Sound sound, any data, int sampleCount)\n"
"  void unloadWave(Wave wave)\n"
"  void unloadSound(Sound sound)\n"
"  void unloadSoundAlias(Sound alias)\n"
"  bool exportWave(Wave wave, string fileName)\n"
"  bool exportWaveAsCode(Wave wave, string fileName)\n"
"  void playSound(Sound sound)\n"
"  void stopSound(Sound sound)\n"
"  void pauseSound(Sound sound)\n"
"  void resumeSound(Sound sound)\n"
"  bool isSoundPlaying(Sound sound)\n"
"  void setSoundVolume(Sound sound, float volume)\n"
"  void setSoundPitch(Sound sound, float pitch)\n"
"  void setSoundPan(Sound sound, float pan)\n"
"  Wave waveCopy(Wave wave)\n"
"  void waveCrop(any wave, int initFrame, int finalFrame)\n"
"  void waveFormat(any wave, int sampleRate, int sampleSize, int channels)\n"
"  any loadWaveSamples(Wave wave)\n"
"  void unloadWaveSamples(any samples)\n"
"  Music loadMusicStream(string fileName)\n"
"  Music loadMusicStreamFromMemory(string fileType, any data, int dataSize)\n"
"  bool isMusicValid(Music music)\n"
"  void unloadMusicStream(Music music)\n"
"  void playMusicStream(Music music)\n"
"  bool isMusicStreamPlaying(Music music)\n"
"  void updateMusicStream(Music music)\n"
"  void stopMusicStream(Music music)\n"
"  void pauseMusicStream(Music music)\n"
"  void resumeMusicStream(Music music)\n"
"  void seekMusicStream(Music music, float position)\n"
"  void setMusicVolume(Music music, float volume)\n"
"  void setMusicPitch(Music music, float pitch)\n"
"  void setMusicPan(Music music, float pan)\n"
"  float getMusicTimeLength(Music music)\n"
"  float getMusicTimePlayed(Music music)\n"
"  AudioStream loadAudioStream(int sampleRate, int sampleSize, int channels)\n"
"  bool isAudioStreamValid(AudioStream stream)\n"
"  void unloadAudioStream(AudioStream stream)\n"
"  void updateAudioStream(AudioStream stream, any data, int frameCount)\n"
"  bool isAudioStreamProcessed(AudioStream stream)\n"
"  void playAudioStream(AudioStream stream)\n"
"  void pauseAudioStream(AudioStream stream)\n"
"  void resumeAudioStream(AudioStream stream)\n"
"  bool isAudioStreamPlaying(AudioStream stream)\n"
"  void stopAudioStream(AudioStream stream)\n"
"  void setAudioStreamVolume(AudioStream stream, float volume)\n"
"  void setAudioStreamPitch(AudioStream stream, float pitch)\n"
"  void setAudioStreamPan(AudioStream stream, float pan)\n"
"  void setAudioStreamBufferSizeDefault(int size)\n"
"  void setAudioStreamCallback(AudioStream stream, AudioCallback callback)\n"
"  void attachAudioStreamProcessor(AudioStream stream, AudioCallback processor)\n"
"  void detachAudioStreamProcessor(AudioStream stream, AudioCallback processor)\n"
"  void attachAudioMixedProcessor(AudioCallback processor)\n"
"  void detachAudioMixedProcessor(AudioCallback processor)\n"
"import \"env\"\n"
"  float cos(float x)\n"
"  float sin(float x)\n"
"  float tan(float x)\n"
"  float pow(float a, float b)\n"
"  void print(string n)\n"
"  void println(string n)\n"
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
"  AudioStream stream\n"
"  int frameCount\n"
"class Music\n"
"  AudioStream stream\n"
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
