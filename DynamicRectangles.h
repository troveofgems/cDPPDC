//
// Created by dustinkgreco on 3/20/22.
//

#ifndef CCPPDC_DYNAMICRECTANGLES_H
#define CCPPDC_DYNAMICRECTANGLES_H

class DynamicRectangle
{
    public:
        DynamicRectangle();
        DynamicRectangle(double length, double width);
        double getLength() const;
        double getWidth() const;
        void setLength(double length);
        void setWidth(double width);
        double area() const;
        double perimeter() const;
    private:
        double length;
        double width;
};

#endif //CCPPDC_DYNAMICRECTANGLES_H
