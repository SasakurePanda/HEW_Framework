#include "SceneManager.h"

std::unique_ptr<Scene> SceneManager::currentScene = nullptr;

void SceneManager::ChangeScene(std::unique_ptr<Scene> newScene) {
    if (currentScene) {
        currentScene->Uninit();
    }
    currentScene = std::move(newScene);
    currentScene->Init();
}

void SceneManager::Update() {
    if (currentScene) {
        currentScene->Update();
    }
}

void SceneManager::Draw() {
    if (currentScene) {
        currentScene->Draw();
    }
}

void SceneManager::Uninit() {
    if (currentScene) {
        currentScene->Uninit();
    }
}
