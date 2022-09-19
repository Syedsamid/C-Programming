#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[10],str2[10];
  int i,j,l1,l2,flag;
  clrscr();
  printf("First string:");
  scanf("%s",&str1);
  printf("Second string:");
  scanf("%s",&str2);
  for(l1=0;str1[l1]!='\0';l1++)
  for(l2=0;str2[l2]!='\0';l2++)
  if(l1==l2)
   {
    i=0;
    while(str1[i]!='\0')
     {
       if(str1[i]!=str2[i])
	{
	 flag=1;
	 break;
	}
      i++;
     }
   }
  else if(flag==1)
   {
    printf("Both are same");
   }
   if(flag==0)
    {
     printf("Both are different");
    }
  else
  {
   printf("Both are different");
  }
getch();
}
