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
#include "TimeFormatMistake.h" 


using namespace std;

// Function to convert time from 24-hour notation to 12-hour notation

// using string to int ---> stoi(string_name.substr(starting_index, length_of_substring))
string time_converter(string time_24h){

    cout << "Enter time in 24-hour notation: ";
    cin >> time_24h;
    string time_12h;

    // Check if the time is correct format
    if (time_24h.length() != 5 || time_24h[2] != ':'){
        throw TimeFormatMistake("Invalid time format. Please enter time in exact 24-hour notation (HH:MM).");
    }

    int hour, minute_0, minute_1;
    try{
         hour = stoi(time_24h.substr(0,2)); // 0 is the starting index and 2 is the length of the substring
         minute_0 = stoi(time_24h.substr(3,1)); // 3 is the starting index and 1 is the length of the substring
         minute_1 = stoi(time_24h.substr(4,1));

    } catch (invalid_argument&){
        throw TimeFormatMistake("Invalid time format. Please enter time in exact 24-hour notation (HH:MM).");
    }

    if (hour < 0 || hour > 23 || minute_0 < 0 || minute_0 > 5 || minute_1 < 0 || minute_1 > 9){
        throw TimeFormatMistake("Invalid time format. Please enter time in exact 24-hour notation (HH:MM).");
    }

    // Check if the time is am or pm from 24 hour form
    //pm
    if (hour > 12){ 
        hour = hour - 12;
        time_12h = to_string(hour) + ":" + to_string(minute_0) + to_string(minute_1) + " PM";
    }

    //noon
    else if (hour == 12){
        hour = hour;
        time_12h = to_string(hour) + ":" + to_string(minute_0) + to_string(minute_1) + " PM";
    }

    //midnight
    else if (hour == 0){
        hour = 12;
        time_12h = to_string(hour) + ":" + to_string(minute_0) + to_string(minute_1) + " AM";
    }

    //am
    else{
        hour = hour;
        time_12h = to_string(hour) + ":" + to_string(minute_0) + to_string(minute_1) + " AM";
    }
return time_12h;
}

// Main program
int main(){
    string again;
    int a = 1;

    string time_24h;

    try {
            cout << time_converter(time_24h) << endl;
        } catch (TimeFormatMistake& e) {
            cout << "Error: " << e.what() << endl;
        }

    while (a == 1){
        cout << "Again (y/n) ";
        cin >> again;
        if (again == "y"){
            try {
            cout << time_converter(time_24h) << endl;
        } catch (TimeFormatMistake& e) {
            cout << "Error: " << e.what() << endl;
        }
        }
        else if (again == "n"){
            a = 0;
            cout << "End of program\n"; 
        }
    }
    return 0;
}
