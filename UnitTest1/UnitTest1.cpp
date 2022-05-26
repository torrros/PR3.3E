#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR3.3E\PR3.3E\Rational.cpp"
#include "C:\Users\vladt\source\repos\PR3.3E\PR3.3E\Pair.cpp"
#include "C:\Users\vladt\source\repos\PR3.3E\PR3.3E\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r(1, 2);
			Assert::IsTrue(Rational{ 1, 2 } == r);
		}
	};
}
