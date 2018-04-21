
#include<stdio.h>
#include<conio.h>
main()
{
	float P,T,R,SI;
	printf("Enter the value of price,time and rate:\n");
	scanf("%f%f%f",&P,&T,&R);
	SI=(P*T*R)/100;
	printf("value of simple intrest is %.2f",SI);
	getch();
}
