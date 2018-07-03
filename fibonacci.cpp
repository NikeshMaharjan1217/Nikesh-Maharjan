
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,a[]={1,5,6,3,5,2,8,5};
	printf("Enter the value of old and new:\n");
	scanf("%d%d",&x,&y);
	for(i=0;i<=7;i++)
	{
		if(x==a[i])
		a[i]=y;
	}
	for(i=0;i<=7;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}


