#pragma once


class KeyPushed : public BaseComponent
{
private:
	// Summary : �e�N���X
	typedef BaseComponent base;

	// Summary : ����key����������
	static bool NowKeysPushed[256];
	
	// Summary : �O��key����������
	static bool PreviousKeysPushed[256];

	// Summary : �L�[�{�[�h�̏��
	static char KeyState[256];


public:
	// Summary : �R���X�g���N�^
	KeyPushed(void);

	// Summary : �f�X�g���N�^
	~KeyPushed(void);

	// Summary : ����������
	void Init(void);

	// Summary : �X�V����
	void UpData(void);

	// Summary : �L�[�{�[�h�������ꂽ�u�Ԃ��ǂ������f
	// Param   : int KeyCode = ���f����L�[
	// Returns : bool�^(true:�����ꂽ�u��,false:�����ꂽ�u�Ԃł͂Ȃ�)
	bool CheckKeyPushed(int KeyCode);

	// Summary : �L�[�{�[�h��������Ă��邩�ǂ������f
	// Param   : int KeyCode = ���f����L�[
	// Returns : bool�^(true:������Ă���,false:������Ă��Ȃ�)
	bool GetKeyState(int KeyCode);

};

