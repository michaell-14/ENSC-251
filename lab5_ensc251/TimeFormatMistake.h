#include <iostream>
#include <string>
#include <stdexcept>   

using namespace std;

//invalid_argument is a class in the standard library that is used to handle invalid arguments (inputs)
class TimeFormatMistake : public invalid_argument { 

public:
    TimeFormatMistake(const string& message) : invalid_argument(message) {}
};

