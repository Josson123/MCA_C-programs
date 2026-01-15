#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
printf("Enter 2 numbers:");
scanf("%d %d",&a,&b);
printf("Entered values, a=%d,b=%d",a,b);
t=a;
a=b;
b=t;
printf("\nThe swapped values,a=%d,b=%d",a,b);
getch();
}