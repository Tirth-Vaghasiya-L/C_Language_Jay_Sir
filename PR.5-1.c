#include<stdio.h>

main()
{
	int n;
	printf("Enter Size Of Array :- ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for (i=0;i<n;i++)
	{
		printf("Enter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	printf("Negative Integers Of Array :- ");
	for (i=0;i<n;i++)
	{
		if(a[i] < 0)
		{
			printf("%d,",a[i]);
		}
	}
}
