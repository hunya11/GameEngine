#include "Root.h"


	///����key����������
bool KeyPushed::NowKeysPushed[256] = {false};
	
	///�O��key����������
bool KeyPushed::PreviousKeysPushed[256] = {false};

	///�L�[�{�[�h�̏��
char KeyPushed::KeyState[256] = {NULL};


KeyPushed::KeyPushed(void)
{
	this->Init();
}


KeyPushed::~KeyPushed(void)
{
}


void KeyPushed::Init(void){

	for(int i=0;i<256;i++){
		NowKeysPushed[i] = false;
		PreviousKeysPushed[i] = false;
	}

}


void KeyPushed::UpData(void){

	GetHitKeyStateAll(KeyState);

}


bool KeyPushed::CheckKeyPushed(int KeyCode){

	PreviousKeysPushed[KeyCode] = NowKeysPushed[KeyCode];

	NowKeysPushed[KeyCode] = (KeyState[KeyCode] == 1)? true:false;

	if(NowKeysPushed[KeyCode] && !PreviousKeysPushed[KeyCode]) return true;
	else return false;

}


bool KeyPushed::GetKeyState(int KeyCode){
	return (KeyState[KeyCode] == 1)? true:false;
}

