/**
* @file Student.h
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

#pragma once
#include <string>
#include <vector>

class Student{
    public:
        std::string firstname;
        std::string lastname;
        std::vector<int> grades;

        // Constructor
        Student(std::string firstname, std::string lastname, std::vector<int> grades);

        // Get functions
        std::string getFirstName() const;
        std::string getLastName() const;
        std::vector<int> getGrades() const;
};
