/**
 * @file ShippingContainer.h
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
#pragma once
#include <string>

class shippingContainer {
  public: int containerID;

  virtual~shippingContainer() {} // Virtual destructor to allow derived classes to be destructed properly

  virtual void setID(int ID) {
    containerID = ID;
  }

  virtual int getID() {
    return containerID;
  }

  // Virtual function for manifest (to be overridden in derived classes)
  virtual std::string getManifest() const {
    return "";
  }
};
