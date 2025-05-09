
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter the first number:");
	scanf("%d",&a);
	printf("\n enter the second nember:");
	scanf("%d",&b);

	while(a<=b)
	{
	if(a%4==0 && a%100!=0)

	printf("%d ",a);
	}

	getch();
}