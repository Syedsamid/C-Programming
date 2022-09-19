#include<stdio.h>
#include<conio.h>
void main()
{
  float i,n,f=1;
  clrscr();
  printf("Enter number");
  scanf("%f",&n);

  for(i=1;i<=n;i++)
  {
   f=f*i;
   printf("\nfactorial=%f is:%f",n,f);
  }
getch();
}