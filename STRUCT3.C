#include<stdio.h>
#include<conio.h>
  struct  book
  {
   char bookname;
   int pages;
   char auther;
  };
  void main()
  {
   struct book b;
   clrscr();
   printf("Books name:");
   scanf("%s",&b.bookname);
   printf("Pages");
   scanf("%d",&b.pages);
   printf("Auther");
   scanf("%s",&b.auther);
   printf("\nDetail of books");
   printf("booksname=%s",b.bookname);
   printf("Pages=%d",b.pages);
   printf("Auther=%s",b.auther);
  getch();
}