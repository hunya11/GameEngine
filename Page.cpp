#include "Root.h"

KeyPushed* Page::key = 0;

FRAME_PAGE::Type Page::nowPage;

Page::Page(void)
{
	if(key == 0) key = new KeyPushed();
	startNowCount =  GetNowCount();
}


Page::~Page(void)
{

	//���s���̃G�t�F�N�g���I��
	vector<Effect*>::iterator it = effList.begin();
	while( it != effList.end() ){
		it = effList.erase(it);	
	}
}

void Page::UpData(void){
	key->UpData();
	localNowCount = GetNowCount() - startNowCount;

	//�G�t�F�N�g�̍X�V����
	for(unsigned int i=0;i<effList.size();i++){
		if(effList[i] != NULL){
			effList[i]->UpData();
		}
	}

	//�G�t�F�N�g�̎��s�Ǘ�
	this->EffectManager();
}

void Page::Draw(void){

	//�G�t�F�N�g�\��
	for(unsigned int i=0;i<effList.size();i++){
		if(effList[i] != NULL){
			effList[i]->Draw();
		}
	}

}

void Page::NowPage(FRAME_PAGE::Type fp){
	Page::nowPage = fp;
}

FRAME_PAGE::Type Page::NowPage(void){
	return Page::nowPage;
}

void Page::EffectManager(void){
	vector<Effect*>::iterator it = effList.begin();
	while( it != effList.end() ){
		Effect* p = *it;
		if(p->IsDrawEnd() == true){
			delete p;
			it = effList.erase(it);			
		}else{
			it++;
		}
	}	

	//�̈�̏k��
	if(effList.size() == 0 && effList.capacity() != 0)	{
		vector<Effect*>(effList).swap(effList);
	}

}


void Page::RunEffect(Effect* eff){
	effList.push_back(eff);
}