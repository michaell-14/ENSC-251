/**
* @file bookData.h
* @author MICHAEL LANGE
* @Date 05/11/2024
* @version 1.0
* @section header file for bookData class
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ MICHAEL LANGE ____ _____05/11/2024______________
//
// ____ 301580599 ______
//

#pragma once
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class bookData {

    public:
        string author;
        string title;
        string date;

    //constructor
    bookData(string a, string t, string d): author(a), title(t), date(d) {} //initializes data members
    bookData(): author(""), title(""), date("") {} //default constructor initializes data members to empty strings

    //overloaded operator
    bool operator<(const bookData& other) const{ //overloads < operator
        string author1 = author;
        string author2 = other.author;

        for (size_t i = 0; i < author1.length(); i++){
            author1[i] = tolower(author1[i]); //converts all characters to lowercase, so that the comparison is case-insensitive
        }

        for (size_t i = 0; i < author2.length(); i++){ //size_t is an unsigned integer type
            author2[i] = tolower(author2[i]);
        }

        return (author1 < author2); //compares the two strings
    }
};
