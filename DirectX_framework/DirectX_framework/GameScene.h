#pragma once
#include "Scene.h"
//Sceneクラスを継承したゲームシーンのクラス

class GameScene : public Scene {
public:
    void Init() override;
    void Update() override;
    void Draw() override;
    void Uninit() override;
};

