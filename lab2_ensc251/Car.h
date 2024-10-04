#pragma once

#include <string>

class Car {
  private: int m_yearModel; // Holds the car's year model
  std::string m_make; // Holds the car's make
  int m_speed; // Holds the car's current speed

  public:
    // Constructor: initializes yearModel and make, sets speed to 0
    Car(int year,
      const std::string & carMake);

  // Accessor functions
  int getYearmodel();
  std::string getMake();
  int getSpeed();

  // Member functions to accelerate and brake
  void accelerate();
  void brake();
};


