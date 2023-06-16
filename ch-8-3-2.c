#include<stdio.h>

main()
{
	int r,c,r2,c2,i,j,sumr,sumc,n;
		
	printf("Enter Row Size :- ");
	scanf("%d",&r);
	printf("Enter Column Size :- ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter b[%d][%d] :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	int d[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}
