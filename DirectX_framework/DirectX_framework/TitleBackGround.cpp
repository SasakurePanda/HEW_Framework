#include "TitleBackGround.h"
void TitleBackground::Init()
{
	Initialize(L"asset/back_img_01.png");   //背景を初期化
	SetPos(0.0f, 0.0f, 0.0f);      //位置を設定
	SetSize(100.0f, 100.0f, 0.0f);  //大きさを設定
	SetAngle(0.0f);                //角度を設定
	SetColor(1.0f, 1.0f, 1.0f, 1.0f);//角度を設定
}

void TitleBackground::Update(void)
{

}

void TitleBackground::Draw(void)
{

}