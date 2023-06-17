#include<stdio.h>

main()
{
	int n;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);
	
	int a[n],i,sum = 0;
	float average;
		
	for(i=0;i<n;i++)
	{
		printf("Enter Elements:- ");
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	average = sum / n;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :-%d\n",i,a[i]);
	}
	printf("Average Of Array :- %.2f",average);
}
