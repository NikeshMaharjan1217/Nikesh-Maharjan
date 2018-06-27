 // june 27 lab 11
#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5,i=1,j=1,k=1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{	
		    printf(" ");
	   	}
	   	for(j=i;j<=n;j++)
	    {
		    printf("*");
	   	}
		printf("\n");
	}
}
