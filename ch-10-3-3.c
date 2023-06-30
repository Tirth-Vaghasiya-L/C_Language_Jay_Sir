#include<stdio.h>

int add(int a[],int n)
{
	int add = 0,i;
	
	if(n>0)
	{
		for(i=0;i<n;i++) 
		{
			add+=a[i];
		} 
		return add;
	}
	else
	{
		return 0;
	}
}


int array(int a[],int n,int b[])
{
	int i;
	for(i=0;i<n;i++)
	{
		b[i]=a[i]+add(a,i);
	}
}
void main()
{
	int n,i;
	
	printf("Enter Length :- ");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element :- ");
		scanf("%d",&a[i]);
	}
	
	array(a,n,b);
		
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
