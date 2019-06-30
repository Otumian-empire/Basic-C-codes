/*
structpointers.c 
created on Saturday, 2019, 29 June
By Otumian
*/

/*
Struct pointer
*/
#include <stdio.h>

/*
struct student
{
    char name[50];
    int age;
};

 typedef struct
{
    int numtires;
    int numdoors;
} car;

void printInfo(struct student *st)
{
    puts("Student info..");
    printf("Name: %s\n", st->name);
    printf("Age: %d\n", st->age);
}

void printInfoT(car *c)
{
    // puts("Student info..");
    // printf("Number of doors: %d\n", c->numdoors);
    // printf("Number of tires: %d\n", c->numtires);
    puts("Student info..");
    printf("Number of doors: %d\n", (*c).numdoors);
    printf("Number of tires: %d\n", (*c).numtires);
}
 */

typedef struct
{
    char *name;
    int age;
    char *course;
} records;

int main()
{
    /*     car car1 = {6, 2};
    printInfoT(&car1);

    puts("");
    puts("");

    struct student st = {.name = "John Doe", .age = 23};
    printInfo(&st);
    */

    records stds[3] = {
        {"John", 24, "cs - 101"},
        {"ada", 45, "cs - 107"},
        {"david", 78, "cs - 50"}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\nAge: %d\nTitle: %s\n\n", stds[i].name, stds[i].age, stds[i].course);
    }
    
    return 0;
}
