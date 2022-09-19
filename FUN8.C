#include<stdio.h>
#include<conio.h>
  int search (int x[],int n,int key)
  {
   int i,flag=0;
   for(i=0;i<n;i++)
   {
    if(key==x[i])
     {
      flag=1;
      break;
     }
   }
   return flag;
  }
  void main()
  {
   int no[10],key,i;
   clrscr();
   printf("Enter any 10 numbers:");
   for(i=0;i<10;i++)
    {
     scanf("%d",&no[i]);
    }
   printf("Enter Key:");
   scanf("%d",&key);
   if(search(no,10,key))
    printf("%d found",key);
   else
    printf("%d not found",key);
getch();
}

