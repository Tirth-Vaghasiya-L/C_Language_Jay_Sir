#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int r=0;
	float pi,area;
	pi=3.14;

	printf("Enter Radius :- ");
	scanf("%d",&r);

	area = r*r*pi;

	printf("Area Of Circle :- %.2f",area);

	getch();
}