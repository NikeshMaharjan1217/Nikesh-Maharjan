#include<stdio.h>
#include<conio.h>
int main()
{
	int l;
	printf("Enter the value of l:");
	scanf("%d",&l);
	if(l%4==0)
	{
		if(l%100==0)
		{
			if(l%400==0)
			{
				printf("It is leap year");
			}
			else
			{
				printf("It is not leap year");
			}
		}
		else
		{
			printf("It is leap year");
		} 
	}	                                                                  
    else
    {
		printf ("It is not a leap year");
	}
	getch();
}
