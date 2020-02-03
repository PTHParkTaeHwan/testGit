#pragma once
#include"class/type.h"

class Sunwoo_1
{
public:
	Sunwoo_1();
	~Sunwoo_1();

private:

	std::shared_ptr<Item> ptr_1;
	std::vector<std::shared_ptr<Item>> _vPtr_1;
	int i;
	int j;
	int k;
	int l;
	int m;
};

Sunwoo_1::Sunwoo_1()
{
}

Sunwoo_1::~Sunwoo_1()
{
}
