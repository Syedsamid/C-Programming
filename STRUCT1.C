#include<stdio.h>
#include<conio.h>
struct stud
{
  int rollno;
  char name[10];
  int percent;
};
  void main()
  {
   struct stud s;
   clrscr();
   printf("Roll no.:");scanf("%d",&s.rollno);
   printf("Name:");scanf("%s",&s.name);
   printf("Percent:");scanf("%d",&s.percent);
   printf("\nDetail of student are\n");
   printf("\nRoll no=%d",s.rollno);
   printf("\nName=%s",s.name);
   printf("\nPercent=%d",s.percent);
   getch();
  }
