#pragma once
#include "Object.h"
class TitleBackground :public Object
{
public:
	TitleBackground() {}
	~TitleBackground() { Uninit(); }
	void Init();  //‰Šú‰»
	void Update();//XV
	void Draw();  //•`‰æ
private:
};
