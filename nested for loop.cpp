//lab11  june24
// nested for loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5,i=1,j=1,sum;
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
			printf("%d",sum);
		}
		printf("\n");
	
	}
}
