#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c;
	float S,S1,area;
	a=10;
	b=12;
	c=15;
	S=(a+b+c)/2;
	S1=(S*(S-a)*(S-b)*(S-c));
	area=sqrt(S1);
	printf("Area of a triangle is %d",area);
	getch();
}
