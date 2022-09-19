#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i,digit,rev=0;
  clrscr();

  printf("Enter No :");
  scanf("%d",&num);

  i=num;
  while(i!=0)
  {
   digit=i%10;
   rev=rev*10+digit;
   i=i/10;
  }
  if(num==rev)
   printf("It is palidrome number\n",num);
  else
   printf("It is not a palidrome number",num);
  getch();
}