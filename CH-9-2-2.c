#include<stdio.h>
#include<string.h>

main()
{
	char pass[20] = "123456",email[20] = "admin@gmail.com";
	char pass2[20],email2[20];
	
		
	printf("Enter Email :-");
	gets(email2);
	printf("Enter Password :-");
	gets(pass2);
	
	if(strcmp(email,email2) == 0)
	{
		if(strcmp(pass,pass2) == 0)
		{
			printf("Login Successful...");
		}
		else
		{
			printf("Login Failed.Invalid Credential");
		}
	}
	else
	{
		printf("Login Failed.Invalid Credential");
	}
	
}
