#include <stdio.h>
#include <conio.h>

void main(int argc, char *argv[])
{
    FILE *fs, *ft;
    char ch;

    clrscr();

    /* Check for correct number of arguments */
    if (argc != 3)
    {
        printf("Usage: copy source_file destination_file");
        getch();
        return;
    }

    /* Open source file */
    fs = fopen(argv[1], "r");
    if (fs == NULL)
    {
        printf("Cannot open source file");
        getch();
        return;
    }

    /* Open destination file */
    ft = fopen(argv[2], "w");
    if (ft == NULL)
    {
        printf("Cannot open destination file");
        fclose(fs);
        getch();
        return;
    }

    /* Copy contents */
    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
    }

    printf("File copied successfully!");

    fclose(fs);
    fclose(ft);

    getch();
}
