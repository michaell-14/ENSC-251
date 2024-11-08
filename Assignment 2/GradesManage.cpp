/**
* @file GradeManage.cpp
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

#include "GradesManage.h"
#include <stdexcept>
#include <algorithm>

void GradesManage::addStudent(const std::string& firstName, const std::string& lastName, int numAssignments, const std::vector<int>& grades) {
    if (numAssignments < 0) {
        throw std::invalid_argument("Number of assignments cannot be less than 0.");
    }
    for (const auto& grade : grades) {
        if (grade < 0) {
            throw std::invalid_argument("Assignment score cannot be less than 0.");
        }
        if (grade > 100) {
            throw std::invalid_argument("Assignment score cannot exceed 100.");
        }
    }
    if (studentExists(firstName, lastName)) {
        throw std::invalid_argument("Student already exists.");
    }
    students.emplace_back(firstName, lastName, grades);
}

bool GradesManage::studentExists(const std::string& firstName, const std::string& lastName) {
    return std::any_of(students.begin(), students.end(), [&](const Student& student) {
        return student.getFirstName() == firstName && student.getLastName() == lastName;
    });
    //any_of returns true if the lambda function returns true for any element in the students vector
    //lambda functions are like anonymous functions in python
    
}
