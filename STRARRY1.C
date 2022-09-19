#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  int i,v=0,c=0;
  clrscr();
  printf("Enter string:");
  scanf("%s",&str);
  i=0;
  while(str[i]!='\0')
  {
   if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u');
    {
     v++;
    }
   else
    {
     c++;
    }
   i++;
  }
  printf("\nNo of vowels=%d",v);
  printf("\No of Counsonants=%d",c);
getch();
}