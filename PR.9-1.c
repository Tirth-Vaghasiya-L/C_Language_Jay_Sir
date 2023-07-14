#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	int i;
	
	fp1 = fopen("even.txt","w");
	fp2 = fopen("odd.txt","w");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fp1,"%d\n",i);
		}
		else
		{
			fprintf(fp2,"%d\n",i);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
}
