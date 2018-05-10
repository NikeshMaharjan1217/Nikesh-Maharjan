#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter the value cp and sp:\n");
	scanf("%d%d",&cp,&sp);
	if(cp<sp)
	{
		profit=sp-cp;
		printf("Profit is %d",profit);
	}
	else
	{
		loss=cp-sp;
		printf("Loss is %d",loss);
	}
	getch();	
}
