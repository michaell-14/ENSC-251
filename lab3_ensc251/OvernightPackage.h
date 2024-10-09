/**
* @file TwoDayPackage.h
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

#pragma once 
#include "Package.h"

class OvernightPackage: public Package { // OvernightPackage is a derived class of Package; syntax is class Derived : AccessSpecifier Parent
  double fee_per_oz; //fee per ounce
  public:
    OvernightPackage(string s_name, string s_address, string s_city, string s_state, string s_zip, string r_name, string r_address, string r_city, string r_state, string r_zip, double w, double cpo, double fpo):
    Package(s_name, s_address, s_city, s_state, s_zip, r_name, r_address, r_city, r_state, r_zip, w, cpo), fee_per_oz(fpo) {
      
      fee_per_oz = (fpo > 0) ? fpo : 0; // makes sure flat_fee is positive

    }
  double calculateCost() override { // Overridden function to calculate cost of package
    return weight * (cost_per_ounce + fee_per_oz);
  }
};
