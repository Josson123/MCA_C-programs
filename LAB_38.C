#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],b[30];
 int i=0,j=0;
 clrscr();
 printf("Enter a string:");
 gets(a);
 printf("Enter a 2nd string:");
 gets(b);
 while(a[i]!='\0')
  {
    i++;
  }
 while(b[j]!='\0')
  {
    a[i]=b[j];
    i++;
    j++;
  }
 a[i]='\0';
 printf("Concatenaded string:");
 puts(a);
 getch();
}