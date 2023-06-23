#include<stdio.h>

main()
{
	char a[20],rev[20];
	int i,j,length,count;
	
	printf("Enter String :- ");
	scanf("%s",&a);
	
	for(i=0;a[i] != NULL;i++)
	{
		length++;
	}
	
	j = length-1;
	
	
	
	for(i=0;i<length;i++)
	{
		if(a[i] == a[j])
		{
			count++;
		}
		j--;
	}
	
	if(length == count)
	{
		printf("This String Is Palindrome");
	}
	else
	{
		printf("This String Is Not Palindrome");
	}
}
