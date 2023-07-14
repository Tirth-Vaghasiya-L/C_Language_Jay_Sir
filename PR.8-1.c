#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	
	fp1 = fopen("even.txt","w");
	fp2 = fopen("odd.txt","w");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fp1,"%d\n",i);
		}
	}
}
