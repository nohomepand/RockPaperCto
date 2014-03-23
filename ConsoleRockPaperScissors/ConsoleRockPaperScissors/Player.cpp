#include "Player.h"


Player::Player(){
	pName = "PLAYER";
}


Player::~Player(){

}
/*
	setHand()F	ƒL[“ü—Í‚Åè‚ğ“¾‚é
*/
void Player::setHand(){
	using namespace std;

	while (1){

		cin >> hand;

		if (hand == 'g' || hand == 'p' || hand == 's')break;
	}
}

