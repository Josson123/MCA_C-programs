#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,fact=1;
 clrscr();
 printf("Enter a positive integer to get factorial:");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
  {
   fact=i*fact;
  }
 printf("Factorial of %d is : %d",n,fact);
 getch();
}