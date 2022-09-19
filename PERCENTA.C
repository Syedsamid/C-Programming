#include<stdio.h>
#include<conio.h>
void main()
{
 char name[6];
 int english,hindi,maths,science,total;
 float per;
 clrscr();

 printf("Enter name of student=");
 scanf("%s",&name);

 printf("Enter marks of english=");
 scanf("%d",&english);

 printf("Enter marks of hindi=");
 scanf("%d",&hindi);

 printf("Enter marks of maths=");
 scanf("%d",&maths);

 printf("Enter marks of science=");
 scanf("%d",&science);

 total=english+hindi+maths+science;
 printf("\ntotal marks of studend=%d",total);
 printf("\ntotal marks in percentage=%f",per);
 per=total/4.0;
 if(english>=35&&hindi>=35&&maths>=35&&science>=35)
 printf("\nPass");
 else
 printf("\nFail");
 if(per>=90)
  printf("\nGrade A");
 else if(per>=80)
  printf("\nGrade B");
 else if(per>=70)
  printf("\nGrade C");
 else if(per>=60)
  printf("\nGrade D");
 else if(per>=50)
  printf("\nGread E1");
  else
  printf("\nGread E2");
 getch();
 }