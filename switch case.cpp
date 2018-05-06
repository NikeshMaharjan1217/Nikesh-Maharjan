#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	printf("Enter thge value of x =");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Sunday");
		break;
		case 2:
		printf("Monday");
		break;
		case 3:
		printf("Tuesday");
		break;
		case 4:
		printf("Wednesday");
		break;
		case 5:
		printf("Thrusday");
		break;
		case 6:
		printf("Friday");
		break;
		case 7:
		printf("Saturday");
		break;
	}
	getch();
}
