#include <iostream>
#include "cgpaCalculator.h"

int main() {
	cgpaCalculator student("Mike", 59.8);
	student.getCgpa();
	student.getDetail();
	return 0;
}
