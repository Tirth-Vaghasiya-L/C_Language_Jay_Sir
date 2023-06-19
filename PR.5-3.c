#include<stdio.h>

main()
{
	int n;
	printf("Enter Row  & Column Size :- ");
	scanf("%d",&n);
	
	int a[n][n],i,j,b;
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
