/*
functionsandarrays.c 
created on Tuesday, 2019, 25 June
By Otumian
*/
#include <stdio.h>

// an array version of add_up
int add_up_arr(int arr[], int len)
{
    int total = 0;

    for (int i = 0; i < len; i++)
    {
        total += arr[i];
    }
    return total;
}

// pointer version of add_p
int add_up_ptr(int *arr, int len)
{
    int total = 0;

    for (int i = 0; i < len; i++)
    {
        total += *(arr + i);
    }
    return total;
}

// return an array from a function
int *get_evens()
{
    static int evennumbers[5];
    int i = 0;

    for (i; i < 5; i++)
    {
        evennumbers[i] = i * 2;
    }

    return evennumbers;
}
// it seems that there is an error when an array is made the return

#define SIZE 5

void get_multiples(int n, int nums[])
{
    int k;
    int multiple = 0;

    for (k = 0; k < SIZE; k++)
    {
        nums[k] = multiple += n;
    }
}

int main()
{
    // int nums[5] = {1, 3, 2, 5, 7};

    // printf("The total is %d\n", add_up_arr(nums, 5));
    // printf("The total is %d\n", add_up_ptr(nums, 5));
    // int y = 9;
    // int *x1 = &y;
    // int x[] = {1,2,3};
    // printf("%d --- %p ---x1 %p: \n", *x, &x, &x1);

    int *x = get_evens();

    int i = 0;
    for (i; i < 5; i++)
    {
        // printf("%d -- %d\n", i, *(x + i));
        printf("%d -- %d\n", i, x[i]);
    }

    int a[SIZE], b[SIZE];
    int k;

    get_multiples(2, a); /* get first 5 even numbers */
    printf("a = [ ");
    for (k = 0; k < SIZE; k++)
        printf("%d ", a[k]);
    printf("]\n");
    /* output : a = [ 2 4 6 8 10 ]*/

    get_multiples(3, b); /* get first 5 multiples of 3 */
    printf("b = [ ");
    for (k = 0; k < SIZE; k++)
        printf("%d ", b[k]);
    printf("]\n");
    /* output : b = [ 3 6 9 12 15 ]*/

    printf("a = [ ");
    for (k = 0; k < SIZE; k++)
        printf("%d ", a[k]);
    printf("]\n");
    /* output : a = [ 2 4 6 8 10 ]*/

    return 0;
}
