#include <stdio.h>
#include<conio.h>
#include <math.h>
int check_prime(int);
void main()
{
 int uprlmt,lwrlmt,i,j,isprime;
 clrscr();
 printf("Enter lower and upper bound of the range:");
 scanf("%d%d",&lwrlmt,&uprlmt);
 printf("The primes between %d and %d are:",lwrlmt,uprlmt);

 for(i=lwrlmt;i<=uprlmt;i++)
  {
    if(i<2)
     {
      continue;
     }
    isprime=1;
    for(j=2;j<=sqrt(i);j++)
     {
       if(i%j==0)
	{
	 isprime=0;
	 break;
	}
     }
    if(isprime)
     {
       printf("%d ",i);
     }
  }
 getch();
}
