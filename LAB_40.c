#include <stdio.h>
#include <conio.h>

void main()
{
    char str[20][50], temp[50];
    int n, i, j, k;
    int flag;

    clrscr();

    printf("Enter number of strings: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
    }

    /* Bubble sort */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            k = 0;
            flag = 0;

            /* manual string comparison */
            while (str[j][k] != '\0' && str[j + 1][k] != '\0')
            {
                if (str[j][k] > str[j + 1][k])
                {
                    flag = 1;
                    break;
                }
                else if (str[j][k] < str[j + 1][k])
                {
                    flag = 0;
                    break;
                }
                k++;
            }

            /* if second string is shorter */
            if (str[j][k] != '\0' && str[j + 1][k] == '\0')
                flag = 1;

            /* swap strings if needed */
            if (flag == 1)
            {
                /* copy str[j] to temp */
                k = 0;
                while (str[j][k] != '\0')
                {
                    temp[k] = str[j][k];
                    k++;
                }
                temp[k] = '\0';

                /* copy str[j+1] to str[j] */
                k = 0;
                while (str[j + 1][k] != '\0')
                {
                    str[j][k] = str[j + 1][k];
                    k++;
                }
                str[j][k] = '\0';

                /* copy temp to str[j+1] */
                k = 0;
                while (temp[k] != '\0')
                {
                    str[j + 1][k] = temp[k];
                    k++;
                }
                str[j + 1][k] = '\0';
            }
        }
    }

    printf("\nStrings in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }

    getch();
}
