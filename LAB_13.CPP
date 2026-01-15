#include<stdio.h>
#include<conio.h>
void main()
{
 int rem,revno=0,num,i;
 clrscr();
 printf("Enter the integer to be reveresed:");
 scanf("%d",&num);
 while(num>0)
 {
  rem=num%10;
  revno=revno*10+rem;
  num=num/10;
 }
 printf("The reversed number is:%d",revno);
 getch();
}