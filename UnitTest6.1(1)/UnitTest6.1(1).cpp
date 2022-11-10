#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1/laba6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const size = 25;
			int a[size];
			int Low = -20;
			int Hight = 30;
			int i = 0;
			Create(a, size, Low, Hight);
			Sum(a, size, i);
			number(a, size, i, Low, Hight);
			foo(size, a);
		}
	};
}
