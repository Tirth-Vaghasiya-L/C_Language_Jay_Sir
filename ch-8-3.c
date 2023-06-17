#include<stdio.h>

main()
{
	int n;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);
	
	int a[n],i,b[n],c[n];
		
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter b[%d] :- ",i);
		scanf("%d",&b[i]);
		c[i] = a[i] + b[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("c[%d] :-%d\n",i,c[i]);
	}
}
