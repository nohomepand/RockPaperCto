#include "Npc.h"


Npc::Npc(){

	pName = "Npc";	
	setHand();		//Å‰‚Ìè‚ğŒˆ‚ß‚é
}


Npc::~Npc(){

}
/*
	setHand():	intŒ^‚Ìƒ‰ƒ“ƒ_ƒ€‚ğcharŒ^‚É•ÏŠ·‚µ‚Äè‚ğ“ü‚ê‚Ä‚é

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