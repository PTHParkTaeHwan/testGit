#include "Inventory.h"



Inventory::Inventory()
{

}


Inventory::~Inventory()
{
}

void Inventory::showInven()
{
	cout << "=========== 플레이어 아이템 목록 ===============" << endl;
	for (int i = 0; i < inven_items.size(); ++i) {
		cout << inven_items[i] << endl;
	}
	cout << endl;
}

void Inventory::init()
{
	inven_items.push_back("낡은 검");
	inven_items.push_back("낡은 신발");
	inven_items.push_back("낡은 영환");
}

Item Inventory::pop_item(Item _item)
{
	for (auto it = inven_items.begin(); it != inven_items.end(); ++it) {
		if (*it == _item) {
			inven_items.erase(it);
			return _item;
		}
	}
	return "없음";


}

void Inventory::push_item(Item _item)
{
	inven_items.push_back(_item);
}

