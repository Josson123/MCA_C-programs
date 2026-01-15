#include<stdio.h>
#include<conio.h>
void main()
{
 char str[30],i,count=0;
 clrscr();
 printf("Enter a string:");
 gets(str);
 for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
     continue;    //skips and dont counts spaces.
    }
    count++;
  }
 printf("The lenght of the string is:%d",count);
 getch();
}