/**
 * @file RFIDShippingContainer.h
 * @author MICHAEL LANGE
 * @Date OCT 10 2024
 * @version 1.0
 * @section DESCRIPTION
 */
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// _____ MICHAEL LANGE ____ _____10/10/2024______________
//
// ____301580599 ____
#include "shippingContainer.h"

#include <vector>

#include <map>

#include <sstream>

#pragma once

class RFIDShippingContainer: public shippingContainer {
  public: void setID(int id) override {
    containerID = id;
  }

  int getID() override {
    return containerID;
  }

//addItem function to add items to the container; also increments the itemCounter map
  void addItem(const std::string & item) {
    items.push_back(item);
    if (itemCounter.find(item) != itemCounter.end()) {
      itemCounter[item]++;
    } else {
      itemCounter[item] = 1;
    }
  }

  //plural function to return the plural form of a word based on the count
  std::string plural(int count) const {
    return count > 1 ? "s" : "";
  }
  //getManifest function to return the manifest of the container
  std::string getManifest() const override {
    std::ostringstream manifest;
    for (const auto & pair: itemCounter) {
      manifest << pair.second << " crate" << plural(pair.second) << " of " << pair.first << ". ";
    }
    std::string result = manifest.str();
    if (!result.empty()) {
      result.pop_back(); // Remove the last space
      result.pop_back(); // Remove the last semicolon
    }
    return result;
  }
  private: 
  int containerID;
  std::vector < std::string > items; // Vector to store the items in the container
  std::map < std::string, // Map to store the count of each item in the container
  int > itemCounter; // Key: item name, Value: count of items
};
