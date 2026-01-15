#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a<b)//ais smaller than b
  {
  if(a<c)//a is smaller than c
    {
    printf("\n%d is smallest",a);

    }
  else
    {
    printf("\n%d is smallest",c);

    }

  }
else		      //if b is smaller than a
  {
  if(b<c)
     {
     printf("\n%d is smallest",b);

     }
  else
     {
     printf("\n%d is smallest",c);

     }

  }
getch();
}

