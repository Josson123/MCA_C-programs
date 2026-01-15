#include<stdio.h>
#include<conio.h>
void main()
{
 int a,c;
 clrscr();
 printf("Enter an integer:");
 scanf("%d",&a);
 c=(a<0)?-a:a;
 printf("The absolute value of %d is %d.",a,c);
 getch();
}