#pragma once
#include "Object.h"
class TitleBackground :public Object
{
public:
	TitleBackground() {}
	~TitleBackground() { Uninit(); }
	void Init();  //初期化
	void Update();//更新
	void Draw();  //描画
private:
};
