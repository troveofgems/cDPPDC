//
// Created by dustinkgreco on 2/27/22.
//

#ifndef CCPPDC_CIRCLE_H
#define CCPPDC_CIRCLE_H

class Circle {
    public:
        // Constructors
        Circle();
        Circle(double radius);

        // Setters
        void setRadius(double radius);

        // Getters
        double getRadius() const;
        double getCircumference() const;
        double getArea() const;

    private:
        double radius;
};

#endif //CCPPDC_CIRCLE_H
