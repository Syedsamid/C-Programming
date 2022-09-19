#include<stdio.h>
#include<conio.h>
  void accept(int x[],int n)
   {
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
   }
  void display(int x[],int n)
  {
   int i;
   for(i=0;i<n;i++)
   printf("%d\n",x[i]);
  }
   void main()
   {
    int no[10];
    clrscr();
    printf("Enter any 5 numbers");
    accept(no,5);
    printf("Arry Element are\n");
    display(no,5);
    getch();
    }