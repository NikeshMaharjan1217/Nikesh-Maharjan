#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2,x;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter the value of c:");
	scanf("%f",&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("Root of quatric equation is %.2f and %.2f",x1,x2);
	getch();
}
