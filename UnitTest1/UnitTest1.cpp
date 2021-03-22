#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab_2.1/Goods.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = 5 * 2;
			Assert::AreEqual(t, (10));
		}
	};
}
