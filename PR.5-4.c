#include<stdio.h>

main()
{
	int r,c,row,col;
	printf("Enter Row Size :- ");
	scanf("%d",&r);
	printf("Enter Column Size :- ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum,sum2;
	
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Row Number :- ");
	scanf("%d",&row);
	
	printf("\nElements Of Row :- ");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i == row)
			{
				printf("%d,",a[i][j]);
				sum += a[i][j];
			}
		}
	}
	
	printf("Enter Column Number :- ");
	scanf("%d",&col);
	printf("\nElements Of Column :- ");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j == col)
			{
				printf("%d,",a[i][j]);
				sum2 += a[i][j];
			}
		}
	}
	printf("\nSum Of %d Row Is :- %d",row,sum);
	printf("\nSum Of %d Column Is :- %d",col,sum2);
}
