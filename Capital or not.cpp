#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("enter the value of character:\n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("The given character is capital");
	}
	else
	{
		printf("The given character is not capital");
	}
	getch();
}
