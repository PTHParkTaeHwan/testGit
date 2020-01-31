#include "person.h"



person::person()
{
}


person::~person()
{
}

void person::push_Item(Item _item)
{
	inven.push_item(_item);
}

Item person::pop_Item(Item _item)
{
	Item item = inven.pop_item(_item);
	return item;
}

void person::init()
{

	gold = 100;
	inven.init();
}

void person::showItems()
{
	inven.showInven();
}
