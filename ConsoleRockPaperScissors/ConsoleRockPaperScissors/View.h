#pragma once
/*
INCLUDE
*/
#include "Model.h"
#include "Common.h"

class View //描画関係
{
	private:
		Model*	model;
		char*	drawStringData[10];
	public:
				View();
				View(Model* ArgumentModel);
				~View();

		
		void	draw(int state);				//描画
		void	makeStringComment(int state);	//描画するコメントを作成

		
		
};

