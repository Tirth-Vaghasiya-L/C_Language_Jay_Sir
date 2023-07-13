#include<stdio.h>

void main()
{
	FILE *fp;
	int i;
	
	fp = fopen("fp.txt","w");

	for(i=1;i<=50;i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			fprintf(fp,"%d\n",i);
		}
	}
}
