#include "Player.h"


Player::Player(){
	pName = "PLAYER";
}


Player::~Player(){

}
/*  makeCト 2014/3/24
playerのHandの設定

引数:  無し
戻り値: 
備考:
*/
void Player::setHand(){
	using namespace std;

	while (1){

		cin >> hand;

		if (hand == 'g' || hand == 'p' || hand == 's')break;
	}
}

