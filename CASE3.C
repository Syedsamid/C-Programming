#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("Enter any alphabets between a to z\n");
  scanf("%c",&ch);
  switch (ch)
  {
   case'a': printf("a as in ashar\n"); break;
   case'b': printf("b as in brain\n"); break;
   case'c': printf("c as in cookie\n"); break;
   case'd': printf("d as in ditermination\n"); break;
   case'e': printf("e is for eligebilitey\n"); break;
   case'f': printf("f is for fortune\n"); break;
   case'g': printf("g is for gole\n"); break;
   case'h': printf("h is for honest\n"); break;
   case'i': printf("i is for Indian\n"); break;
   case'j': printf("j is for joker\n"); break;
   case'k': printf("k is for knight rider\n"); break;
   case'l': printf("l is for luxdary\n"); break;
   case'm': printf("m is for marvolous\n"); break;
   case'n': printf("n is for national\n"); break;
   case'o': printf("o is for ocean\n"); break;
   case'p': printf("p is for pegion\n"); break;
   case'q': printf("q is for quadrilatral\n"); break;
   case'r': printf("r is for resources\n"); break;
   case's': printf("s is for superstitions\n"); break;
   case't': printf("t is for talent\n"); break;
   case'u': printf("u is for universal\n"); break;
   case'v': printf("v is for victory\n"); break;
   case'w': printf("w is for woodpeaker\n"); break;
   case'x': printf("x is for xylophone\n"); break;
   case'y': printf("y is for yoyo\n"); break;
   case'z': printf("z is for zebra\n");

   default:printf("Enter alphabets\n");
}
getch();
}