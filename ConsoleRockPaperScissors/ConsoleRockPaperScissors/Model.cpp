#include "Model.h"


Model::Model(){
	player = new Player;
	npc = new Npc;
}

Model::~Model(){
	delete player;
	delete npc;
}
/*  makeC�g 2014/3/24 
    player�I�u�W�F�N�g�Anpc�I�u�W�F�N�g�̎�����߂�

    ����:    ����
    �߂�l: �@void
    ���l:    ���Ԑ��̗��p
*/
void Model::setHand(){

	Participant* participant[2];

	participant[0] = player;
	participant[1] = npc;
	
	for (int i = 0; i < 2; i++){

		participant[i]->setHand();
	}
}
/*  makeC�g 2014/3/24
	�W�����P���̔��� 

	����:   judgeData  ���g bool ��������on or �A�C�R�@off
	       char* ���҂̖��O
	�߂�l: void
	���l:
*/
void Model::judge(JUDGEDATA* judgeData){

	char p1 = player->getHand();
	char n1	= npc->getHand();
	
	if (p1 == n1){//���q�l
		judgeData->flag == false;
	}
	else if (//��������
		p1 == 'g' && n1 == 's' ||// p1 �O�[�@	 n1 �`���L
		p1 == 's' && n1 == 'p' ||// p1 �`���L	 n1 �p�[
		p1 == 'p' && n1 == 'g'){ // p1 �p�[   n1 �O�[

		judgeData->flag == true;
		judgeData->pName = player->getName();
	}
	else{//��������
		judgeData->flag == true;
		judgeData->pName = npc->getName();
	}
}
