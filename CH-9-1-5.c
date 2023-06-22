#include<stdio.h>

main()
{
	int length = 50 ,i,j;
	char str[length];
	
	printf("Enter String :- ");
	scanf("%[^\n]",&str);
	
	for(i=0;i<length;i++)
	{
		if(str[i] == ' ')
		{
			str[i+1] -= 32;
			for(j=i;j<length;j++)  
		    {  
		       str[j] = str[j+1];  
		    }  
	        length--;  
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
	printf("Camel case String :- %s",str);
}
