#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter a year to check:");
 scanf("%d",&year);
 if(year%400==0||year%4==0&&year%100!=0) //an year is leap year,ifthe year is divisible by 4 or 400 but not divisible by 100
  {
    printf("\nThe entered year is leap year.",year);
  }
 else
  {
   printf("Entered year is not leap year");
  }
 getch();
}