#pragma once
#include <string>

class cgpaCalculator {
	private:
		std::string name;
		double percentage;
		double cgpa;

	public:
		cgpaCalculator(std::string name, double percentage);
		void getDetail();
		void getCgpa();
};
