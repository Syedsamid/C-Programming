#include<stdio.h>
#include<conio.h>

  float temp(float f)
  {
    return (f-32)*(5.0/9.0);
  }
   void main()
   {
    float f,c;
    clrscr();
    printf("Enter farinite:");
    scanf("%f",&f);
    c=temp(f);
    printf("temprature=%f",c);
    getch();
    }