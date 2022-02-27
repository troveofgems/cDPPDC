//
// Created by dustinkgreco on 2/27/22.
//

#include "Circle.h"
#include <math.h>

Circle::Circle()
{
    this->radius = 1.0;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return this->radius;
}

double Circle::getCircumference() const
{
    return this->radius * (2 * M_PI);
}

double Circle::getArea() const
{
    const double squaredRadius = this->radius * this->radius;
    return squaredRadius * M_1_PI;
}