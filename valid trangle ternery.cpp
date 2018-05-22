#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	(a+b>c?(a+c>b?(b+c>a?printf("Triangle is valid"):printf("Triangle is invalid")):printf("Triangle is invalid")):printf("Triangle is invalid"));
	getch();
}
