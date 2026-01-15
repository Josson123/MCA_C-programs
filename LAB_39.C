#include<stdio.h>
#include<conio.h>
void main()
{
 char a[30],b[50];
 int i,flag=0;
 clrscr();
 printf("Enter a string:");
 gets(a);
 printf("Enter 2nd string:");
 gets(b);
 for(i=0;a[i]!='\0';i++)
  {
     if(a[i]!=b[i])
       {
	flag=1;
       }
  }
 if(flag==0)
  printf("Entered strings are equal");
 else
  printf("Entered strings are not equal");

 getch();
}