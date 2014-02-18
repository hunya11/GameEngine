#pragma once
class SelectionMenu : public DrawableComponent
{
private:
	
	// Summary : �I�������X�g
	list<string> menuList;
	
	// Summary : �J�[�\���ʒu
	int numCursor;
	
	// Summary : �\���ʒuX���W
	double x;
	
	// Summary : �\���ʒuy���W
	double y;
public:
	
	// Summary : �R���X�g���N�^
	SelectionMenu(void);
	
	// Summary : �f�X�g���N�^
	~SelectionMenu(void);
	
	// Summary : ����������
	void Init(void);
	
	// Summary : �X�V����
	void UpData(void);

	// Summary : �`�揈��
	void Draw(void);

	// Summary : �\������I�����ɉ�����
	// Param   : string str = ������I����
	void Add(string str);


	/*�v���p�e�B*/
	void NumCursor(int num);
	int NumCursor(void);

	void X(double num);
	double X(void);

	void Y(double num);
	double Y(void);
};

