#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void	 main()
{
  int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
  clrscr();
  printf("Enter number of rows and colums of 1st matrix:");
  scanf("%d %d",&r1,&c1);
  printf("Enter number of rows and colums of 2nd matrix:");
  scanf("%d %d",&r2,&c2);
  if(r1==r2 && c1==c2)
  {
    for(i=0;i<r1;i++)
     {
       for(j=0;j<c1;j++)
	 {
	   printf("enter element into 1st array:");
	   scanf("%d",&a[i][j]);
	   printf("\nenter element into 2st array:");
	   scanf("%d",&b[i][j]);
	 }
     }
  }
  else
  {
     printf("Number of rows and cols of matrices aren't equal.No addition is possible.");
     sleep(2);
     exit(0);
  }

  printf("The matrices are:\n1st matix:\n");
  for(i=0;i<r1;i++)
     {
       for(j=0;j<c1;j++)
	 {
	   printf("%d ",a[i][j]);
	 }
       printf("\n");
     }

  printf("2nd matix:\n");
  for(i=0;i<r1;i++)
     {
       for(j=0;j<c1;j++)
	 {
	   printf("%d ",b[i][j]);
	 }
       printf("\n");
     }

 printf("The sum of the given matrices are:\n");
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
      printf(" %d ",c[i][j]);
    }
    printf("\n");
  }
 getch();
}