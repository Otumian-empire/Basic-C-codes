/*
filesic.c 
created on Sunday, 2019, 30 June
By Otumian
*/

/*
You can write into an external file  in C
include the #include <stdio.h>
Files can opended, read and written to
fopen(filename, mode) which will return a file pointer
mode - r, w, a, r+, w+, a+
then fclose(filepointer)

read file
    fgetc(fp)
    fgets(buffer, size_of_buffer, fp)
    fscanf(fp, conversion_specifiers, vars)

write file
    putc(char, fp)
    puts(str, fp)
    fprintf(fp, str, var)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    // open file in write mode
    /* FILE *file = fopen("text,txt", "w");
    if (file == NULL)
    {
        puts("There was an error opening file");
    }
    else
    {
        puts("File was opened successfully");
        fclose(file);
    } */

    // readind from a file
    // fgetc(filepointer) and fgets(buffer, size, filepointer)
    // FILE *fp = fopen("hello.py", "a+");

    // // using fgets
    // char buffer[1000];
    // int size = 1000;

    // // fgets reads data into buffer
    // fgets(buffer, size, fp);

    // puts(buffer);

    // // using fgetc
    // /* char c;

    // if (fp != NULL)
    // {
    //     while ((c = fgetc(fp)) != EOF)
    //     {
    //         putchar(c);
    //     }
    //     puts("");
    // }
    // else
    // {
    //     puts("error");
    // } */

    // Writing to a file using putc(char, fp) and puts(str, fp)

    char text[1000];
    FILE *fp = fopen("text.py", "a+");

    if (fp != NULL)
    {
        puts("Enter some text: ");
        // scanf("%s", text);

        while (1)
        {
            fgets(text, sizeof(text), stdin);
            puts("text entered");

            if (strcmp(text, "endfile") || strcmp(text, "end") || strcmp(text, "exit") || strcmp(text, "close"))
            {
                puts("File has ended..");
                fclose(fp);
                break;
            }
            else
            {
                fputs(text, fp);
                puts("file written into");
            }
        };

        puts("End of program..");
        fclose(fp);
    }
    else
    {
        puts("There was an error");
    }

    return 0;
}
