#include<stdio.h>
#include<conio.h>
  int fact(int n)
  {
    int i,f=1;
    for(i=1;i<=n;i++)
   {
    f=f*i;
   }
  return f;
  }
  void main()
  {
   int no,f;
   clrscr();
   printf("enter no:");
   scanf("%d",&no);
   f=fact(no);
   printf("\nfactorial =%d",f);
   getch();
   }