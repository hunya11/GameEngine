#pragma once
class TitlePage : public Page
{
private:
	// Summary : �e�N���X
	typedef Page base;
	
	// Summary : �X�^�[�g���j���[
	SelectionMenu menu;

public:
	// Summary : �R���X�g���N�^
	TitlePage(void);
	
	// Summary : �f�X�g���N�^
	~TitlePage(void);
	
	// Summary : ����������
	void Init(void);
	
	// Summary : �X�V����
	void UpData(void);
	
	// Summary : �`�揈��
	void Draw(void);

	// Summary : ���\�[�X�ǂݍ���
	void LoadResource(void);
};

