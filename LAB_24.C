#include<stdio.h>
#include<conio.h>
int addfact(int);
void main()
{
 int i,j,num,addfacts;
 clrscr();
 printf("Enter the limit upto you need to add the factorials:");
 scanf("%d",&num);
 addfacts=addfact(num);//function call
 printf("The results of sum of factorial of 1st %d numbers is %d.",num,addfacts);
 getch();
}

int addfact(int a)
{
  int i,j,facts=1,addfacts=0;
  for(i=a;i>0;i--)                  //using outer loop for addition
   {                                //and inner loop for finding factorial
     for(j=1;j<=i;j++)
     {
      facts=facts*j;
     }

     addfacts=addfacts+facts;

     facts=1;                       //here the facts is set to 1 in order to tget the factorial of next iterated number.
   }
  return (addfacts);                //return the resultant value.
}
