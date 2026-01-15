#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,s;
float sol1,sol2;
clrscr();
printf("Enter the contstants of the quadratic equation");
scanf("%d%d%d",&a,&b,&c);
printf("\nThe quadratic equation is: %d*x^2+%d*x+%d",a,b,c);
s=(b*b)-(4*a*c);
if(s>0)
{
sol1=(-b+sqrt(s))/(2*a);
sol2=(-b-sqrt(s))/(2*a);
printf("\nThe roots of the equation are:%.2f,%.2f",sol1,sol2);
}
else if(s==0)
{
sol1=-b/(2*a);
printf("\nThe roots of the equation are:%.2f,%.2f",sol1,sol1);
}
else if(s<0)
{
sol1=sqrt((4*a*c)-(b*b));
sol2=sqrt((4*a*c)-(b*b));
printf("\nHas imaginary roots");
printf("\nThe roots of equation are:");
printf("\n-%d+%.2fi",b,sol1);
printf("\n-%d-%.2fi",b,sol2);
}
getch();
}