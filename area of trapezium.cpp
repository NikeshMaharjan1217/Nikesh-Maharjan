
#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,h,area;
	printf("Enter the value of two bases and height:\n");
	scanf("%f%f%f",&a,&b,&h);
	area=1/2.0*(a+b)*h;
	printf("Area of trapezium is %.2f",area);
	getch();
}
