#include<stdio.h>
#include<conio.h>
void main()
{
  char name[6];
  float bs,bonus;

  printf("Enter Employer name");
  scanf("%s",name);

  printf("Enter salary");
  scanf("%f",&bs);

  bonus=bs*0.1;
  printf("bonus=%f",bonus);
  printf("Gross salary=%f",bs+bonus);
getch();
}
