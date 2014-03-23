#pragma once
/*
INCLUDE
*/
#include "Player.h"
#include "Npc.h"

class Model
{
private:
	typedef struct _JUDGEDATA{
		bool flag; //�������� on ���������@off
		char* pName;//�N����������
	}JUDGEDATA;

	Player* player;
	Npc* npc;
public:
	Model();
	~Model();
	void setHand();		//player��npc��setHand�𓯎��Ɉ���
	void judge(JUDGEDATA*);
	char getPlayerHand(){ return player->getHand(); }
	char getnpcHand(){ return npc->getHand(); }
};

