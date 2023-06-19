#include<stdio.h>

main()
{
	int r,c;
	printf("Enter Row Size :- ");
	scanf("%d",&r);
	printf("Enter Column Size :- ");
	scanf("%d",&c);
	
	int a[r][c],i,j,b;
	
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j] > b)
			{
				b = a[i][j];
			}
		}
	}
	printf("Largest Element :- %d",b);
}
