#include <stdio.h>
#include "main.h"
#include "math.h"


double area(double radius) {
    return M_PI * radius * radius;
}

double diameter(double radius) {
    return 2 * radius;
}

double circumference(double radius) {
    return diameter(radius) * M_PI ;
}

quadratic quadratic_equation(double a, double b, double c) {
    quadratic roots;
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        roots.x1 = 0;
        roots.x2 = 0;
    } else {
        roots.x1 = (-b + sqrt(delta)) / (2 * a);
        roots.x2 = (-b - sqrt(delta)) / (2 * a);
    }
    return roots;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(void) {
    // I'm avoiding using scanf because this is a simple code.
    
    // Calculate area of a circle.
    double radius = 5;
    
    printf("Area of a circle with radius %f: %f \n", radius, area(radius));

    // Calculate diameter of a circle.
    printf("Diameter of a circle with radius %f: %f \n", radius, diameter(radius));

    // Calculate circumference of a circle.
    printf("Circumference of a circle with radius %f: %f \n", radius, circumference(radius));

    // Calculate roots of a quadratic equation.
    quadratic roots = quadratic_equation(1, 2, 1);
    printf("Roots of x^2 + 2x + 1: %f, %f \n", roots.x1, roots.x2);

    // Swap two integers.
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d \n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d \n", a, b);
    
}


