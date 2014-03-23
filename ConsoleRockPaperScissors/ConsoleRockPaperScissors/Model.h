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
		bool flag; //Ÿ‚¿•‰‚¯ on ˆø‚«•ª‚¯@off
		char* pName;//’N‚ªŸ‚Á‚½‚©
	}JUDGEDATA;

	Player* player;
	Npc* npc;
public:
	Model();
	~Model();
	void setHand();		//player‚Ænpc‚ÌsetHand‚ğ“¯‚Éˆµ‚¤
	void judge(JUDGEDATA*);
	char getPlayerHand(){ return player->getHand(); }
	char getnpcHand(){ return npc->getHand(); }
};

