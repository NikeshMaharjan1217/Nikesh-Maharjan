#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	switch(ch)
	{
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
		printf("It is a VOWEL");
	break;	
	default:
	    printf("It is not a VOWEL");
    }
    getch();
}
