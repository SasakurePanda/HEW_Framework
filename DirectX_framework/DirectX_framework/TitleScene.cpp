#include "TitleScene.h"
#include "TitleBackGround.h"

void TitleScene::Init()
{
    // 初期化処理
}

void TitleScene::Update()
{
    // 更新処理
}

void TitleScene::Draw()
{
    // 描画処理
    D3D_StartRender();  //描画開始
    D3D_FinishRender(); //描画終了
}

void TitleScene::Uninit()
{
    // 終了処理
}
