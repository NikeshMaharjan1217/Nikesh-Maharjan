#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	a=(a-b);
	b=(a+b);
	a=(b-a);
	printf("Swapping value of first number is:%d",a);
	printf("\nSwapping value of second number is:%d",b);
	getch();
}
