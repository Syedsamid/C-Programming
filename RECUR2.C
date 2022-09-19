#include<stdio.h>
#include<conio.h>

  int fact(int n)                 //Find factorial of no. using recursion
  {
   if(n==1)
    return 1;
   else
    return n*fact(n-1);
  }
  void main()
   {
    int no,f;
    clrscr();
    printf("Enter number:");
    scanf("%d",&no);
    f=fact(no);
    printf("\nfactorial=%d",f);
    getch();
   }