#pragma once
class GamePage : public Page
{
private:

	// Summary : �e�N���X
	typedef Page base;
	

public:
	// Summary : �R���X�g���N�^
	GamePage(void);
	
	// Summary : �f�X�g���N�^
	~GamePage(void);
	
	// Summary : ����������
	void Init(void);
	
	// Summary : �X�V����
	void UpData(void);
	
	// Summary : �`�揈��
	void Draw(void);
	
	// Summary : ���\�[�X�ǂݍ���
	void LoadResource(void);

};


