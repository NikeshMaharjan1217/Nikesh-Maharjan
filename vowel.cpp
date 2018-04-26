#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("enter the value of character:\n");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch='A')||(ch='E')||(ch='I')||(ch='O')||(ch='U'))
	{
		printf("The given character is vowel");
	}
	else
	{
		printf("The given character is not vowel");
	}
	getch();
}
