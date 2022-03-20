//
// Created by dustinkgreco on 3/20/22.
//

#include "DynamicRectangles.h"

DynamicRectangle::DynamicRectangle() {
    this->length = 1.0;
    this->width = 1.0;
}

DynamicRectangle::DynamicRectangle(double length, double width)
{
    this->length = length;
    this->width = width;
};

void DynamicRectangle::setLength(double length)
{
    this->length = length;
}

void DynamicRectangle::setWidth(double width)
{
    this->width = width;
}

double DynamicRectangle::getLength() const
{
    return length;
}

double DynamicRectangle::getWidth() const
{
    return width;
}

double DynamicRectangle::area() const
{
    return length * width;
}

double DynamicRectangle::perimeter() const
{
    return (2 * length) + (2 * width);
}