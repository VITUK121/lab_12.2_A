#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_12.2_A/lab_12.2_A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest121A
{
	TEST_CLASS(UnitTest121A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(calc_n(100), 3);
		}
	};
}
