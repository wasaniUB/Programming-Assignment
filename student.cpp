#include "student.h"
#include <iostream>
using namespace std;


Student::Student(string studentName){
    name = studentName;
}


void Student::addGrade(double grade){
    grades.push_back(grade);
}


double Student::calculateAverage(){
        if (grades.empty()){  
          return 0.0;        
       }

         double sum = 0.0;
           for (int i = 0; i < grades.size(); i++){  
            sum += grades[i];
       }
     double average = sum / grades.size();
        
   return average;  
}


void Student::printDetails() {
    cout << "Student's Name: " << name << endl;
    cout << " Grade: " << calculateAverage() << endl;
}


