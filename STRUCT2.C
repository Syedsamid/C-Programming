#include<stdio.h>
#include<conio.h>
  struct employer
  {
   int id;
   char name[10];
   float salary;
  };
  void main()
  {
   struct employer e;
   clrscr();
   printf("Enter Id:");
   scanf("%d",&e.id);
   printf("Enter name:");
   scanf("%s",&e.name);
   printf("Entae salary:");
   scanf("%f",&e.salary);
   printf("\nid=%d",e.id);
   printf("\nname=%s",e.name);
   printf("\nsalary=%f",e.salary);
   getch();
}