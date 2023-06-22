#include<stdio.h>

main()
{
	char str[20];
	int i;
	
	printf("Enter String :- ");
	scanf("%[^\n]",&str);
	
	for(i=0;i<20;i++)
	{
		if(str[i] == ' ')
		{
			str[i+1] -= 32;	
		}
		else 
		{
			if(i == 0)
			{
				if(str[i] >= 65 && str[i] <= 90)
				{
					
				}
				else
				{
					str[i] -= 32;
				}
			}
		}
		
	}
	printf("Titlecase String :- %s",str);
}
