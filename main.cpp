#include <iostream>
#include "cgpaCalculator.h"
#include <string>
#include <vector>

int main() {
	cgpaCalculator student;
	std::vector<cgpaCalculator> studentList;
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
				std::cin.ignore(255, '\n'); // This flushes the buffer
				std::cout<<"Enter percentage: ";
				std::cin>>percentage;
				std::cin.clear(); // This cleans the buffer if a character is entered in place of an int
				std::cin.ignore(100, '\n'); // Flushes the buffer
				student.setDetail(name, percentage);
				studentList.push_back(student);
				break;
			case 2:
				if(!studentList.size()){
					std::cout<<"\nNo data avaiable. Please enter student data\n";
				}
				else {
					for(int i = 0; i < studentList.size(); ++i){
						studentList.at(i).getDetail();
					}
				}
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
