#include<stdio.h>
#include<conio.h>
void main()
{
 int num,revno=0,rem,cpy;   //cpy is declared to preserve the original number
 clrscr();
 printf("Enter any number:");
 scanf("%d",&num);
 cpy=num;
 while(num>0)
 {
   rem=num%10;
   revno=revno*10+rem;
   num=num/10;
 }
 if(cpy==revno)
 {
  printf("entered number is palindrome");
 }
 else
 {
  printf("Entered nmber is not palindrome");
 }

 getch();
}