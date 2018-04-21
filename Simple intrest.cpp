
#include<stdio.h>
#include<conio.h>
main()
{
	float P,T,R,SI;
	printf("Enter the value of price,time and rate:\n");
	scanf("%f%f%f",&P,&T,&R);
	SI=(P*T*R)/100;
	printf("Area of circle is %.2f",SI);
	getch();
}
