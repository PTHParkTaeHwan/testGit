#pragma once
#include "class/type.h"
class sunwoo
{
public:
	sunwoo();
	~sunwoo();

	std::shared_ptr<Item> ptr;

	std::vector<std::shared_ptr<Item>> _vPtr;

	string name = "�輱��";
	int age = 29;
	void status() { cout << name; }

	const char* name;
	int age;
private:



};

sunwoo::sunwoo()
{
}

sunwoo::~sunwoo()
{
}