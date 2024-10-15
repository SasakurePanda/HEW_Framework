/*#include "Game.h"
#include "SceneManager.h"
#include "TitleScene.h" 
#include <windows.h>

void Game:: Init(HWND hWnd)
{
	//DirectXの初期化
	D3D_Create(hWnd);
	SceneManager::ChangeScene(std::make_unique<TitleScene>());
}

void Game::Update()
{
    // ゲーム全体の更新処理
    if (currentScene)
    {
        currentScene->Update();
    }
}

void Game::Draw()
{
    // ゲーム全体の描画処理
    if (currentScene) {
        currentScene->Draw();
    }
}

void Game::Uninit()
{
    // ゲーム全体の終了処理
    if (currentScene) {
        currentScene->Uninit();
    }
}

bool Game::ShouldExit()
{
    // 終了条件の判定
    //if()//ESCキーを押されたら
    return false; // ここに終了条件を記述
}*/
#include <windows.h>
#include "Game.h"
#include "TitleScene.h" // 初期シーンのヘッダーをインクルード

void Game::Init(HWND hWnd) {
    // DirectXの初期化
    D3D_Create(hWnd);
    // 初期シーンの設定
    sceneManager.ChangeScene(std::make_unique<TitleScene>());
}

void Game::Update() {
    // ゲーム全体の更新処理
    sceneManager.Update();//SceneManagerのUpdateに移動してシーン自体を更新する
}

void Game::Draw() {
    // ゲーム全体の描画処理
    sceneManager.Draw();
}

void Game::Uninit() {
    // ゲーム全体の終了処理
    sceneManager.Uninit();
}

bool Game::ShouldExit() {
    // 終了条件の判定
    return false; // ここに終了条件を記述
}