#include<stdio.h>
#include<conio.h>

int large(int[], int);

void main()
{
    int a[10], i, num, lar;
    clrscr();

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements into the array:\n");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    lar = large(a, num);
    printf("The largest number in the array is: %d", lar);

    getch();
}

int large(int a[], int n)
{
    int i, max;
    max = a[0];   // assume first element is largest

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}
