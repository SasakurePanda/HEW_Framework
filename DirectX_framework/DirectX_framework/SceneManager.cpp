#include "SceneManager.h"

std::unique_ptr<Scene>
 SceneManager::currentScene = nullptr;

void SceneManager::ChangeScene(std::unique_ptr<Scene> newScene)
{
    if (currentScene)
    {
        currentScene->Uninit();
    }
    currentScene = std::move(newScene); //オブジェクトの所有権を移動するための関数
    //newSceneの所有権をcurrentSceneに移すよ
    currentScene->Init();
    //現在のシーンの開始の処理をするよ

}

void SceneManager::Update()
{
    if (currentScene)
    {
        currentScene->Update();
    }
}

void SceneManager::Draw()
{
    if (currentScene)
    {
        currentScene->Draw();
    }
}

void SceneManager::Uninit()
{
    if (currentScene)
    {
        currentScene->Uninit();
    }
}
