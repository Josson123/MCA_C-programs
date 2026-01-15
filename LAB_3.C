#include<stdio.h>
#include<conio.h>
void main()
{
 float n,p,r,interest;
 clrscr();
 printf("INTEREST COUNTER\nEnter your principal,terms(in years and rate of interest)");
 printf("\nEnter the principal amt:");
 scanf("%f",&p);
 printf("Enter the interest rate:");
 scanf("%f",&r);
 printf("Enter the term(in years):");
 scanf("%f",&n);
 printf("Calculating interest...\n");
 interest=(n*p*r)/100;
 printf("Calcukated interest:%2f",interest);
 getch();
}