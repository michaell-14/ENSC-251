#pragma once 
#include "Shape.h"

class Circle : public Shape {
    public: 
        Circle();
        Circle(int theRadius);
        void setRadius(int newRadius);
        double getRadius();
        virtual double getArea();
    private:
        int radius;
};
