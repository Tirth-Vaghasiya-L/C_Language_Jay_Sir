#include<stdio.h>

main()
{
	int r,c,i,j,sum,n;
	float avg;	
	printf("Enter Row Size :- ");
	scanf("%d",&r);
	printf("Enter Column Size :- ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
			sum += a[i][j];
		}
	}
	
	n=r*c;
	avg = sum/n;
	printf("Average is :- %.2f",avg);
}
