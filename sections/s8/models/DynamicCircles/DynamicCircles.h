//
// Created by dustinkgreco on 3/20/22.
//

#ifndef CCPPDC_DYNAMICCIRCLES_H
#define CCPPDC_DYNAMICCIRCLES_H

class DynamicCircle
{
    public:
        // Constructors
        DynamicCircle();
        DynamicCircle(double radius);

        // Setters
        void setRadius(double radius);

        // Getters
        double getRadius() const;
        double getCircumference() const;
        double getArea() const;

    private:
        double radius;
};

#endif //CCPPDC_DYNAMICCIRCLES_H
