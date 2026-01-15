#include<stdio.h>
#include<conio.h>
void main()
{
 int first=0,second=1,next,n,i;
 clrscr();
 printf("Enter the limit of fibonacci series to up to a number:");
 scanf("%d",&n);
 printf("The fibonacci series upto %d numbers are:\n",n);
 for(i=0;i<n;i++)
 {
  if(i<=1)
  {
   next=i;
  }
  else
  {
    next=first+second;
    first=second;
    second=next;
  }
  printf("%d ",next);
 }
 getch();
}
