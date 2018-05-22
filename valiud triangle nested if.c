#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c)
	{
		if(a+c>b)
		{
		    if(b+c>a)
			{
				printf("Triangle is valid");
			}
			else
			{
			    printf("Triangle is invalid");
	        }
	    }
		else
		{
		    printf("Triangle is invalid");
	    }
 	}
	else
	{
		printf("Triangle is invalid");
    }
    getch();
}
