#include "Car.h"  // Includes the Car header file
#include <iostream> 

Car::Car(int year,
  const std::string & carMake): m_yearModel(year), m_make(carMake), m_speed(0) {}
// Implementation of the accessor functions
int Car::getYearmodel() {
  return m_yearModel; // Returns the car's year model
}

std::string Car::getMake() {
  return m_make; // Returns the car's make
}

int Car::getSpeed() {
  return m_speed; // Returns the car's current speed
}

// Implementation of acceleration
void Car::accelerate() {
  m_speed += 5;
}

// Implementation of the brake method (subtracts 5 from speed, can't go below 0)
void Car::brake() {
  if (m_speed >= 5) {
    m_speed -= 5;
  } else {
    m_speed = 0; // Prevents speed from going below 0
    std::cout << "Car is stationary\n";
  }
}
