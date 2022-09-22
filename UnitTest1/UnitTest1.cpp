#include "pch.h"
#include "CppUnitTest.h"
#include "..\ConsoleApplication3\ConsoleApplication3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		//Выполняемые тесты
		TEST_METHOD(tests10pass)
		{
			Assert::IsTrue(ten(2022, 2) == "11111100110");
			Assert::IsTrue(ten(2022, 4) == "133212");
			Assert::IsTrue(ten(2022, 6) == "13210");
			Assert::IsTrue(ten(2022, 8) == "3746");
			Assert::IsTrue(ten(2022, 16) == "7E6");
			Assert::IsTrue(ten(0, 7) == "0");
			Assert::IsTrue(ten(2022, 0) == "error");
		}

		//Провальные тесты, из-за погрешности метода подсчёта
		TEST_METHOD(tests10failure)
		{
			Assert::IsTrue(ten(123.5789465, 8) == "173.450327");
		}

		TEST_METHOD(tests16pass)
		{
			Assert::IsTrue(more("C3D6", 16, 2) == "1100001111010110");
			Assert::IsTrue(more("C3D6", 16, 4) == "30033112");
			Assert::IsTrue(more("C3D6", 16, 19) == "75GC");
		}

		TEST_METHOD(tests7pass)
		{
			Assert::IsTrue(more("655", 7, 2) == "101001110");
			Assert::IsTrue(more("100035", 7, 3) == "212002110");
			Assert::IsTrue(more("3354610", 7, 10) == "417046");
		}
	};
}
