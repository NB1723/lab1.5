#include "pch.h"
#include "CppUnitTest.h"
#include "../Car.cpp"
#include "../Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			c.Init("BMW", 4, 230);
			int power = c.getPower();
			Assert::AreEqual(power, 230);
		}
	};
}
