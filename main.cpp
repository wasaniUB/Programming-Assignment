#include "student.h"
#include <iostream>
using namespace std;

int main() {
    
    Student student1("Wasani Castillo");

    student1.addGrade(92.50);
    student1.addGrade(100.00);
    student1.addGrade(68.00);
    student1.addGrade(80.50);

    student1.printDetails();

    return 0;
}