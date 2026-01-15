#include<stdio.h>
#include<conio.h>
void main()
{
 float mar1,mar2,mar3,mar4,mar5,total;
 float avg;
 clrscr();
 printf("Enter the student's marks iun 5 subjects(out of 100):\n");
 scanf("%f%f%f%f%f",&mar1,&mar2,&mar3,&mar4,&mar5);
 total=mar1+mar2+mar3+mar4+mar5;
 avg=total/5;
 printf("The student's total mark:%.2f\nhis/her average=%.2f",total,avg);
 getch();

}