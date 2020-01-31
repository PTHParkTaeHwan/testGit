#pragma once
#include "type.h"
#include "person.h"

class Shop
{
public:
	Shop();
	~Shop();

	void enterVisitor(person* _visitor);
	void leaveVisitor();

	void visitorBuyItem(Item _item);
	void visitorSellItem(Item _item);

	void showStoreItem();
	void init();

private:
	person* visitor = nullptr;
	vector<Item> store_items;
};