#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("enter num:");
	scanf("%d",&num);
		if (num>0)
	{
	printf("+ve");
	}
	else if(num<0)
	{
	printf("-ve");
	}
	else
	{
	printf("zero");
	}
	getch();
	}