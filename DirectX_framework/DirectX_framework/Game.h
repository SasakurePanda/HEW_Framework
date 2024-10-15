/*#pragma once
#include "direct3d.h"
#include "SceneManager.h"
class Game
{
	SceneManager* SceneManager;//
public:
	void Init(HWND hWnd);
	void Update();
	void Draw();
	void Uninit();
	bool ShouldExit();
};*/

#pragma once
#include <windows.h>
#include "direct3d.h"
#include "SceneManager.h"

class Game {
    SceneManager sceneManager; // SceneManagerのインスタンスをメンバ変数として持つ
public:
    void Init(HWND hWnd);
    void Update();
    void Draw();
    void Uninit();
    bool ShouldExit();
};