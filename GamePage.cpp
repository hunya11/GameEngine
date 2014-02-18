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


	//エスケープキーでゲーム終了
	if(key->CheckKeyPushed(KEY_INPUT_ESCAPE) == true){
		NowPage(FRAME_PAGE::TITLE);
	}
}


void GamePage::Draw(void){

	//DrawFormatString( 0, 0, GetColor( 255 , 255 , 255 ), "GamePage:%d",localNowCount);
	
	
	DrawFormatString( 5, 570, GetColor( 255 , 255 , 255 ), "終了　　　　 　： ESC");


	base::Draw();
}


void GamePage::LoadResource(void){
}


