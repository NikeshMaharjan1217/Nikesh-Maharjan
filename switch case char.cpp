#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	char ch; 
	printf("\n **Menu**");
	printf("\n1.To check wether the number is odd or even");
	printf("\n2.To check wether character is alphabet or not");
	printf("\n3.To check wether the character is vowel or not");
	printf("\n4.To check the number is divisible by 5 and 11 or not");
	printf("\nEnter your choise:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter the value:");
			scanf("%d",&x);
			x=x%2;
			if(x==0)
			{
				printf("The given value is even");
			}
			else
			{
			    printf("The given number is odd");
		    }
			break;
		case 2:
			printf("Enter the character");
			scanf("%c",&ch);
			if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
			{
				printf("The given character is alphabet");
			}
			
			else
			{
			    printf("The given character is not alphabet");
			}
			break;
		case 3:
		    printf("Enter the character");
			scanf("%c",&ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
			{
			 	printf("The given character is vowel");
		    }
		    else
			{
			    printf("The given character is not vowel");
			}
		    break;
		case 4:
			printf("Enter the value:");
			scanf("%d,&x");
			x=((x/5)&&(x/11));
			if(x==0)
			{
				printf("The number is divisible by 5 and 11");
			}
			else
			{
		        printf("The number is not divisible by 5 and 11");
		    }
			break;	
		default:
        printf("Invalid number or  character");
    }
	getch();
}
