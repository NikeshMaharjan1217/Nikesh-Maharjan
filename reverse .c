#include<stdio.h>
#include<conio.h>
int main()
{
	int x,x1,x2,x3,x4,x5;
	printf("Enter the value of three number:\n");
	scanf("%d",&x); 
	x5=x;                                                           
	x1=x%10;
	x=x/10;	
	x2=x%10;
	x=x/10;
	x3=x%10;
	x=x/10;
	x4=x1*100+x2*10+x3;
	printf("Reverse number is %d\n",x4);	
	if(x5==x4)
	{
		printf("the original and reverse are equal");
	}	
	else    
	{
		printf("The original value and reverse are not equal");
	}
	
	
	
}
