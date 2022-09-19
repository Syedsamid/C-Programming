#include<stdio.h>
#include<conio.h>
  int largest(int x[])
  {
   int i,max;
   max=x[0];
   for(i=1;i<5;i++)
    {
     if(max<x[i])
      {
       max=x[i];
      }
    }
   return max;
  }
  void main()
  {
   int no[5],i,max;
   clrscr();
   printf("\nEnter any 5 Nos:");
   for(i=0;i<5;i++)
    {
     scanf("%d",&no[i]);
    }
   max=largest(no);
   printf("\nLargest No=%d",max);
   getch();
  }
