#include<stdio.h>

void divi()
{
	int a;
	
	printf("Enter Number :- ");
	scanf("%d",&a);
	
	if(a%3 == 0 && a%5 == 0)
	{
		printf("The Given Number Is Divisible By Both 3 And 5");
	}
	else
	{
		printf("The Given Number Is Not Is Divisible By Both 3 And 5");
	}
}

void main()
{
	divi();
}
