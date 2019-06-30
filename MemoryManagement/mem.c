/*
mem.c 
created on Sunday, 2019, 30 June
By Otumian
*/

/*
memory management is crucial in C
a memory is automatically alloted to any var created using a 
    basic data type - called the "stack"
use the size_of function to know the size of a type
dynamic memory allocation is the process of allocating and freeing
    memory as needed. this is done using pointers - the heap.

stack - automatic memory management
heap - dynamic memory management

memory management functions - stdlib.h
    grants access to:
        malloc(bytes) - returns a ptr to a contiguous block of memory
            that is of size "byte"
        calloc(num_items, item_size) - returns a ptr to a contiguous block
            of memory that num_items items each of size, item_size bytes
        realloc(ptr, bytes) - resizes the memory pointed to by ptr to size
            bytes.
        free(ptr) - releases the block of memory pointed to by ptr

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("%ld\n", sizeof(int));
    // printf("%ld\n", sizeof(int [10]) / sizeof(int));

    // malloc
    // allocate 10 * the size of int to the ptr
    int *ptr = malloc(10 * sizeof(int));

    // using a loop to dynamically assign values to the array/ptr
    for (int i = 0; i < 10; i++)
    {
        *(ptr + i) = (i + sizeof(int)) * (sizeof(int) - 2);
    }

    // using a loop to dynamically accessing values of the array/ptr
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    // free memory - ptr
    free(ptr);

    return 0;
}
