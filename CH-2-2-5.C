#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int r;
	float pi = 3.14;

	printf("Enter Radius :- ");
	scanf("%d",&r);

	printf("Circumference Of Circle :- %.2f",r*pi*2);

	getch();
}