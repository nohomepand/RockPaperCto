#pragma once
/*
INCLUDE
*/
#include "Model.h"
#include "Common.h"

class View //•`‰æŠÖŒW
{
	private:
		Model*	model;
		char*	drawStringData[10];
	public:
				View();
				View(Model* ArgumentModel);
				~View();

		
		void	draw(int state);				//•`‰æ
		void	makeStringComment(int state);	//•`‰æ‚·‚éƒRƒƒ“ƒg‚ğì¬

		
		
};

