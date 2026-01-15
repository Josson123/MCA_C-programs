#include<stdio.h>
#include<conio.h>
void bubblesrt(int[],int);
void main()
{
 int a[20],n,i;
 clrscr();
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter array elements:");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("\nEntered elements are:\n");
 for(i=0;i<n;i++)
  {
   printf("%d",a[i]);
  }
 bubblesrt(a,n);

 getch();
}

void bubblesrt(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<                                                                                                                            n;                                  i++)
   {
    for(j=0;j<n-1;j++)
     {
       if(a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
     }
   }

 printf("\nSorted array:\n");
 for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}


