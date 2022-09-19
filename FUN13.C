#include<stdio.h>
#include<conio.h>
  int cube(int x)
   {
     return x*x*x;
   }
  void main()
  {
    int no,c;
    clrscr();
    printf("Enter No:");
    scanf("%d",&no);
    c=cube(no);
    printf("\nCube=%d",c);
    getch();
    }