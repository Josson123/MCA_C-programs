#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],row,col,i,j;
 clrscr();
 printf("Enter the number of rows and columns:");
 scanf("%d %d",&row,&col);
 printf("Enter your values into matrix:");
 for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
 printf("The matrix is:\n");
 for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
    {
     printf("%d ",a[i][j]);
    }
   printf("\n");
  }

 printf("The transpose matrix is:\n");
 for(i=0;i<col;i++)
  {
   for(j=0;j<row;j++)
    {
     printf("%d ",a[i][j]);
    }
   printf("\n");
  }

 getch();
}