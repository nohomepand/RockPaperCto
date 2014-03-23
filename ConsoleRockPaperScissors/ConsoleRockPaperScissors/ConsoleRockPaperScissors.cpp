#include "ConsoleRockPaperScissors.h"


ConsoleRockPaperScissors::ConsoleRockPaperScissors(){
	model = new Model;
	view = new View(model);
	contorl = new Control;
}


ConsoleRockPaperScissors::~ConsoleRockPaperScissors(){
	
}
void ConsoleRockPaperScissors::mainLoop(){

	view->draw(1);
}