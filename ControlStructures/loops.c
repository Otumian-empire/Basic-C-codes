#include <stdio.h>

int main() {
    // loops

    // while loop

    // int count;
    // printf("Enter the count: ");
    // scanf("%d", &count);

    // while (count > 0) {
    //     printf("count is now, %d\n", count);
    //     count--;
    // }


    // int stop_on;
    // char *text;

    // printf("This program will terminate on zero entry..\n");

    // printf("enter a number: ");
    // scanf("%d", &stop_on);

    // while (stop_on) {
    //     printf("enter a text: ");
    //     scanf("%s", text);
    //     printf("%d:: %s\n", stop_on, text);
    //     printf("enter a number: ");
    //     scanf("%d", &stop_on);
    // }


    /* 
    ERROR IN THIS CODE
    char *message;
    int i = 1;
    printf("enter some text:\n");

    scanf("%s", message);
    while((message != NULL) || i < 10) {
        // if (message =! "")
        printf("%d:: d?| %s\n", i, message);
        i++;
        scanf("%s", message);
    } */


    // for loop

    // for (int i = 0, x = 10; i < x; i++, x -= i) {
    //     printf("The value of i = %d and the value of x = %d\n", i, x);
    // }


    // for (int x = 100; x > 0; x--) {
    //     printf("I am %d and i am greater than 0\n", x);
    // }


    // lift off program 1
    // int lift_off = 10;

    // while (lift_off >= 0) {
    //     printf("lift off in %d\n", lift_off);
    //     lift_off--;
    // }


    // // lift off program 2
    // int lift_off = 10;

    // printf("lift off in\n");
    // while (lift_off >= 0) {
    //     printf("%d\n", lift_off);
    //     lift_off--;
    // }

    // printf("God speed.. lift off!!\n");


    // lift off program 3
    // int lift_off;
    // printf("enter lift off time: ");
    // scanf("%d", &lift_off);

    // printf("lift off in\n");

    // while (lift_off > 0) {
    //     printf("%d\n", lift_off);
    //     lift_off--;
    // }

    // printf("God speed.. lift off!!\n");


    // nested for loop
    for (int x = 1; x <= 12; x++) {
        printf("multiplication table for %2d's\n", x);
        printf(":----------------------------:\n");

        for (int i = 1; i <= 12; i++) {
            printf("%d * %2d = %3d\n", x, i, x * i);
        }

        printf(":----------------------------:\n\n");
    }
    
    return 0;
}
