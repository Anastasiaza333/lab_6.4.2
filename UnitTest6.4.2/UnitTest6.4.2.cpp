#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 25;
			double b[n] = { 1,2,3,-4,5,-6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
			int k = poshuk1min(b, n, 0,0,0);
			Assert::AreEqual(k,3);
		}
	};
}
