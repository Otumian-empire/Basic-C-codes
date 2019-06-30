/*
stringincfunc.c 
created on Thursday, 2019, 27 June
By Otumian
*/
/*
String functions
sprintf - 
    a formatted string can be created with sprintf function.
    this is useful for building strings from other data types
    Just a string builder
    char sentence[20];
    char name[10] = "John Dean";
    char msg[5] = "says";
    sprintf(sentence, "%s %s hello world", name, msg);
    puts(sentence);
        
sscanf - 
    Used for scanning a string for values and stores them at a corresponding variable address
    char msg[] = "John is 23";
    char name[5];
    char act[3];
    int age;

    sscanf(msg, "%s %s %d", name, act, &age);
    printf("name: %s\nact: %s\nage: %d\n", name, act, age);
*/

#include <stdio.h>

int main()
{
    // string builder - sprintf
    char sentence[30];
    char name[10] = "John Dean";
    char msg[5] = "says";
    // combining name, msg and some literals to build, sentence
    sprintf(sentence, "%s %s hello world", name, msg);
    puts(sentence);

    // String deformation/splitting
    char msg[] = "John is 23";
    char name[5];
    char act[3];
    int age;

    // splitting msg into name, act and age
    sscanf(msg, "%s %s %d", name, act, &age);
    printf("name: %s\nact: %s\nage: %d\n", name, act, age);

    return 0;
}
