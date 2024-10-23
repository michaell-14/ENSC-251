#include "pairs.h"
#include <iostream>
#include <vector>

using namespace std;

//calculations are like element wise operations

int main() {
    vector<Pairs> pairsList;
    int numPairs;

    cout << "Enter the number of pairs: ";
    cin >> numPairs;

    // Input pairs from the user
    for (int i = 0; i < numPairs; ++i) {
        Pairs p;
        cout << "Enter pair " << i + 1 << " in format (a, b): ";
        if (!(cin >> p)) {
            cerr << "Invalid input format!" << endl;
            return 1;  // Exit with error
        }
        pairsList.push_back(p);
    }

    cout << "\nYou entered the following pairs:" << endl;
    for (const auto& p : pairsList) {
        cout << p << endl;
    }

    // Perform operations on pairs if at least two pairs are entered
    if (numPairs >= 2) {

        Pairs result;
        Pairs p1 = pairsList[0];
        Pairs p2 = pairsList[1];

        //Addition 
        //expect (a1 + a2, b1 + b2)
        result = p1 + p2;
        cout << "\nResult of addition: " << result << endl;

        //Subtraction
        //expect (a1 - a2, b1 - b2)
        result = p1 - p2;
        cout << "\nResult of subtraction: " << result << endl;
        
        //Multiplication
        //expect (a1 * a2, b1 * b2)
        result = p1 * p2;
        cout << "\nResult of multiplication: " << result << endl;
             
        }
     else { 
        cout << "At least two pairs are required to perform operations!" << endl;
    }

    return 0;
}
