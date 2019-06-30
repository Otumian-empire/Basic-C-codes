#include <stdio.h>

int main() {
    // // input
    // char grade, name[10];
    // int age;
    // float weight, height;

    // printf("enter grade: ");
    // grade = getchar();

    // printf("enter name: ");
    // // gets(name); produces error
    // scanf("%s", name);

    // printf("enter weight and height: ");
    // scanf("%f %f", &weight, &height);

    // // output
    // printf("your grade is: ");
    // putchar(grade);
    // printf("\n");

    // printf("your name is: ");
    // puts(name);
    // printf("\n");

    // printf("your weight is: %f\n", weight);
    // printf("your height is: %f\n", height);
    // printf("you weight and height sum up to: %f\n", weight + height);

    /*
    formats specifiers
        input
            char - %c
            int - %d
            float/double - %f
            *char or char[] (string) - %s
            hex - %x
            scientific - %e
        output - in general
            %[-][width].[precision]conversion_character
            %4.3d

            prinf("%4.3d", 1231.234343);
    */

    // printf("%6.3f\n", 1231.234343);
    // printf("%6.2f\n", 1231.234343);
    // printf("%4.1f\n", 1231.234343);
    // printf("%7.0f\n", 1231.234343);
    // printf("%8.4f\n", 1231.234343);

    // printf("%-2.3f\n", 1231.234343);
    // printf("%-3.2f\n", 1231.234343);
    // printf("%-4.1f\n", 1231.234343);
    // printf("%-1.0f\n", 1231.234343);
    // printf("%-9.4f\n", 1231.234343);

    // printf("%%\n");

    return 0;
}
