#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1_string/lab8.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t; 
			string s = "sasha.stu..de..nt";
			t = Find_Dot(s, '.');
			Assert::AreEqual(t, 13);
		}
	};
}
