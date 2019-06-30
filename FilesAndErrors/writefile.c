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

int main()
{
    char text[1000];
    FILE *fp = fopen("file1", "a+");

    puts("enter text: ");

    while (fgets(text, sizeof(text), stdin))
    {
        if (text != NULL)
        {
            fputs(text, fp);
        }
    }

    fclose(fp);

    return 0;
}
