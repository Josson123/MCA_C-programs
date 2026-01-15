#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;
    int lower = 0, upper = 0, special = 0;

    clrscr();

    fp = fopen("data.txt", "r");   /* open file in read mode */

    if (fp == NULL)
    {
        printf("Cannot open file!");
        getch();
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        /* ASCII check */
        if (ch >= 65 && ch <= 90)          /* A-Z */
            upper++;
        else if (ch >= 97 && ch <= 122)    /* a-z */
            lower++;
        else if (ch != ' ' && ch != '\n' && ch != '\t')
            special++;
    }

    fclose(fp);

    printf("Uppercase letters : %d\n", upper);
    printf("Lowercase letters : %d\n", lower);
    printf("Special characters: %d\n", special);

    getch();
}
