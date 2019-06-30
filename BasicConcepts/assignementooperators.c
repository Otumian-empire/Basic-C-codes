#include <stdio.h>

int main() {
    /*
    maths operators in C
    +, -, /, *, %

    precedence
    *, /, %
    +, -

    assignment operators
    +=, -=, *=, /=, %=
    */ 

    float radius, PI, area;
    radius = 24.45;
    PI = 3.14;
    area = PI * radius * radius;

    printf("The area of a circle of radius, %.2f is %.2f\n", radius, area);

    printf("Now we want to double the area\n");
    // printf("%f\n", area = area + area);
    printf("%f\n", area += area);

    return 0;
}
