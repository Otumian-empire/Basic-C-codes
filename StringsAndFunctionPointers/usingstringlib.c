/*
usingstringlib.c 
created on Thursday, 2019, 27 June
By Otumian
*/
#include <stdio.h>
#include <string.h>
/*
use #include <string.h> STL string for convinience
strlen - string length
strcat - concatenate 2 strings
strcpy - copy one string into another - like assignment
strupr - convert string to uppercase
strlwr - convert string to lowercase
strrev - reverse a string
strcmp - to compare 2 strings
NOTE: remember to use variables through out
*/

int main()
{
    // char str1[] = "Hello";
    // char str2[] = "world";

    // strlen
    // printf("The length of str1, %s and str2, %s is %ld and %ld respectively..\n", str1, str2, strlen(str1), strlen(str2));

    // strcat
    // strcat(str1, str2);
    // puts(str1);

    // strcpy
    // char str3[15];
    // strcpy(str3, str1);
    // printf("%s", str3);

    // strupr***
    // strupr(str1);
    // puts(str1);

    // strlwr***
    // strlwr(str1);
    // puts(str1);

    // strrev***
    // strrev(str1);
    // puts(str1);

    // strcmp
    // strcmp(str1, str2);
    // puts(str1);

    /*
    changing a string to numbers
    */
    /* char n[10] = "3";
    int x = strtok(n);
    printf("%d\n", x); */

    char *str[15] = {
        "Hello there",
        "How are you",
        "I trust you are well"
    };

    puts(str[2]);
    return 0;
}
