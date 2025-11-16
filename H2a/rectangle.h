#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    double getArea();
    double getCircum();

    void setWidth(double newWidth);
    void setHeight(double newHeight);

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
