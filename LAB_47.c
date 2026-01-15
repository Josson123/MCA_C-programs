#include <stdio.h>
#include <conio.h>

void main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int words = 0, lines = 0;
    int inword = 0;

    clrscr();

    /* Check command line arguments */
    if (argc != 2)
    {
        printf("Usage: count filename");
        getch();
        return;
    }

    /* Open file */
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Cannot open file!");
        getch();
        return;
    }

    /* Read file character by character */
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            inword = 0;
        else if (inword == 0)
        {
            inword = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d\n", words);

    getch();
}
