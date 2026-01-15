#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int num,factorial;
 clrscr();
 printf("Enter a number to find the factorial:");
 scanf("%d",&num);
 factorial=fact(num);
 printf("The factorial of %d is %d:",num,factorial);
 getch();
}


int fact(int n)
{
 int factorial=1;
 if(n>1)
  {
   factorial=fact(n-1)*n;
   return (factorial);
  }
 else
  {
   return (1);
  }
}