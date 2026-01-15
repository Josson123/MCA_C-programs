#include<stdio.h>
#include<conio.h>
void main()
{
 float cel,farenheit,temp1,temp2;
 clrscr();
 printf("Enter the temperature (in farenheit):");
 scanf("%f",&farenheit);
 cel=(farenheit-32)*5.0/9.0; //celcius=(farenheit-32) x 5/9
			  //farenheit=(celcius+32) x 9/5
 printf("Entered temperature in celcius= %.2f",cel);
 getch();
}