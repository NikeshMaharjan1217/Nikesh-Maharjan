 //WAP to print reverse of number using array
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,num[10];
	printf("Enter number to be stored in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	for(j=4;j>=0;j--)
	{
		printf("Reverse value is %d\n",num[j]);
		
		
	 	
	}
	getch();
}


