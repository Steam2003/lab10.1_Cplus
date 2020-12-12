#include "pch.h"
#include "CppUnitTest.h"
#include "../lab10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char FileName[] = "D:\\Patiuk\\AP\\lab_2\\labs10\\lab10.1\\t.txt";
			bool test = IsOrNot(FileName);
			Assert::AreEqual(test, true);
		}
	};
}
