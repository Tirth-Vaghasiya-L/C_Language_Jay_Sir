#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int a,b;
	a=12;
	b=6;
	printf("Addition Of %d And %d Is :- %d\n",a,b,a+b);
	printf("Subtraction Of %d And %d Is :-%d\n",a,b,a-b);
	printf("Multiplication Of %d And %d Is :- %d\n",a,b,a*b);
	printf("Division Of %d And %d Is :- %d\n",a,b,a/b);
	printf("Modulo Of %d And %d Is :- %d",a,b,a%b);

	getch();
}