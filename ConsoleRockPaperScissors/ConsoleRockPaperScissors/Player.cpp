#include "Player.h"


Player::Player(){
	pName = "PLAYER";
}


Player::~Player(){

}
/*
	setHand()�F	�L�[���͂Ŏ�𓾂�
*/
void Player::setHand(){
	using namespace std;

	while (1){

		cin >> hand;

		if (hand == 'g' || hand == 'p' || hand == 's')break;
	}
}

