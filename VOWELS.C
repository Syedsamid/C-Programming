#include<stdio.h>
#include<conio.h>
void main()
{
  char s;
  int a;
  printf("enter an alphabet\n");
  scanf("%d",&s);

  a=(s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
  if (a )
  {
   printf("it is vowel ",s);
  }
  else
   {
    printf("it is consonent",s);
   }
getch();
}
