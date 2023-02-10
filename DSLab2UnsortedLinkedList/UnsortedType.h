#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

#include "ItemType.h"

struct Node
{
	ItemType item;
	Node* next;
};

class UnsortedListL
{
public:
	UnsortedListL();
	~UnsortedListL();

	void MakeEmpty();	//Done
	bool IsFull();		//Done
	int GetLength();	//Done
	ItemType Search(ItemType item, bool& found);	//Done
	bool InsertItem(ItemType item);		// Done
	bool DeleteItem(ItemType item);	//Done
	void ResetList();	//Done
	ItemType GetNextItem();

private:
	Node* head;
	Node* loc;
	int listSize;
};

#endif // !UNSORTEDLISTL_H