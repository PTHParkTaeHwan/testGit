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
}

void luckyGame::lucky()
{

	luck = rand() % 10;
	if (luck > 5)
	{
		std::cout << "����̻��� ����Դϴ�. �����մϴ�." << std::endl;

	}
	else
	{
		std::cout << "��������� ����Դϴ�. ������ �� ���� �ƴմϴ�." << std::endl;

	}
}
