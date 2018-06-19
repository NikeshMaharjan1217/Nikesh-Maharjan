  //lab10 june 19
 //WAP to find factorial of any num
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,fact=1;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
		printf("i is %d\n",i);
	
	}
	printf("factorial of %d is %d",a,fact);
	getch();
}
