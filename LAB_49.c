#include <stdio.h>
#include <conio.h>

/* structure definition */
struct employee
{
    int empid;
    char name[30];
    float salary;
};

void main()
{
    FILE *fp;
    struct employee e;
    int n, i;

    clrscr();

    /* Create and write employee details */
    fp = fopen("employee.dat", "w");
    if (fp == NULL)
    {
        printf("File cannot be created!");
        getch();
        return;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d details\n", i + 1);

        printf("Enter employee id: ");
        scanf("%d", &e.empid);

        printf("Enter employee name: ");
        scanf("%s", e.name);

        printf("Enter salary: ");
        scanf("%f", &e.salary);

        fprintf(fp, "%d %s %.2f\n", e.empid, e.name, e.salary);
    }

    fclose(fp);

    /* Read and display employee details */
    fp = fopen("employee.dat", "r");
    if (fp == NULL)
    {
        printf("File cannot be opened!");
        getch();
        return;
    }

    printf("\nEmployee Details from File:\n");
    printf("ID\tName\tSalary\n");

    while (fscanf(fp, "%d %s %f",
                  &e.empid, e.name, &e.salary) != EOF)
    {
        printf("%d\t%s\t%.2f\n",
               e.empid, e.name, e.salary);
    }

    fclose(fp);

    getch();
}
