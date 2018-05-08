#include<stdio.h>
#include<conio.h>
int main()
{
	int a,x;
	printf("Enter the value:");
	scanf("%d",&a);
	if(a<0)
	{
		a=-a;
    }
	printf("Absolute value is %d",a);	
	
	getch();	
}
