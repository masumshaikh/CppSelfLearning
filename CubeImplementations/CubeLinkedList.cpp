#pragma once
#include "CubeLinkedList.h"

CubeLinkedList::~CubeLinkedList()
{
	CubeListNode* curr = head_;
	while (curr != nullptr)
	{
		CubeListNode* toDelete = curr;
		curr = curr->next_;
		delete toDelete;
	}
}

Cube& CubeLinkedList::operator[](int index)
{
	if ((index < 0) || (index >= size_))
	{
		// TODO: Throw out of range exception
	}

	CubeListNode* curr = head_;
	for (int i = 0; i < index + 1; i++)
	{
		if (i == 0)
			curr = head_;
		else
			curr = curr->next_;
	}

	return curr->data_;
}

void CubeLinkedList::InsertAtFront(const Cube& data)
{
	CubeListNode* newHead = new CubeListNode(data);
	newHead->prev_ = nullptr;

	if (size_ == 0)
	{
		head_ = newHead;
		tail_ = newHead;
		size_++;
		return;
	}

	newHead->next_ = head_;
	head_->prev_ = newHead;
	head_ = newHead;
	size_++;
}