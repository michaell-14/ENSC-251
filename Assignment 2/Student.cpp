/**
* @file Student.cpp
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

#include "Student.h"

// Constructor
Student::Student(std::string firstname, std::string lastname, std::vector<int> grades) 
: firstname(firstname), lastname(lastname), grades(grades) {}
//this format is silly, but more readable than on one line

// Get functions
std::string Student::getFirstName() const {
    return firstname;
}

std::string Student::getLastName() const {
    return lastname;
}

std::vector<int> Student::getGrades() const {
    return grades;
}
