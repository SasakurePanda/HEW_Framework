#pragma once
#include "Object.h"
class TitleBackground :public Object
{
public:
	TitleBackground() {}
	~TitleBackground() { Uninit(); }
	void Init();  //������
	void Update();//�X�V
	void Draw();  //�`��
private:
};
