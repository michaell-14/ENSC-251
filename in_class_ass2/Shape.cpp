#include "Shape.h" 
#include <iostream>

Shape::Shape() {
    name="";
}

Shape::Shape(std::string name) {
    this->name=name;
}

std::string Shape::getName() {
    return this->name;
}

void Shape::setName(std::string newName) {
    this->name = newName;
}
