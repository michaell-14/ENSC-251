/**
* @file main.cpp
* @author MICHAEL LANGE
* @Date 05/11/2024
* @version 1.0
* @section main file for bookData class, contains the main function
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ MICHAEL LANGE ____ _____05/11/2024______________
//
// ____ 301580599 ______
//

#include <iostream>
#include "bookData.h"

using namespace std;


int main(){
 vector<bookData> bookDataVector; //vector to store bookData objects

    int select = 0;
    while (true){
        cout << "------------------" << endl;
        cout << "Select from the following options: " << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Display all books" << endl;
        cout << "3. Exit" << endl;
        cin >> select;
        cin.ignore(); //ignores the newline character left in the input  

        //this statement will add a book to the vector through user input
        if (select == 1){
            cout << "------------------" << endl;
            string a_author, a_title, a_date;
            cout << "Enter title: " << endl;
            getline(cin, a_title); // Use getline instead of cin to get the entire line
            cout << "Enter author (lastname, firstname): " << endl;
            getline(cin, a_author); 
            cout << "Enter date (year): " << endl;
            getline(cin, a_date); 
            bookDataVector.push_back(bookData(a_author, a_title, a_date)); //.push_back == .append in python
        }
        //this statement will display the books in the vector in ascending name order using the overloaded operator and sort
        else if (select == 2){
            cout << "------------------" << endl;
            sort(bookDataVector.begin(), bookDataVector.end()); //sorts the vector in ascending order
            for (size_t i = 0; i < bookDataVector.size(); i++){ 
                cout <<"Book " << i+1 << ": " << endl;
                cout << "Author: " << bookDataVector[i].author << ". " << bookDataVector[i].title << ". " << bookDataVector[i].date << "."<< endl;
            }

        //this statement will exit the program
        } else if (select == 3){
            cout << "------------------" << endl;
            break;
        //this statement will display an error message if the user inputs an invalid selection
        } else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}

