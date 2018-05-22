#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the year:");
	scanf("%d",&n);
	n%4==0?(n%100==0?(n%400?printf("Leap year"):printf("Not a leap year")):printf("Not a leap year")):printf("Not a leap year");
	getch();
}
