#include "class/type.h"

class p1
{
public:
	int getA()
	{
		return a;
	}

	int setA(int _a)
	{
		a = _a;
	}

	void conflict()
	{
		cout << "ÄÄÇÃ¸´Æ® 1" << endl;
	}

private :
	int a = 3;
	int b;
	
};

class younghwan
{
public:
	p1 player;

	int p1sA = player.getA();
	int p1sA2 = player.setA(2);

private:
	
	int* a;
	int num;
	
};
