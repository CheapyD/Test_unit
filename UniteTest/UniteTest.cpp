#include "pch.h"
#include "CppUnitTest.h"
#include "../Test_unit/Test_unit.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UniteTest
{
	TEST_CLASS(UniteTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);

		}
	};
}
