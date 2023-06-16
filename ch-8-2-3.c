#include<stdio.h>

main()
{
	int n;
	printf("Enter Length oF Array :- ");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements :- ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i] = a[i] * a[i];
		printf("Square Array :- %d\n",a[i]);
	}
}
