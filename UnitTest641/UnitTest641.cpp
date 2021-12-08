#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.4.1\lab_6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { -1, -2, 3 };
			int S = Sum(a, 3);
			Assert::AreEqual(S, -3);

		}
	};
}
