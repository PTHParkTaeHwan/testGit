#pragma once
#include "Inventory.h"
#include "type.h"

class person
{
public:
	person();
	~person();

	void push_Item(Item _item);
	Item pop_Item(Item _item);
	void init();
	void showItems();

private:
	Inventory inven;
	int gold;
};

