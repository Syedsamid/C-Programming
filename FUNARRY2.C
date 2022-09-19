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
  void sort(int x[],int n)
  {
   int i,j,t;
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
     if(x[i]>x[j])
     {
      t=x[i];
      x[i]=x[j];
      x[j]=t;
     }
    }
   }
  }
  void main()
  {
    int no[10];
    clrscr();
    printf("Enter any 10 numbers");
    accept(no,10);
    printf("Original array\n");
    display(no,10);
    sort(no,10);
    printf("\nsort arry\n");
    display(no,10);
    getch();
    }