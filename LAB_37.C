#include<stdio.h>
#include<conio.h>
void main()
{
 char a[30],b[50];
 int i;
 clrscr();
 printf("Enter a string:");
 gets(a);
 for(i=0;a[i]!='\0';i++)
  {
     b[i]=a[i];
  }
 b[i]='\0';
 printf("\nEntered string:");
 puts(a);
 printf("\nCopieded string:");
 puts(b);
 getch();
}