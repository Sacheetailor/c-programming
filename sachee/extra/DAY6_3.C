#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h;
	clrscr();
	printf("enter b:");
	scanf("%d",&b);
	printf("enter h:");
	scanf("%d",&h);
	float a=0.5*b*h;
	printf("\n breadth is: %d",b);
	printf("\n hight is: %d",h);
	printf("\n area of triangle is: %f",a);

	getch();
}