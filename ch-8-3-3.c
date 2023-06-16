#include<stdio.h>

main()
{
	int i,j,sum;
	
	int a[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	
	sum = 0;
	
	for(i = 0; i<5; i++)
	{
	   for(j = 0; j<5; j++)
	   {
	      if (i == 0 || j == 0 || i == 5 - 1 || j == 5 - 1)
		  {
	        printf("%d ", a[i][j]);
	        sum += a[i][j];
	      }
	      else
		  {
	        printf("  ");
	      }
	  	}
	  	printf("\n");
	}
	
	printf("Sum Of Boundary Elements Is :- %d",sum);
	
}
