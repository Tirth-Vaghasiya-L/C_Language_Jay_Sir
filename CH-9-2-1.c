#include<stdio.h>
#include<string.h>

main()
{
	char pass[20],ltr,num,sp;
	int leng,i;
	
	printf("Enter Password :-");
	gets(pass);
	
	leng = strlen(pass);
	
	for(i=0;i<leng;i++)
	{
		if(pass[i] >= 65 && pass[i] <= 90 || pass[i] >= 97 && pass[i] <= 122)
		{	
			
		}
		else if(pass[i] >= 48 && pass [i] <= 57)
		{
			num++;
		}
		else
		{
			sp++;
		}
	}
	if(num > 0 && sp >0 && leng >0)
	{
		printf("Your Passwod Is Strong Enough !!");
	}
	else
	{
		printf("Your Passwod Is Not Strong Enough !!");
	}	
	
}
