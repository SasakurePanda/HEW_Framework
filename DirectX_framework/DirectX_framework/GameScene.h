#pragma once
#include "Scene.h"
//Scene�N���X���p�������Q�[���V�[���̃N���X

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
    // ����������
}

void GameScene::Update() {
    // �X�V����
}

void GameScene::Draw() {
    // �`�揈��
}

void GameScene::Uninit() {
    // �I������
}

