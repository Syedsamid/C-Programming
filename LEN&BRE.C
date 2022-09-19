#include<stdio.h>
#include<conio.h>
void main()
{
  float l,br,ar,pi;
  clrscr();

  printf("Enter Length");
  scanf("%f",&l);
  printf("Enter Breath");
  scanf("%f",&br);

  ar=br*l;
  pi=2*(l/br);

  printf("area of circle=%f\n",ar);
  printf("Perimeter of circle\n",pi);
getch();
}
