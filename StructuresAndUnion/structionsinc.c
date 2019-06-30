/*
structionsinc.c 
created on Saturday, 2019, 29 June
By Otumian
*/
#include <stdio.h>

/*
structures is a user defined data type - struct
structures are also known as composite, aggregate or records

creation:
    struct name {
        properties or members;
    };

declaration:
    1. struct struct_name var;
    struct_name var = (struct struct_name - you have to cast it){member_values};
    2. struct struct_name var = {member_values};

accessing members - use the dot operator
    var.member

assigning values to members - use the dot operator
    var.member = value;

in the midst of all this, we could have had used a typedef..
    this simplifies the code which eliminates the use of struct
*/

int main()
{
    /* 
    // a course struct
    struct course
    {
        int id;
        char title[100];
        float hours;
    };

    // this is a new data-type know as course

    // declaring a variable of the course data type
    struct course c1;
    c1 = (struct course){101, "cs 101 - principles of programming - by guttag.", 12.4};
    printf("course name: %s\ncourse id: %d\ncourse hours: %f\n", c1.title, c1.id, c1.hours);

    // or
    struct course c2 = {50, "cs 50 - algorithmic thinking - by david", 12.5};
    printf("course name: %s\ncourse id: %d\ncourse hours: %f\n", c2.title, c2.id, c2.hours);

    // or using named member initialization
    struct course c3 = {.id = 107, .title = "programming abstraction - by zelenski.", 15.7};
    printf("course name: %s\ncourse id: %d\ncourse hours: %f\n", c3.title, c3.id, c3.hours);

    c3.hours = c2.hours = c1.hours;
    printf("Now all the hours for %d, %d and %d are %.2f, %.2f and %.2f respectively\n", c1.id, c2.id, c3.id, c1.hours, c2.hours, c3.hours);
     */

    typedef struct
    {
        char *tostr;
    } text;

    text hello = {"hello there"};
    printf("%s\n", hello.tostr);

    typedef struct
    {
        float x;
        float y;
    } point;

    typedef struct
    {
        float radius;
        point cord;
    } circle;

    point mycord = {12.0, 11.4};
    circle mycir = {23.56, mycord};

    printf("Find the area of a circle of radius, %.2f with x coordinate, %.2f and y coordinate %.2f\n", mycir.radius, mycir.cord.x, mycir.cord.y);

    return 0;
}
