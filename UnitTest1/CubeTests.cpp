#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <string>
#include "../CubeImplementations/Cube.h"
#include "../CubeImplementations/Cube.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cube c;
			Assert::AreEqual(8, c.Volume());
		}
	};
}
