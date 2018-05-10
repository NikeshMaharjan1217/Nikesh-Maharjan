#include<stdio.h>
#include<conio.h>
int main()
{
	char a; 
	printf("\n **Menu**");
	printf("\n1.To check wether the number is odd or even");
	printf("\n2.To check wether character is alphabet or not");
	printf("\n3.To check wether the character is vowel or not");
	printf("\n4.To check the number is divisible by 5 and 11 or not\n");
	scanf("%c",&a);
	switch('a')
	{
		case 1:
			printf("Enter the value of a:");
			a=a%2;
			if(a==0)
			{
				printf("The given value is even");
			}
			else
			{
				printf("The given number is odd");
			}
			break;
		
		
		
	}
}
