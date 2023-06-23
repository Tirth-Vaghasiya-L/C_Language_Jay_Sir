#include<stdio.h>

main()
{
	char a[20];
	int i,j,count = 1;
	
	printf("Enter String :- ");
	scanf("%s",&a);
	
	for(i=0;a[i] != NULL;i++)
	{
		for(j=i+1;a[j] != NULL;j++)
		{
			if(a[i] == a[j])
			{
				count++;
				// 2
			}
		}
		printf("Frequency Of %c :- %d\n",a[i],count);
		count = 1;
	}
}
