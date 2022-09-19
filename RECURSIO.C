#include<stdio.h>
#include<conio.h>
  void print(int x)       //Print no. from 1 to 10
  {
    if(x>0)
    {
     printf("%d\t",x);
     x--;
     print(x);
    }
   }
  void main()
  {
    clrscr();
    printf("Printing 10 to 1 nos. using recursion\n");
    print(10);
    getch();
  }
