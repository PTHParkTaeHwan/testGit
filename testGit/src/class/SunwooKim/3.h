#pragma once
#include "class/type.h"
class sunwoo
{
public:
	sunwoo();
	~sunwoo();

	std::shared_ptr<Item> ptr;

	std::vector<std::shared_ptr<Item>> _vPtr;

private:

	const char* name;
	int age;
};

sunwoo::sunwoo()
{
}

sunwoo::~sunwoo()
{
}