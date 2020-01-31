#include "luckyGame.h"
#include<iostream>
#include <time.h>
class luckygame
{
public:
	luckygame();
	~luckygame();

private:

};

luckygame::luckygame()
{

}

luckygame::~luckygame()
{
}

void luckyGame::init()
{
	lucky();

	if (luck > 5)
	{
		std::cout << "평균이상의 행운입니다 축하합니다." << std::endl;

	}
	else
	{
		std::cout << "평균이상의 행운입니다 축하합니다." << std::endl;
	
	}
}

void luckyGame::lucky()
{

	luck = rand() % 10;
}
