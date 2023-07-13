#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	int a;
	
	fp1 = fopen("fp1.txt","r");
	
	fscanf(fp1,"%d",&a);
	
	fp2 = fopen("fp2.txt","w");

	fprintf(fp2,"%d",a);
}
