// CubeImplementations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "Cube.h"
#include "CubeLinkedList.h"

int main()
{
	Cube c(3, true);
	CubeLinkedList list;
	list.InsertAtFront(c);
}
