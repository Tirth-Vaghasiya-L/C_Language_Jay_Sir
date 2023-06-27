#include<stdio.h>

int arraysum(int a[],int n)
{
	int i,sum =0;
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	return sum;
}

int arrayinput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
}

void main()
{
	int n,sum = 0;
	printf("Enter Length Of Array :-");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput(a,n);
	sum = arraysum(a,n);
	printf("Sum Of Array Is :- %d",sum);
}
