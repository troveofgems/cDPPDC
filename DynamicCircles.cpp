//
// Created by dustinkgreco on 3/20/22.
//

#include "DynamicCircles.h"
#include <math.h>

DynamicCircle::DynamicCircle()
{
    this->radius = 1.0;
}

DynamicCircle::DynamicCircle(double radius)
{
    this->radius = radius;
}

void DynamicCircle::setRadius(double radius)
{
    this->radius = radius;
}

double DynamicCircle::getRadius() const
{
    return this->radius;
}

double DynamicCircle::getCircumference() const
{
    return this->radius * (2 * M_PI);
}

double DynamicCircle::getArea() const
{
    const double squaredRadius = this->radius * this->radius;
    return squaredRadius * M_1_PI;
}

