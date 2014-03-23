#include "Npc.h"


Npc::Npc(){

	pName = "Npc";	
	setHand();		//最初の手を決める
}


Npc::~Npc(){

}
/*
	setHand():	int型のランダムをchar型に変換して手を入れてる

*/
void Npc::setHand(){

	switch(random->getRand()){
	case 0:
		hand = 'g';
		break;
	case 1:
		hand = 's';
		break;
	case 2:
		hand = 'p';
	}
}