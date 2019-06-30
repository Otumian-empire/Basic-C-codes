/*
stringsinc.c 
created on Thursday, 2019, 27 June
By Otumian
*/

/*
A string is an array of characters that ends with a NULL char '\0'
char name[size] = "string";
char name[size] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};

A string literal is a text enclosed in a double quote
A character is enclosed in a single quote

using pointers
char * str = "string"; // this becomes a constant..

use #include <string.h> STL string for convinience
strlen - string length
strcat - concatenate 2 strings
strcpy - copy one string into another - like assignment
strupr - convert string to uppercase
strlwr - convert string to lowercase
strrev - reverse a string
strcmp - to compare 2 strings

String input
scanf - read strings according to format specifiers, 
gets - reads strings including spaces until a newline is entered
and 
fgets - a better version of fgets(var, size, stdin(file))

String output
fput - fput(var, stdout(file)), 
puts - puts(var), 
and 
printf - printf(formats, vars)

*/
#include <stdio.h>
#include <string.h>

int main()
{
    // char str[5] = "hello";
    // puts(str);
    // char name[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
    // puts(name);
    // char *str = "hello";
    // puts(str);

    // printf("The length of the string, %s is %ld\n", str, strlen(str));
    // char *newstr = strcat("hello ", "world");
    // puts(newstr);

    // char *name;
    // int age;
    // printf("Enter your name: ");
    // scanf("%s", name); // this will only take the characters before any white space

    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("Name: %s\nAge: %d\n", name, age);

    // to get a full name - with space, use get
    // char fullname[50];
    // printf("Enter your full name please: ");
    // fgets(fullname, 50, stdin);
    // // gets(fullname);
    // printf("your full name %s\n", fullname);

    // output 
    // fputs(var, stdout)
    char fullname[50];
    printf("Enter your full name please: ");
    fgets(fullname, 50, stdin);
    fputs(fullname, stdout);
    // printf("your full name %s\n", fullname);

    // puts(var)
    puts(fullname);

    return 0;
}
