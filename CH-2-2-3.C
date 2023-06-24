#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int l,h;
	float half= 0.5;

	printf("Enter Length Of Trianlge :- ");
	scanf("%d",&l);
	printf("Enter Heigth Of Trianlge :- ");
	scanf("%d",&h);

	printf("Area Of Triangle :- %.2f",l*h*half);

	getch();
}