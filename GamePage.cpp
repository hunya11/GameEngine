#include "Root.h"


GamePage::GamePage(void)
{
	this->Init();
}


GamePage::~GamePage(void)
{

}


void GamePage::Init(void){

}


void GamePage::UpData(void){
	base::UpData();


	//�G�X�P�[�v�L�[�ŃQ�[���I��
	if(key->CheckKeyPushed(KEY_INPUT_ESCAPE) == true){
		NowPage(FRAME_PAGE::TITLE);
	}
}


void GamePage::Draw(void){

	//DrawFormatString( 0, 0, GetColor( 255 , 255 , 255 ), "GamePage:%d",localNowCount);
	
	
	DrawFormatString( 5, 570, GetColor( 255 , 255 , 255 ), "�I���@�@�@�@ �@�F ESC");


	base::Draw();
}


void GamePage::LoadResource(void){
}


