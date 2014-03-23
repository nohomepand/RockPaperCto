#pragma once
/*
INCLUDE
*/

#include "Common.h"

class Random
{
private:
	
public:
	Random();
	~Random();

	int getRand(){ return rand() % 2;}
};

