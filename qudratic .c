#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x1,x2;
	printf("Enter the value of a,b,c=\n");
	scanf("%d%d%d",&a,&b,&c);
	d= sqrt(b*b-4*a*c);
	if(d>0)
	{
		x1=(-b+d)/(2*a);
		x2=(-b-d)/(2*a);
		printf("The value x1 and x2 are %d and %d",x1,x2);
    }
    else if(d<0)
    {
    printf("roots are imaginary");
	}
	else
	{
		x1=-b/(2*a);
		printf("Value of x1 is %d",x1);
	}
	getch();	
}
