#include <stdio.h>
#include <conio.h>

/* structure definition */
struct person
{
    char name[30];
    char address[50];
    char phone[15];
};

/* function declarations */
void readData(struct person p[], int n);
void searchPerson(struct person p[], int n);

void main()
{
    struct person p[20];
    int n;

    clrscr();

    printf("Enter number of people: ");
    scanf("%d", &n);
    fflush(stdin);

    readData(p, n);
    searchPerson(p, n);

    getch();
}

/* function to read personal data */
void readData(struct person p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nPerson %d details:\n", i + 1);

        printf("Enter name: ");
        gets(p[i].name);

        printf("Enter address: ");
        gets(p[i].address);

        printf("Enter phone number: ");
        gets(p[i].phone);
    }
}

/* function to search a person by name */
void searchPerson(struct person p[], int n)
{
    char searchName[30];
    int i, found = 0;

    printf("\nEnter name to search: ");
    gets(searchName);

    for (i = 0; i < n; i++)
    {
        if (strcmp(p[i].name, searchName) == 0)
        {
            printf("\nPerson Found!");
            printf("\nName    : %s", p[i].name);
            printf("\nAddress : %s", p[i].address);
            printf("\nPhone   : %s", p[i].phone);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nPerson not found!");
}
