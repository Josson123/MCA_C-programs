#include<stdio.h>
#include<conio.h>
void convert(int,int);
void main()
{
 int n,choice;
 clrscr();
 printf("Enter a decimal number:");
 scanf("%d",&n);
 printf("CONVERSION MENU\n");
 printf("1.Binary\n2.Ocal\n3.Hexadecimal");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
    printf("\nBinary Equivalent:");
    convert(n,2);
    break;
  case 2:
    printf("\nOctal Equivalent:");
    convert(n,8);
    break;
  case 3:
    printf("\nHexadecimal Equivalent:");
    convert(n,16);
    break;
  default:
    printf("\nPlease enter a valid choice\n");
    break;
 }
 getch();
}



void convert(int num,int base)
{
 int rem;
 if(num==0)
  {
   return;
  }
 rem=num%base;
 num=num/base;
 convert(num,base);
 if(rem<10)
 {
  printf("%d",rem);
 }
 else
 {
  printf("%c",rem-10+'A');
 }
}