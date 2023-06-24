#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int p,r,t;

	printf("Enter Principal :- ");
	scanf("%d",&p);
	printf("Enter Rate :- ");
	scanf("%d",&r);
	printf("Enter Time :- ");
	scanf("%d",&t);

	printf("Simple Interest Is :- %d",p*r*t/100);

	getch();
}