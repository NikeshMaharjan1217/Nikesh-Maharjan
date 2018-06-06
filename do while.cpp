#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int pin,count=0;
	do
	{
	   system("cls");
	   if(count>0)
	   {
	   	    printf("***Invalid pin***");
	   }
	   printf("\nEnter pin number:");
	   scanf("%d",&pin);
	   count++;
	}while(pin!=1234&&count<3);
	   if(pin==1234)
	   {
	        printf("***WELCOME***");
	   }
	   else
	   {
	   	printf("***System falure due to too many try***");
	   }

	getch();
}
