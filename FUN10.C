#include<stdio.h>
#include<conio.h>
  void table()
  {
    int a,b;
    printf("Enter two numbewr:");
    scanf("%d%d",&a,&b);
    printf("\ntable=%d",a*b);
  }
  void main()
  {
    clrscr();
    table();
    getch();
  }
