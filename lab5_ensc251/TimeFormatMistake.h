/**
* @file time.cpp
* @author MICHAEL LANGE
* @Date 29/10/2024
* @version 1.0
* @section DESCRIPTION
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ Michael Lange ____ _____29/10/2024______________
//
// ____ 301580599 ______
//

#include <iostream>
#include <string>
#include <stdexcept>   

using namespace std;

//invalid_argument is a class in the standard library that is used to handle invalid arguments (inputs)
class TimeFormatMistake : public invalid_argument { 

public:
    TimeFormatMistake(const string& message) : invalid_argument(message) {}
};

