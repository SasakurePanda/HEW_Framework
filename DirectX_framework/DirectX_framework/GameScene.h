#pragma once
#include "Scene.h"
//Scene�N���X���p�������Q�[���V�[���̃N���X

class GameScene : public Scene  //Scene�̒��ۃN���X���p������
{
public:
    void Init()    override;
    void Update()  override;
    void Draw()    override;
    void Uninit()  override;
};

