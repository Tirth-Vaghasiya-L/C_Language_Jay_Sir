#include<stdio.h>

main()
{
	char pass[20],upr,lwr,num,sp;
	int leng,i;
	
	printf("Enter Password :-");
  	scanf("%s",&pass[i]);
  		
	for(i=0;pass[i]!= NULL;i++)
	{
		leng++;
	}
		
	for(i=0;i<leng;i++)
	{
		if(pass[i] >= 65 && pass[i] <= 90 )
		{	
			upr++;
		}
		else if(pass[i] >= 97 && pass[i] <= 122)
		{
			lwr++;
		}
		else if(pass[i] >= 48 && pass [i] <= 57)
		{
			num++;
		}
		else
		{
			if(pass[i] == 32)
			{
				printf("Your Passwod Is Not Strong Enough !!");
				break;
			}
			else
			{
				sp++;
			}
		}
	}
	if(upr > 0 && lwr > 0 && num > 0 && sp >0 && leng > 0)
	{
		printf("Your Passwod Is Strong Enough !!");
	}
	else
	{
		printf("Your Passwod Is Not Strong Enough !!");
	}	
	
}
