#include<stdio.h>
#include<conio.h>
void main()
{
 int pal=1,n,i,j,count=0;
 char a[20],b[20];
 clrscr();
 printf("Enter a string:");
 gets(a);
 for(i=0;a[i]!='\0';i++)
    {
         count=count+1;
    }
 for(i=count;i<0;i--)
    {

        {
          b[j]=a[i];
        }
    }

 for(i=0;i<count;i++)
  printf("%s",b[i]);
 printf("%d",count);
 getch();
}