#include<stdio.h>
#include<conio.h>
  void swap(int *x,int *y)
   {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
   }
  void main()
   {
    int a=20,b=10;
    clrscr();
    printf("\nBefore exchange\n");
    printf("\na=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter exchange\n");
    printf("\na=%d b=%d",a,b);
    getch();
    }