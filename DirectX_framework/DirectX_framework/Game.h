#pragma once
#include "direct3d.h"

class Game
{
public:
	void Init(HWND hWnd);
	void Update();
	void Draw();
	void Uninit();

};