#pragma once
/*
INCLUDE
*/
#include "Model.h"
#include "Common.h"

class View //�`��֌W
{
	private:
		Model*	model;
		char*	drawStringData[10];
	public:
				View();
				View(Model* ArgumentModel);
				~View();

		
		void	draw(int state);				//�`��
		void	makeStringComment(int state);	//�`�悷��R�����g���쐬

		
		
};

