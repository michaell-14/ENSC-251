/**
* @file Package.h
* @author MICHAEL LANGE
* @Date OCT 9 2024
* @version 1.0
* @section DESCRIPTION
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ MICHAEL LANGE ____ _____09/10/2024______________
//
// ____301580599 ____

#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iostream>

int main(){
    // Create a Package object
    Package package("Fedex", "123 Main St", "Los Angeles", "CA", "90001",
                     "Michael Lange", "456 Oak St", "San Francisco", "CA", "94101", 10.5, 0.50);

    // Create a TwoDayPackage object
    TwoDayPackage twoDayPackage("UPS", "456 Side St", "New York", "NY", "10001",
                                "Michael Lang", "101 Elm St", "Chicago", "IL", "60601", 15.0, 0.75, 5.00);

    // Create an OvernightPackage object
    OvernightPackage overnightPackage("DHL", "789 Back St", "Seattle", "WA", "98101",
                                      "Michael Lan", "303 Cedar St", "Boston", "MA", "02101", 5.5, 1.00, 0.25);
                            
     cout << "Standard Package Cost: $" << package.calculateCost() << endl;
     cout << "Two Day Package Cost: $" << twoDayPackage.calculateCost() << endl;
     cout << "Overnight Package Cost: $" << overnightPackage.calculateCost() << endl;

    return 0;
}
