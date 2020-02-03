#pragma once
#include "class/type.h"
class sunwoo
{
public:
	sunwoo();
	~sunwoo();
	//const char* name;
	int age = 29;
	std::shared_ptr<Item> ptr;

	std::vector<std::shared_ptr<Item>> _vPtr;

	string name = "�輱��";
	int age = 29;
	void status() { cout << name; }

	float mass = 80;
	string school = "sejong";
	
	string life = "생명연장중";

private:



};

sunwoo::sunwoo()
{
}

sunwoo::~sunwoo()
{
}
