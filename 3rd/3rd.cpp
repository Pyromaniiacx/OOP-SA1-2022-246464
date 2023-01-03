#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP-SA1-Solution-2022/grade.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My3rd
{
	TEST_CLASS(My3rd)
	{
	private:
		Grade grader;

		// Data for double tests
		std::vector<double> bscDoubleVectData{ 70,32, 94, 39, 65, 49.9, 85, 66 , 57.8, 74.2, 90, 35 };
		// Data for integer tests
		std::vector<int> btecIntVectData{ 70, 32, 104, 39, 12, 135, 77, 45, 55 };

	public:

		TEST_METHOD(Sum)
		{
			long double result = this->grader.sum(this->bscDoubleVectData);
			Assert::AreEqual(757.9, result, 0.001, L"Sum method did not total the double values correctly.");

			result = this->grader.sum(this->btecIntVectData);
			Assert::AreEqual(569, result, 0.001,  L"Sum method did not total the int values correctly.");


		}

		TEST_METHOD(Mean)
		{
			double result = this->grader.mean(this->bscDoubleVectData);
			Assert::AreEqual(63.158, result, 0.001, L"Mean method did not average the double values correctly.");

			result = this->grader.mean(this->btecIntVectData);
			Assert::AreEqual(63.222, result, 0.001, L"Mean method did not average the int values correctly.");

		}

		TEST_METHOD(Variance)
		{
			double result = this->grader.populationVariance(this->bscDoubleVectData, grader.mean(this->bscDoubleVectData));
			Assert::AreEqual(406.732, result, 0.01, L"The population variance method did not find the correct variance.");
		}

	};
}
