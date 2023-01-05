#pragma once
// Ryan Tempest 27th December 2022
// SA01
#include <string>
#include <vector>
#include <map>

struct classifiedAssessmentGrade {
	int grade;
	int maxGrade;
};

struct weightedAssessmentGrade {
	double grade;
	double weighting;
};

// Class specification

class Grade
{
private:

protected:

public:
	// Sample 
	double add(double dataItem1, double dataItem2);
	double subtract(double dataItem1, double dataItem2);


	// 3rd Methods

	// 2.2 Methods


	// 2.1 Methods


	// 1st Methods


};

// Class Implementation

// Sample code passed test
double Grade::add(double dataItem1, double dataItem2) {
	return dataItem1 + dataItem2;
}

// Sample code failed test (error in the code)
double Grade::subtract(double dataItem1, double dataItem2) {
	// Uncomment the line below to fix the failed test
	// return dataItem1 - dataItem2;
	return dataItem1 - dataItem1;
	
}
