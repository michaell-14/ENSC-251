/**
* @file main.cpp
* @author MICHAEL LANGE
* @Date  06/11/2024
* @version 1.0
* @section DESCRIPTION
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ MICHAEL LANGE ____ _____06/11/2024______________
//
// ____ 301580599 ______

/* ENABLE EXCEPTION CASES:
1. Enter a negative number for the number of assignments 
2. Enter a grade less than 0
3. Enter a grade greater than 100
4. Enter first and last name of student that already exists in vector
*/

/* EXAMPLE INPUT in console:
make run <-- to run the program
Enter first name: Michael
Enter last name: Lange
Enter number of assignments: 3
Enter grade for assignment 1: 90
Enter grade for assignment 2: 80
Enter grade for assignment 3: 70

Would you like to add another student? (Y/n): Y
Enter first name: John

Enter last name: Doe
Enter number of assignments: 2
Enter grade for assignment 1: 70
Enter grade for assignment 2: 80

Would you like to add another student? (Y/n): n

OUTPUT:
----------------------------
Student 1: Michael Lange
Grade for Assign 1: 90
Grade for Assign 2: 80
Grade for Assign 3: 70
----------------------------
Student 2: John Doe
Grade for Assign 1: 70
Grade for Assign 2: 80
*/

#include <iostream>
#include <limits> //special library for cin.ignore and numeric_limits
#include "GradesManage.h"

int main(){
    GradesManage gradesManage; //create an instance of the GradesManage class
    std::string firstname, lastname;
    int numAssign;
    std::vector<int> grades;
    std::string add;

   
    while (true) {
        try {
            // Input first name
            while (true) {
                std::cout << "Enter first name: ";
                std::cin >> firstname;
                std::cout << "Enter last name: ";
                std::cin >> lastname;
                if(gradesManage.studentExists(firstname, lastname)){
                    std::cin.clear(); // Clear the error flag on cin
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the input line
                    //std::numeric_limits<std::streamsize>::max() is the maximum value of the streamsize type
                    std::cerr << "Student already exists. Please try again." << std::endl;
                }
            
                else {
                    break;
                }
            }

            // Input number of assignments
            while (true) {
                std::cout << "Enter number of assignments: ";
                std::cin >> numAssign;
                if (std::cin.fail() || numAssign <= 0) {
                    std::cin.clear(); // Clear the error flag on cin
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid input for number of assignments. Please try again." << std::endl;
                } else {
                    break;
                }
            }

            grades.clear(); // Clear the grades vector so we start fresh

            // Input grades for each assignment
            for (int i = 0; i < numAssign; i++) {
                while (true) {
                    int grade;
                    std::cout << "Enter grade for assignment " << i + 1 << ": ";
                    std::cin >> grade;
                    if (std::cin.fail() || grade < 0 || grade > 100) {
                        std::cin.clear(); // Clear the error flag on cin
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cerr << "Invalid input for grade. Please enter a value between 0 and 100." << std::endl;
                    } else {
                        grades.push_back(grade); // Add the grade to the grades vector
                        break;
                    }
                }
            }

            gradesManage.addStudent(firstname, lastname, numAssign, grades); // Add the student to the gradesManage object, storing their associated grades

            std::cout <<"Would you like to add another student? (Y/n): \n";
            std::cin >> add;

            if (add[0] == 'n' || add[0] == 'N'){
                for (size_t i = 0; i<gradesManage.students.size(); i++){
                    std::cout <<"----------------------------" << std::endl;
                    //gradesManage.students is a vector of Student objects from gradesManage.h
                    std::cout << "Student " << i+1 << ": " << gradesManage.students[i].getFirstName() 
                    << " " << gradesManage.students[i].getLastName() << std::endl;   //i did this so its easier to read on one screen

                    for (size_t j=0; j < gradesManage.students[i].getGrades().size(); j++){
                        std::cout << "Grade for Assign "<<j+1 <<": " << gradesManage.students[i].getGrades()[j] << std::endl; //print all the grades
                    }

                    }
                break;
            }   

        } catch (std::invalid_argument& e) {
            std::cerr << "Error:" << e.what() << " Please try again.\n"; //print the error message
        }

    }
    return 0;
}
