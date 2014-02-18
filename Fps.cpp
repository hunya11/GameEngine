#include "Root.h"

int Fps::N = 60;
int Fps::FPS = 60;

Fps::Fps(void)
{
	this->Init();
}


Fps::~Fps(void)
{
}

void Fps::Init(void){
	startTime = 0;
	count = 0;
	fps = 0;
}

void Fps::UpData(void){

	if( count == 0 ){ //1�t���[���ڂȂ玞�����L��
		startTime = GetNowCount();
	}
	if( count == N ){ //60�t���[���ڂȂ畽�ς��v�Z����
		int t = GetNowCount();
		fps = 1000.f/((t-startTime)/(float)N);
		count = 0;
		startTime = t;
	}
	count++;

}


void Fps::Wait(void){
	int tookTime = GetNowCount() - startTime;	//������������
	int waitTime = count*1000/FPS - tookTime;	//�҂ׂ�����
	if( waitTime > 0 ){
		Sleep(waitTime);	//�ҋ@
	}
}


float Fps::GetFps(void){
	return this->fps;
}