/*
unioninc.c 
created on Saturday, 2019, 29 June
By Otumian
*/

/*
A union store different data types in the same memory location
It it just like a struct but uses the same location for all it's 
members and only a member can be accessed at a time
declaration:
    union var {members..};
*/
#include <stdio.h>
#include <string.h>

// union myunion {
//     int inum;
//     float fnum;
//     char str[20];
// };

// union {
//     int inum;
//     float fnum;
//     char str[20];
// };

// union myunion {
//     int inum;
//     float fnum;
//     char str[20];
// };

// void set_id(union myunion *i)
// {
//     // i->.inum = 34;
//     (*i).inum = 43;
// }

// void show_id(union myunion i)
// {
//     strcpy(i.str, "hello there!");
// }

union myunion {
    int inum;
    float fnum;
    char str[20];
};

int main()
{
    union myunion val[4];

    for (int i = 0; i < 4; i++)
    {
        val[i].inum = i * i;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value at val[%d] is %d\n", i, val[i].inum);
    }

    // union myunion
    // union myunion x;
    // union myunion *ptr = NULL;
    // ptr = &x;

    // ptr->inum = 23;
    // printf("%d\n", x.inum);
    // printf("%d\n", ptr->inum);
    // printf("%d\n", (*ptr).inum);

    // ui.fnum = 34.454;
    // printf("%f\n", ui.fnum);

    // union myunion u1;
    // u1.inum = 23;
    // u1.fnum = 3.142;
    // // u1.str = "hello there!";
    // strcpy(u1.str, "hello there!");

    // printf("%d %f %s\n", u1.inum, u1.fnum, u1.str);

    return 0;
}
