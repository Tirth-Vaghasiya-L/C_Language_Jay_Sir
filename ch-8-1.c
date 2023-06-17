#include<stdio.h>

main()
{
	int n;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);
	
	int a[n],i,counter;
	
	counter = 0;
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements:- ");
		scanf("%d",&a[i]);
		counter++;
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :-%d\n",i,a[i]);
	}
	printf("Length Of Array :- %d",counter);
}
