
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,x;
	float s,area;
	printf("\n**Menu**");
	printf("\n1.Circle");
	printf("\n2.Rectangle");
	printf("\n3.Square");
	printf("\n4.Triangle");
	printf("\nEnter your choise");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Enter radius=");
		scanf("%d",&a);
		area=3.14*a*a;
		printf("Area is %.2f",area);
		break;
		case 2:
		printf("Enter length and breath=\n");
		scanf("%d",&a,&b);
		area=a*b;
		printf("Area is %.2f",area);
		break;	
		case 3:
		printf("Enter length=");
		scanf("%d",&a);
		area=a*a;
		printf("Area is %.2f",area);
		break;	
		case 4:
		printf("Enter three sides of triangle=\n");
		scanf("%d",&a,&b,&c);
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area is %.2f",area);
		break;	
		default:
		printf("Invalid number");
		break;		
	}
	
	getch();
}
