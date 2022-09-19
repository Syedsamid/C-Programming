#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter Character:");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("It is a vowel");
break;
default:printf("It is not vowel");
}
getch();
}