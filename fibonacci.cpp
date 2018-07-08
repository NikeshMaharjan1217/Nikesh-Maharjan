#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=9,a[9]={0,1};
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];	
	}
	for(i=0;i<n;i++)
	{
	printf("a[%d]=%d\n",i,a[i]);
    } 
}                                
