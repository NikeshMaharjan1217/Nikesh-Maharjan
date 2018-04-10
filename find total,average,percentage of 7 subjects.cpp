#include<stdio.h>
#include<conio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,s7,average,total,percentage;
	float totalmarks=700;
	printf("Enter the value of seven subjects:\n");
	scanf("%f%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
	total=(s1+s2+s3+s4+s5+s6+s7);
	printf("Total marks obtained is: %f\n",total);
	average=(total)/7;
	printf("Average marks obtained is: %f",average);
	percentage=((total/totalmarks)*100);
	printf("Percentage obtained is: %f",percentage);
	getch();
}
