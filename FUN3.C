#include<stdio.h>
#include<conio.h>
  int sum(int x,int y)
  {
    int z;
    z=x+y;
    return z;
  }
  void main()
  {
    int a,b,c;
    clrscr();
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("\nAddition=%d",c);
getch();
}