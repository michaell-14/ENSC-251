/**
* @file GradeManage.h
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
#include <vector>
#include <string>
#include "Student.h"

class GradesManage {
public:
    std::vector<Student> students;

    void addStudent(const std::string& firstname, const std::string& lastname, int numAssign, const std::vector<int>& grades);
    //^adds a student to the students vector with the given first name, last name, and grade
    bool studentExists(const std::string& firstname, const std::string& lastname);
    //^returns true if a student with the given first name and last name exists in the students vector
    //^returns false otherwise
};
