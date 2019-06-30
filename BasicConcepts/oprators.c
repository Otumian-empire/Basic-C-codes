#include <stdio.h>

int main() {
    /*
    maths operators in C
    +, -, /, *, %

    precedence
    *, /, %
    +, -
    */ 

    float radius, PI, area;
    radius = 24.45;
    PI = 3.14;
    area = PI * radius * radius;

    printf("The area of a circle of radius, %.2f is %.2f\n", radius, area);

    return 0;
}
