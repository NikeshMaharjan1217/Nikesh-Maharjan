
#include<stdio.h>
#include<conio.h>
main()
{
	float l,b,area;
	printf("Enter the value of length and breath:\n");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("Area of rectangle is %.2f",area);
	getch();
}
