#pragma once
#include"class/type.h"

class pth2_1
{
public:
	pth2_1();
	~pth2_1();

private:
	std::shared_ptr<int> Ptr2_1;
	std::vector<std::shared_ptr<int>> _vPtr;

	void ptrInit();
};

pth2_1::pth2_1()
{
}

pth2_1::~pth2_1()
{
}

inline void pth2_1::ptrInit()
{
	cout << "init" << endl;
}

