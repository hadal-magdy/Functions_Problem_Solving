#include <stdio.h>
#define PI 3.14

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main (){

    double radius = 3;
    double diameter = getDiameter(radius);
    double circumference = getCircumference(radius);
    double area = getArea(radius);
    printf("Diameter = %.2f units\n",diameter);
    printf("Circumference = %0.2f units\n",circumference);
    printf("Area = %.2f units\n",area);
    return 0;
}

double getDiameter(double radius){

    return radius*2;
}
double getCircumference(double radius){

    return 2*PI*radius;
}
double getArea(double radius){

    return radius*radius*PI;
}
