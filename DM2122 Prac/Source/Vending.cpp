#include "Vending.h"

Vending::Vending()
{
	for (int i = 0; i < 10; ++i)
	{
		CLinkList* newList = new CLinkList(i, "trashcan" + std::to_string(i), float(i * 3));
		machineItems.push_back(newList);
	}
}

Vending::~Vending()
{
	for (int i = 0; i < 10; ++i)
	{
		if (machineItems.at(i) != nullptr)
			delete machineItems.at(i);
	}
}

void Vending::FillMachine()
{
	for (int i = 0; i < 10; ++i)
	{
		CLinkList* newList = new CLinkList(i, "trashcan" + std::to_string(i), float(i * 3));
		machineItems.push_back(newList);
	}
}

bool Vending::BuyItem(int choice)
{
	//machineItems.at(choice)->Print();
	if (choice >= 0 && choice <= 5)
	{
		if (!machineItems.at(choice)->IsEmpty())
		{
			machineItems.at(choice)->RemoveItem();
			cout << "Item " << choice << " bought" << endl;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

void Vending::PrintAvailability(int choice)
{
	machineItems.at(choice)->Print();
}

std::string Vending::ReturnItemName(int ID)
{
	return machineItems.at(ID)->Name();
}

float Vending::ReturnItemPrice(int ID)
{
	return machineItems.at(ID)->Price();
}

bool Vending::ItemAvailable(int ID)
{
	if (machineItems.at(ID)->IsEmpty())
		return false;
	else
		return true;
}