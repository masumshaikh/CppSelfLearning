#pragma once
#include <iostream>
#include "Cube.h"

Cube::Cube(const Cube & c)
{
	length_ = c.length_;
	verbose_ = c.verbose_;
	if (c.verbose_)
		std::cout << "Copy constructor invoked!" << std::endl;
}
