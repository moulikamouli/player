#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,factorial=1;
   int n;
   clrscr();
   printf("to find factorial of this number\n");
   printf("enter a number\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       factorial=factorial*i;
   }
   printf("factorial of %d =%d",n,factorial);
getch();
}


