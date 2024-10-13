/**
 * @file ManualShippingContainer.h
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

#pragma once

class ManualShippingContainer: public shippingContainer {
  public: void setID(int id) override {
    containerID = id;
  }

  int getID() override {
    return containerID;
  }

  void setManifest(const std::string & manifest) {
    this -> manifest = manifest; // pointer to the manifest
  }

  std::string getManifest() const override {
    return manifest;
  }

  private: 
  int containerID;
  std::string manifest;
};
