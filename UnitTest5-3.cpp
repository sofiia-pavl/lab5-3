#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab5-3\lab5-3\A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A q(3);
			Assert::AreEqual(q.GetX(), 3);
		}
	};
}
