#pragma once
class DrawableComponent : public BaseComponent
{
public:
	// Summary : �f�X�g���N�^
	virtual ~DrawableComponent(void) = 0;
	
	// Summary : �`�揈��
	virtual void Draw(void) = 0;
};

