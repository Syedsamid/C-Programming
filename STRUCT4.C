#include<stdio.h>
#include<conio.h>
struct stud
{
  int rollno;
  char name[10];
  float percent;
};
void main()
{
  struct stud s[3];
  int i;
  clrscr();
  printf("Enter Detail of 3 student\n");
  for(i=0;i<3;i++)
  {
    printf("Roll no:"); scanf("%d",&s[i].rollno);
    printf("Name:"); scanf("%s",&s[i].name);
    printf("Percent:"); scanf("%f",&s[i].percent);
  }
  printf("\n______________________________\n");
  printf("Roll no\t stude name\t \tpercent\n");
  printf("\n________________________________");
  for(i=0;i<3;i++)
  {
    printf("%d\t%s\t\t%f\n",s[i].rollno,s[i].name,s[i].percent);
  }
  printf("\n_________________________________");
getch();
}