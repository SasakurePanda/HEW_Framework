#pragma once
#include "Scene.h"
//Sceneクラスを継承したゲームシーンのクラス

class GameScene : public Scene  //Sceneの抽象クラスを継承する
{
public:
    void Init()    override;
    void Update()  override;
    void Draw()    override;
    void Uninit()  override;
};

