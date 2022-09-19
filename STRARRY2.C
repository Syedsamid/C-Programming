#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  int i;
  clrscr();
  printf("Enter string:");
  scanf("%s",str);
  i=0;
  while(str[i]!='\0')
   {
    if(str[i]>=65&&str[i]<=90)
    {
     str[i]=str[i]+32;
    }
     else if(str[i]>=97&&str[i]<=122)
     {
     str[i]=str[i]-32;
     }
    i++;
   }
  printf("String=%s",str);
getch();
}
