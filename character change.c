#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("Upper case letter of %c is %c",ch,ch-32);
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("Lower case letter of %c is %c",ch,ch+32);
	}
	else
	{
		printf("The input character is error");
	}
	getch();	
}
