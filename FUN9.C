#include<stdio.h>
#include<conio.h>
  void sum(int x,int y)
   {
    int z;
    z=x-y;
    printf("\nSubtraction=%d",z);
   }
  void main()
  {
    int a,b,c;
    clrscr();
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    getch();
    }


