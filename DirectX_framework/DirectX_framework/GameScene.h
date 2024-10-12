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

// GameScene.cpp
#include "GameScene.h"

void GameScene::Init() {
    // 初期化処理
}

void GameScene::Update() {
    // 更新処理
}

void GameScene::Draw() {
    // 描画処理
}

void GameScene::Uninit() {
    // 終了処理
}

