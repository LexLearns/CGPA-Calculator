#include <iostream>
#include "cgpaCalculator.h"
#include <string>

int main() {
	cgpaCalculator student;
	std::string name;
	double percentage;
	std::cout<<"******************************************"<<std::endl;
	std::cout<<"              CGPA Calculator             "<<std::endl;
	std::cout<<"******************************************"<<std::endl;
	int choice;
	do{
		std::cout<<std::endl;
		std::cout<<"1: To Enter New Student Data\n2. To View Details\n3. To Exit\n";
		std::cin>>choice;
		switch(choice){
			case 1:
				std::cout<<std::endl;
				std::cout<<"Enter name: ";
				std::cin>>name;
				std::cout<<"Enter percentage: ";
				std::cin>>percentage;
				student.setDetail(name, percentage);
				student.getCgpa();
				break;
			case 2:
				std::cout<<std::endl;
				student.getDetail();
				break;
			case 3:
				choice = 0;
				break;
			default:
				std::cout<<"Enter a valid number"<<std::endl;
		}
	}while(choice);
	std::cout<<"Bye!\n";
	return 0;
}
