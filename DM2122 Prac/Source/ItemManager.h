#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

constexpr auto ITEM_AMOUNT = 5;

#include "Item.h"

#include <vector>

class ItemManager
{
private:
	Item* head;

public:
	ItemManager();
	ItemManager(int ID, string name, float price);
	~ItemManager();

	void AddItem(int data, string name, float price);
	void RemoveItem();
	void Print();

	std::string Name();
	float Price();

	bool IsEmpty();
	bool IsLastNode();

	Item* GetItem();
};

#endif