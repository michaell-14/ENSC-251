#include <iostream>
#include <string>
#include "Car.h"

int main() {
  Car myCar(2008, "Mazda");

  for (int i = 0; i < 7; i++) { // Accelerate 7 times
    myCar.accelerate();
    std::cout << "Speed: " << myCar.getSpeed() << std::endl;
  }

  for (int i = 0; i < 5; i++) { // Brake 5 times
    myCar.brake();
    std::cout << "Speed: " << myCar.getSpeed() << std::endl; 
  }

  return 0;
}
