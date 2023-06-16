#include<stdio.h>

main()
{
	int a,b,i;
	
	printf("Enter First Year :- ");
	scanf("%d",&a);
	printf("Enter Second Year :- ");
	scanf("%d",&b);
	
	for(i=0;a<=b;i++)
	{
		printf("Leap Year :- %d\n",a);
		a+=4;
	}
}
