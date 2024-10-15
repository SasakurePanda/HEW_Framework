/*#include "Game.h"
#include "SceneManager.h"
#include "TitleScene.h" 
#include <windows.h>

void Game:: Init(HWND hWnd)
{
	//DirectX�̏�����
	D3D_Create(hWnd);
	SceneManager::ChangeScene(std::make_unique<TitleScene>());
}

void Game::Update()
{
    // �Q�[���S�̂̍X�V����
    if (currentScene)
    {
        currentScene->Update();
    }
}

void Game::Draw()
{
    // �Q�[���S�̂̕`�揈��
    if (currentScene) {
        currentScene->Draw();
    }
}

void Game::Uninit()
{
    // �Q�[���S�̂̏I������
    if (currentScene) {
        currentScene->Uninit();
    }
}

bool Game::ShouldExit()
{
    // �I�������̔���
    //if()//ESC�L�[�������ꂽ��
    return false; // �����ɏI���������L�q
}*/
#include <windows.h>
#include "Game.h"
#include "TitleScene.h" // �����V�[���̃w�b�_�[���C���N���[�h

void Game::Init(HWND hWnd) {
    // DirectX�̏�����
    D3D_Create(hWnd);
    // �����V�[���̐ݒ�
    sceneManager.ChangeScene(std::make_unique<TitleScene>());
}

void Game::Update() {
    // �Q�[���S�̂̍X�V����
    sceneManager.Update();//SceneManager��Update�Ɉړ����ăV�[�����̂��X�V����
}

void Game::Draw() {
    // �Q�[���S�̂̕`�揈��
    sceneManager.Draw();
}

void Game::Uninit() {
    // �Q�[���S�̂̏I������
    sceneManager.Uninit();
}

bool Game::ShouldExit() {
    // �I�������̔���
    return false; // �����ɏI���������L�q
}