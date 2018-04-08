#include<stdio.h>
#include<conio.h>
main()
{
	float f,c;
	printf("Enter temperature in fareneit:");
	scanf("%f",&f);
	c=5/9.0*(f-32);
	printf("Temperature in celsius is %f",c);
	getch();
}

