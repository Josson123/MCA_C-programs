#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,a[10],ele,pos=-1;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&ele);
printf("Enter the array elements:\n");
for(i=0;i<ele;i++)
 {
   scanf("%d",&a[i]);
 }
printf("The elements are:\n");
for(i=0;i<ele;i++)
 {
  printf("%d ",a[i]);
 }
printf("\nEnter the element to search:");
scanf("%d",&num);
for(i=0;i<ele;i++)
 {
  if(num==a[i])
   {
    printf("The searched element is in position %d.",i+1);
    pos=pos+1;
   }
 }
if(pos==-1)
 {
  printf("The searched element doesn't exist in the array.");
 }
getch();
}