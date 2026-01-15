#include<stdio.h>
#include<conio.h>
void main()
{
 int num,digit,count=0,rem=0;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&num);
 printf("Enter a digit in the number to check occurence of digits:");
 scanf("%d",&digit);
 while(num>0)
  {
     rem=num%10;
     if(rem==digit)
      {
       count++;
      }
     num=num/10;
  }
 printf("The ocurence of %d in the number is %d times.",digit,count);
 getch();
}