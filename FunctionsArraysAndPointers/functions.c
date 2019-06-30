/*
functions.c 
created on Monday, 2019, 24 June
By Otumian
*/

/*
A function is a:
    a block of code that performs a (specific) task
    is reusable
    makes a program easier to test
    can be modified without changing the calling program

Creation of a function
    return_type function_name(return_types parameter_name) {
        logic here
        ...
        return return_type;
    }

variable scope:
    global - declared outside all functions
    local - declared inside a function and destroyed when exited
    static - like a local, but retains its value even after exit

recursive function
    is a function that calls itself
*/

#include <stdio.h>

// function declarations (definitions or prototypes)
void sayHello();
int perfectSquareOf(int x);
int sumOf(int x, int y);
void staticVarOf();
int factorialOf(int x);
int recursiveSumOf(int x);

int main() {

    // calling functions
    // sayHello();

    // printf("The square of %d is %d\n", 3, perfectSquareOf(3));

    // printf("The sum of %d and %d is %d\n", 2,3, sumOf(2, 3));

    // for (int i = 0; i < 5; i++) {
    //     // call staticVarOf
    //     staticVarOf();
    // }
    
    printf("The factorial of %d is %d\n", 5, factorialOf(5));
    printf("The recursive sum of %d is %d\n", 5, recursiveSumOf(5));

    return 0;
}

// function implementations

// a function that outputs hello to the stdin
void sayHello() {
    printf("hello\n");
}

// a function that returns the square of an integer value
int perfectSquareOf(int x) {
    return x * x;
}

// a function that returns the sum of two integer values, x and y
int sumOf(int x, int y) {
    return x + y;
}

/* 
a function that uses a static variable to keep count of 
the number of times the function is called
*/
void staticVarOf() {
    static int staticvar = 1;
    printf("The static variable has been called %d times\n", staticvar);
    staticvar++;
}

// a function that returns the factorial of an integer value x
int factorialOf(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }

    return x * factorialOf(x -1);
}

// a function that returns the recursive sum of an integer value x
int recursiveSumOf(int x) {
    if (x > 0) {
        return x + recursiveSumOf(x -1);
    }
}
