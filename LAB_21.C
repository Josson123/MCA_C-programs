#include<stdio.h>
#include<conio.h>
void main()
{
 int num,pro;
 clrscr();
 printf("Enter the number which you want to get the multiplication table of:");
 scanf("%d",&num);
 printf("The multiplication table of %d upto 10 is: ");
 for(int i=1;i<=10;i++)
  {
    printf("%d x %d = %d\n",num,i,num*i);

  }
 getch();
}