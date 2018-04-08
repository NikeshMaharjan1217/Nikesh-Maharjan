#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],i,j,determinant;
printf("Enter the  matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
determinant=a[0][0]*a[1][1]-a[1][0]*a[0][1];
printf("%d\n",determinant);
getch();
return(0);
}
