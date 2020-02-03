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
};

pth2_1::pth2_1()
{
}

pth2_1::~pth2_1()
{
}

