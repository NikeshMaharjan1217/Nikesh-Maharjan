#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("%d<%d is %d",a,b,a<b);
	printf("\n%d<=%d is %d",a,b,a<=b);
	printf("\n%d>%d is %d",a,b,a>b);
	printf("\n%d>=%d is %d",a,b,a>=b);
	printf("\n%d==%d is %d",a,b,a==b);
	printf("\n%d!=%d is %d",a,b,a!=b);
	getch();
}
