/*
pointers.c 
created on Tuesday, 2019, 25 June
By Otumian
*/

/* 
&varName - allows one to put value at the variable location/address
Just as in scanf("%format", &varName);
As such &varName becomes the variable location of varName
Memory (address) location are hex-values

A pointer is a variable that contains the address of another variable. 
In other words, it "points" to the location assigned to a variable 
and can indirectly access the variable.
creation:
    pointer_type *identifier;
    int * num, char *name - this is used for strings
*/
#include <stdio.h>

void swap(int *, int *);
int main()
{
    // int int_val = 0;
    // printf("Enter an int val: ");
    // scanf("%d", &int_val);

    // printf("you entered %d\nThe memory address is %X\n", int_val, int_val);

    // int x = 12;
    // int *addressOfX = &x;
    // printf("%p\n", &x); // Print address of x
    // printf("%p\n", addressOfX); // Print address of x

    // int x = 3;
    // int *ptr = &x;

    // printf("The value of x is %d\n", x);
    // printf("The pointer, ptr points to %p\n", ptr);
    // printf("The value of ptr is %d\n", *ptr);

    // pointers and arrays
    // use a pointer to loop through an array
    // int arr[5] = {1, 2, 3, 10, 5};

    // int *ptr = arr;

    // for (int i = 0; i < 5; i++) {
    //     printf("%d is %d\n", i, *(ptr + i));
    //     printf("%d is %d\n", i, ptr[i]);
    //     printf("%d is %d\n", i, arr[i]);
    //     printf("%d is %d\n", i, *(arr + i));
    // }

    // char name[15] = "hello there";

    // for (int i = 0; i < 15; i++) {
    //     printf("%c", name[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    // printf("%d is %d\n", i, *(ptr));
    // ptr++;
    /*
        // creates error
        printf("%d is %d\n", i, *(arr));
        arr++;
        */
    // }

    int x, y;
    x = 20;
    y = 23;

    printf("x is %d and y is %d\n", x, y);
    swap(&x, &y);
    printf("after the swapping, x is %d and y is %d\n", x, y);

    return 0;
}

// void test(unsigned int k);

// int main() {
//   int i = 0;

//   printf("The address of i is %u\n", &i);
//   test(i);
//   printf("The address of i is %u\n", &i);
//   test(i);

//   return 0;
// }

// void test(unsigned int k) {
//   printf("The address of k is %u\n", &k);
// }

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}