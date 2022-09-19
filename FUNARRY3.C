#include<stdio.h>
#include<conio.h>
  void print(int x[])
  {
   int i,sum=0;
   for(i=0;i<5;i++)
    {
     printf("\n%d",x[i]);
     sum=sum+x[i];
    }
    printf("\nSum of arry element is %d",sum);
   }
  void main()
  {
    int no[5]={12,33,54,67,96};
    clrscr();
    printf("\nArry Element are\n");
    print(no);
    getch();
  }