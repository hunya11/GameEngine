#pragma once
class BaseComponent
{
public:
	// Summary : �f�X�g���N�^
	virtual ~BaseComponent(void) = 0;

	// Summary : ����������
	virtual void Init(void) = 0;

	// Summary : �X�V����
	virtual void UpData(void) = 0;
};

