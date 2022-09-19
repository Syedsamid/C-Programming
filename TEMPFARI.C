#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter Temprature in fahrenheit");
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("Temprature in celsius=%f",c);
getch();
}