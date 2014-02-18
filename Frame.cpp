#include "Root.h"


Frame::Frame(void)
{
}


Frame::~Frame(void)
{
	DxLib_End() ;				// �c�w���C�u�����g�p�̏I������
}


void Frame::Init(void) throw(int){	
	
	//�E�B���h�E���[�h
	ChangeWindowMode(TRUE);
	SetGraphMode(X_SIZE,Y_SIZE,32);
	SetOutApplicationLogValidFlag(FALSE);//Log.txt������Ȃ��悤��

	if( DxLib_Init() == -1 ){		// �c�w���C�u��������������
		throw -1;			// �G���[���N�����璼���ɏI��
	}

	//���O
	SetMainWindowText("GAME");
	//�E�B���h�E�T�C�Y�̕ύX�s��
	SetWindowSizeChangeEnableFlag(FALSE);
	//�}�E�X��\��
	SetMouseDispFlag(TRUE);
	//����ʎg�p
	SetDrawScreen(DX_SCREEN_BACK);

	nowPage = FRAME_PAGE::TITLE;
	oldPage = nowPage;
	page = new TitlePage();
	page->Init();
	Page::NowPage(this->nowPage);
	backgroundColor = GetColor(128,128,255);
}


void Frame::Main(void) throw(int){
	
	Fps fps;
	bool isEnd = false;

	while(ProcessMessage() == 0 && isEnd == false){
		fps.UpData();
		DrawBox(0,0,800,600,backgroundColor,TRUE);
		page->UpData();
		page->Draw();
		DrawFormatString(0,30,GetColor(255,255,0),"FPS:%.2f",fps.GetFps());
		ScreenFlip();
		ClearDrawScreen();
		fps.Wait();

		this->nowPage = Page::NowPage();
		if(this->nowPage != this->oldPage){
			delete page;
			page = 0;
			switch(this->nowPage){
			case FRAME_PAGE::TITLE:
				page = new TitlePage();
				break;
			case FRAME_PAGE::GAME:
				page = new GamePage();
				break;
			case FRAME_PAGE::END:
				isEnd = true;
				break;
			default:
				throw -1;
				break;
			}
		}
		this->oldPage = this->nowPage;
	}
}