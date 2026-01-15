#include<stdio.h>
#include<conio.h>
void swap(int ,int);
void swap(int *,int *);

void main()
{
 int a=10,b=20,c,d;
 clrscr();
 printf("Here a=%d and b=%d ",a,b);
 printf("\nSwapping using call by value:\n");
 swap(a,b);
 printf("\nSwapping using call by reference:\n");
 swap(&a,&b);
 printf("a=%d\nb=%d",a,b);
 getch();
}

void swap(int a,int b)
 {
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
 }

void swap(int *a,int *b)
 {
   int temp;
   temp= *a;
   *a=*b;
   *b=temp;
 }