/*
arrays.c 
created on Monday, 2019, 24 June
By Otumian
*/

/*
An array
    is a data structure
    stores a collection of values of the same type in a contiguous memory
    is not dynamic in size - check arrayList or linkedList

Array creation
    array_type array_name[array_size] = {array_values, seperated by comma};

Access the elements of an array by index(subscript)
                   [0, 1, 2, ..]
    int array[3] = {3, 6, 12}

    array[0] => 3
    array[1] => 6
    array[2] => 12
    ...

Change the value of an array using the assignment statement and the index
    array[0] = 32;
    reassigns the first element in the array to 32.

For X size of an array, if values of size, Y, where Y < Z, the missing 
    values will be set to 0

Multi-dimensional array
    an array within an array
    int ma[row][col] = {...}
*/

#include <stdio.h>

int main() {
    
    // int years[5] = {2012, 2013, 2014, 2015, 2016};

    // // looping through the array
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", years[i]);
    // }

    // // finding the sum of elements in the array
    // int intArray[8] = {1,2,3,4,5,6,7,8};
    // int arraySum = 0;

    // for (int i = 0; i < 8; i++) {
    //     arraySum += intArray[i];
    // }

    // printf("The sum of elements in the array is %d\n", arraySum);

    // printf("Creating a dynamic array of even numbers..\n");
    // int dynamicArray[10];

    // for (int i = 0; i < 10; i++) {
    //     dynamicArray[i] = i * 2;
    // }

    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", dynamicArray[i]);
    // }

    int ma[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int row = 0; row < 2; row++) {
        printf("{");
        for (int col = 0; col < 2; col++) {
            printf(" %d", ma[row][col]);
        }
        printf(" }\n");
    }

    return 0;
}
