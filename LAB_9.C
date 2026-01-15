#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2,res;
int op;
char ch;
clrscr();
printf("CALCULATOR\n");
printf("1.Addition\n");
printf("2.subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
// do                              //you can do it without iteration too
//   {
  printf("Enter your choice:");
  scanf("%d",&op);
    if(op==0||op>4)
    {
    printf("INVALID CHOICE!!");
  //  break;
      getch();
     exit(0);
    }
  printf("enter two numbers");
  scanf("%f %f",&num1,&num2);
  switch(op)
    {
    case 1:
    res=num1+num2;
    printf("the sum is %.2f",res);
    break;
    case 2:
    res=num1-num2;
    printf("the difference is %.2f",res);
    break;
    case 3:
    res=num1*num2;
    printf("the product is %.2f",res);
    break;
    case 4:
    res=num1/num2;
    printf("the quotient is %.2f",res);
    break;
    default:
    printf("\ninvalid choice");
    break;
    }
//   printf("\ndo you want to continue?");
//   scanf(" %c",&ch);
//   }
// while(ch=='y'||ch=='Y');
getch();
}