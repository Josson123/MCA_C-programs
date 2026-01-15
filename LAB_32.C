#include<stdio.h>
#include<conio.h>
void arraysrt(int a[],int n);
void main()
{
   int n,ele,a[10],i,low,high,found,mid;
   clrscr();
   printf("Enter the number of elements in the array. ");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("Entered elements are:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
   arraysrt(a,n);
   printf("\nSorted array:\n");
   for(i=0;i<n;i++)
     {
       printf("%d ",a[i]);
     }
   printf("\nEnter an element to search:");
   scanf("%d",&ele);
   low=0;high=n-1;
   while(low<=high)
    {
       mid=(low+high)/2;
       if(a[mid]==ele)
         {
           found=1;
           break;
         }
       else if(ele<a[mid])
         {
           high=mid-1;
         }
       else
         {
           low=mid+1;
         }
    }
    if(found==1)
         {
           printf("\nElement found at position %d",mid+1);
         }
   else
         {
           printf("\nElement not found");
         }
getch();
}

void arraysrt(int a[],int n)
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

// printf("\nSorted array:\n");
// for(i=0;i<n;i++)
  //{
   // printf("%d ",a[i]);
  //}
}


