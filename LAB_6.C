#include<stdio.h>
#include<conio.h>
float pi=3.14;

void main()
{
 float r,peri,area;
 clrscr();
 printf("Enter the radius of circle:");
 scanf("%f",&r);
 peri=2*pi*r;
 area=pi*r*r;
 printf("\nPerimeter:%.2f\nArea:%.2f",peri,area);
 getch();
}