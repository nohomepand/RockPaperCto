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
		bool flag; //勝ち負け on 引き分け　off
		char* pName;//誰が勝ったか
	}JUDGEDATA;

	Player* player;
	Npc* npc;
public:
	Model();
	~Model();
	void setHand();		//playerとnpcのsetHandを同時に扱う
	void judge(JUDGEDATA*);
	char getPlayerHand(){ return player->getHand(); }
	char getnpcHand(){ return npc->getHand(); }
};

