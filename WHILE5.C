#include<stdio.h>
#include<conio.h>
void main()
{
  float x,power;
  int y,i;
  clrscr();
  printf("Enter two number");
  scanf("%f%d",&x,&y);
  power=i=1;
  while(i<=y)
  {
   power=power*x;
   i++;
  }
  printf("%fto the power %d is %f\n",x,y,power);
getch();
}