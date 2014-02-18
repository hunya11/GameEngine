#pragma once
class Fps : public BaseComponent
{
private:
	// Summary : �e�N���X
	typedef BaseComponent base;

	// Summary : ����J�n����
	int startTime;

	// Summary : �J�E���^
	int count;

	// Summary : fps
	float fps;

	// Summary : ���ς����T���v����
	static int N;

	// Summary : �ݒ肵��FPS
	static int FPS;
public:
	// Summary : �R���X�g���N�^
	Fps(void);

	// Summary : �f�X�g���N�^
	~Fps(void);

	// Summary : ����������
	void Init(void);

	// Summary : �X�V����
	void UpData(void);

	// Summary : �ҋ@����
	void Wait();

	float GetFps(void);
};

