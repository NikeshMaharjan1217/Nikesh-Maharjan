#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
	if((n%2==1)&&(n%5==0) )
	{
		printf("a is odd and divisible by 5");
	}
	else
	{
		printf("a is even or not divisible by 5");
	}
	getch();
}
