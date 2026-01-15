#include<stdio.h>
#include<conio.h>
void main()
{
 int mark;
 clrscr();
 printf("Enter the mark :");
 scanf("%d",&mark);
 if(mark<=100 && mark>=90)
  {
   printf("Student secured A+");
  }
 else if(mark<90 && mark>=80)
  {
   printf("Student secured A");
  }
 else if(mark<80 && mark>=70)
  {
   printf("Student secured B+");
  }
 else if(mark<70 && mark>=60)
  {
   printf("Student secured B");
  }
 else if(mark<60 && mark>=50)
  {
   printf("Student secured C");
  }
 else if(mark<50 && mark>=40)
  {
   printf("Student secured D");
  }
 else
  {
    printf("The student has failed.");
  }

  getch();
}