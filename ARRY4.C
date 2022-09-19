#include<stdio.h>
#include<conio.h>
void main()
{
  int no[10],i,key,flag=0;
  clrscr();

  printf("Enter any 10 number:");
  for(i=0;i<10;i++)
   scanf("%d",&no[i]);

  printf("Enter key");
  scanf("%d",&key);

  for (i=0;i<=9;i++)
  {
    if (key==no[i])
    {
      flag=1;
      break;
     }
   }
  if(flag==0)
  printf("%d not found ",key);
  else
  printf("%d found",key);

getch();
}
