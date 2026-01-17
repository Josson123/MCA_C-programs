#include <stdio.h>
#include <conio.h>

void main()
{
    char str[50];
    int i, len = 0, flag = 1;

    clrscr();

    printf("Enter a string: ");
    gets(str);

    /* Find length of string */
    while(str[len] != '\0')
        len++;

    /* Check palindrome */
    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("\nThe given string is a Palindrome");
    else
        printf("\nThe given string is NOT a Palindrome");

    getch();
}
