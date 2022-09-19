#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i,fact,count;
  clrscr();
  for(count=1;count<=3;count=count+1)
  {
   printf("enter number");
   scanf("%d",&num);
   fact=i=1;
   while(i<=num)
   {
    fact=fact*i;
    i++;
   }
  printf("factorial value of %d=%d\n",num,fact);
  }
getch();
}
