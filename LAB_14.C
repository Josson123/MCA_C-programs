#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,nsum=0,nsqsum=0;
 clrscr();
 printf("Enter a number to find sum");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    nsum=nsum+i;
    nsqsum=nsqsum+(i*i);
 }
 printf("The sum of 1st %d digits:%d",n,nsum);
 printf("\nThe sum of squares of 1st %d digits:%d",n,nsqsum);
 getch();
}