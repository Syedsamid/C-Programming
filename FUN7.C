#include<stdio.h>
#include<conio.h>
  int armstrong(int n)
  {
   int n1=n,i,sum=0,digit;
   while(n1!=0)
   {
    digit=n1%10;
    sum=sum+(digit*digit*digit);
    n1=n1/10;
  }
   if(n==sum)
   return 1;
   else
   return 0;
  }
  void main()
  {
   int no;
   clrscr();
   printf("Eneter no:");
   scanf("%d",&no);
   if(armstrong(no))
    printf("It is Armstrong no");
   else
    printf("It is not Armstrong no");
getch();
}
