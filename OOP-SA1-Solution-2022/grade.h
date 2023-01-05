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
	
	// sum methods 
	long double sum(const std::vector<double>&);
	long double sum(const std::vector<int>&);

	// mean + population variance methods
	double mean(const std::vector<double>&);
	double mean(const std::vector<int>&);
	double populationVariance(const std::vector<double>&, double mean);

	// 2.2 Methods


	// 2.1 Methods


	// 1st Methods


};

// Class Implementation

long double Grade::sum(const std::vector<double>& values) {
	long double Total = 0;
	for (int sumCounter = 0; sumCounter < values.size(); sumCounter++)
	{
		Total += values[sumCounter];
	}
	return Total;
}
long double Grade::sum(const std::vector<int>& values) {
	long double Total = 0;
	for (int sumCounter = 0; sumCounter < values.size(); sumCounter++)
	{
		Total += values[sumCounter];
	}
	return Total;
}
double Grade::mean(const std::vector<double>& values) {
	double Total = 0;
	for (int meanCounter = 0; meanCounter < values.size(); meanCounter++)
	{
		Total += values[meanCounter];
	}
	Total = Total / values.size();
	return Total;
}
double Grade::mean(const std::vector<int>& values) {
	double Total = 0;
	for (int meanCounter = 0; meanCounter < values.size(); meanCounter++)
	{
		Total += values[meanCounter];
	}
	Total = Total / values.size();
	return Total;
}
double Grade::populationVariance(const std::vector<double>& values, double mean) {
	double Totalmean = Grade::mean(values);
	double popvariance = 0;
	double holder = 0;
	for (int varianceCounter = 0; varianceCounter < values.size(); varianceCounter++)
	{
		holder = values[varianceCounter] - Totalmean;
		holder = holder * holder;
		popvariance += holder;
	}
	popvariance = popvariance / values.size();
	return popvariance;
}

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
