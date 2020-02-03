#pragma once
#include"class/type.h"
class pth2
{
public:
	pth2();
	~pth2();

private:

	std::shared_ptr<Item> ptr;
	std::vector<std::shared_ptr<Item>> _vPtr;
};

pth2::pth2()
{
}

pth2::~pth2()
{
}
int main()
{
	pth2 _class;

	return 0;
}
