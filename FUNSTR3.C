#include<stdio.h>
#include<conio.h>
  void odd_even(int x[])
   {
     int i,even=0,odd=0;
     for(i=0;i<5;i++)
      {
	if(x[i]%2==0)
	 {
	  even++;
	 }
	 else
	  {
	    odd++;
	  }
	}
     printf("\nTotal no. of Even are=%d",even);
     printf("\nTotal no. of Odd are=%d",odd);
   }
  void main()
  {
    int no[5],i,max;
    clrscr();
    printf("\nEnter any 5 Nos:");
    for(i=0;i<5;i++)
     {
       scanf("%d",&no[i]);
     }
    odd_even(no);
    getch();
    }