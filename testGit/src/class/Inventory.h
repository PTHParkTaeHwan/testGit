#pragma once
#include "type.h"
class Inventory
{
public:
	Inventory();
	~Inventory();

	void showInven();
	void init();
	Item pop_item(Item _item);
	void push_item(Item _item);

private:
	vector<Item> inven_items;
};

