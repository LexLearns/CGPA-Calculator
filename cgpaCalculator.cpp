#include "cgpaCalculator.h"
#include <iostream>
#include <string>
#include <iomanip>

cgpaCalculator::cgpaCalculator(std::string name, double percentage) {
	this->name = name;
	this->percentage = percentage;
}

void cgpaCalculator::setDetail(std::string name = "no Name", double percentage = 0){
	this->name = name;
	this->percentage = percentage;
}

void cgpaCalculator::getDetail() {
	getCgpa();
	std::cout<<std::setprecision(3);
	std::cout<<"Name: "<<name<<std::endl;
	std::cout<<"Percentage: "<<percentage<<std::endl;
	std::cout<<"CGPA: "<<cgpa<<std::endl;
}

void cgpaCalculator::getCgpa() {
       cgpa = this->percentage/9.5;
}       
