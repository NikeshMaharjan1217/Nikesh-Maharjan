#include<stdio.h>
#include<conio.h>
main()
{
float a,b,c,d,e,f;
printf("Enter the price of a,b,c,d =\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
e=a+b+c+d+e;
f=e-(e/10.0);
printf("Total price of expenses =%.2f\n",e);
if(e>=5000)
{
	printf("Total price after discount is =%.2f",f);
}

else
{
    printf("Total price after discount is =%.2f\n",e);	
}

printf("\n\n\nThanks for shopping");
getch();
}
