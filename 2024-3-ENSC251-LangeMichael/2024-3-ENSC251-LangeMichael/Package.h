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
#include <iostream>
#include <string>

#pragma once
using namespace std;

class Package {
  //data members for sender's information
  string sender_name;
  string sender_address;
  string sender_city;
  string sender_state;
  string sender_zip;

  //data members for recipient's information
  string recip_name;
  string recip_address;
  string recip_city;
  string recip_state;
  string recip_zip;

  protected:
    //protected data members for weight and cost per ounce
    double weight; // weight of package in ounces
    double cost_per_ounce;

  public:
    //constructor
    Package(string s_name, string s_address, string s_city, string s_state, string s_zip, string r_name, string r_address, string r_city, string r_state, string r_zip, double w, double cpo):
    sender_name(s_name), sender_address(s_address), sender_city(s_city), sender_state(s_state), sender_zip(s_zip), recip_name(r_name), recip_address(r_address), recip_city(r_city), recip_state(r_state), recip_zip(r_zip), weight(w), cost_per_ounce(cpo) {
      weight = (w > 0) ? w : 0; // makes sure weight is positive; if number < 0 --> sets weight to 0
    }
virtual double calculateCost() { //virtual function to calculate cost of package; will be overridden in derived classes
    return weight * cost_per_ounce;
  }

};
