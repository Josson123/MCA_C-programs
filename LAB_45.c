#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;

    clrscr();

    fp = fopen("sample.txt", "r");   /* open file in read mode */

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        getch();
        return;
    }

    printf("Contents of the file:\n\n");

    /* read and display character by character */
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);   /* close file */

    getch();
}
