#include <stdio.h>

int main() {
    // conditionals

    // if and else statement, relational operators
    // printf("Enter a number: ");
    // int num;
    // scanf("%d", &num);

    // if (num > 4) {
    //     num += 21;
    //     printf("We have added 21 to num, %d\n", num);
    // } else {
    //     num *= 2;
    //     printf("since we had a number less than 4, we multiplied it by 2, %d\n", num);
    // }

    // printf("enter another number: ");
    // int p;
    // scanf("%d", &p);

    // if (p) {
    //     printf("you entered, %d\n", p);
    // } else {
    //     printf("you entered nothing\n");
    // }

    // relation operators
    /* >, <, ==, =!, >=, <= */
    // printf("Now the current value of num is: %d\n", num);

    // if (num < 30) {
    //     printf("num < 30\n");
    // } else if {
    //     printf("num > 30\n");
    // } else {
        // printf("num == 30\n");
    // }
    
    // ternary ?:
    // int num1, num2;
    // printf("enter num1: ");
    // scanf("%d", &num1);

    // num2 = (num1 % 3 == 0)? (num1 / 3) : (num1 + 3);

    // printf("num1: %d\nnum2: %d\n", num1, num2);


    // switch statement
    // int my_pi;
    // printf("enter your number: ");
    // scanf("%d", &my_pi);

    // switch(my_pi) {
    //     case 3:
    //         printf("hello, also thought of %d..\n", my_pi);
    //         break;
    //     case 143:
    //         printf("I know a PI like, %d\n", my_pi);
    //         break;
    //     default:
    //         printf("Hello stranger..\n");
    //         break;
    // }

    // logicals
    /*
    AND - &&
    OR - ||
    NOT - !
    */

    // the leap year
    // year is divisible by 4 but not 100 or divisible by 400
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year..\n", year);
    } else {
        printf("sorry man.. bro.. %d is not a leap year..\n", year);
    }

    return 0;
}
