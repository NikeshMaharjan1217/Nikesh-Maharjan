#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("%d is greater",a>b?a:b);
	getch();
}
