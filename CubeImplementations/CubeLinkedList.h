#pragma once
#include "Cube.h"
class CubeLinkedList
{
private:
	class CubeListNode 
	{
	public:
		CubeListNode* next_;
		CubeListNode* prev_;
		Cube data_;

		CubeListNode() {}

		CubeListNode(Cube c) : next_{ nullptr }, prev_{ nullptr }
		{
			data_ = c;  // Invokes copy assignment operator; if we had put data_{ c } in the initialiser list,
                        // that would have invoked copy constructor instead. Neither is desirable.

                        // QUESTION 1:  Assuming I don't mind using a copy assignment operator as is currently the case,
                        //              how do I know if the default copy assignment operator is sufficient here?
			
                        // QUESTION 2:  What's the best way to avoid these copy/copy assignment calls? Should I ...
                        //              - Change data_ to be a Cube*
                        //				- Change the signature of this constructor to be CubeListNode(const Cube& c)
		}
	};

public:
	CubeListNode* head_;
	CubeListNode* tail_;
	int getSize() { return size_; }

	// Constructors and Destructors.
	// QUESTION 3: Do I need to follow the rule of 3/5 for this class? Why or why not?
	CubeLinkedList() : head_{ nullptr }, tail_{ nullptr }, size_{ 0 } {}
	~CubeLinkedList();

	Cube& operator[](int index);    // QUESTION 4: The STL library always has const versions of these overloads ...
                                    // ... Why are they necessary?
	
	//int PeekFront();
	//int PeekBack();

	void InsertAtFront(const Cube& data);	// QUESTION 5. My implementation involves a copy constructor. It starts with:
                                            // CubeListNode* newHead = new CubeListNode(data);
	                                        // How to avoid this?
	//void InsertAtEnd();
	//void InsertAtIndex();
	//void PopFromFront();
	//void PopFromBack();

private:
	int size_;
};

