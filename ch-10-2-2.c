#include<stdio.h>

int arraylength(char a[],int n)
{
	int i,leng = 0;	
	for(i=0; a[i]!=NULL;i++)
	{
		leng++;
	}
	
	return leng;
}

void main()
{
	int leng =0;
	char a[20];
	
	printf("Enter String :- ");
	gets(a);
	
	leng = arraylength(a,20);
	printf("Length Of String Is :- %d",leng);
}
