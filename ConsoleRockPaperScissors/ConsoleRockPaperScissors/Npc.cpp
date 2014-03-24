#include "Npc.h"


Npc::Npc(){

	pName = "Npc";	
	setHand();		//最初の手を決める
}


Npc::~Npc(){

}
/*  makeCト 2014/3/24
npcのHandの設定

引数:  無し
戻り値: 
備考:int型のランダムをchar型に変換して手を入れてる
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