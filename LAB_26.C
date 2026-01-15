#include<stdio.H>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("Printing from A-Z\n");
  for(ch='A';ch<='Z';ch++)
   {
    printf("%c ",ch);
   }
  getch();
}