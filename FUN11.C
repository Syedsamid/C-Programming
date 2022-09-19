#include<stdio.h>
#include<conio.h>
  int sum()
  {
    int a,b;
    clrscr();
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    return a+b;
  }
  void main()
  {
    int c;
    c=sum();
    printf("\nAddition=%d",c);
    getch();
  }
