#include<stdio.h>

struct student
{
	int roll;
	char name[20];
	int chem;
	int phy;
	int maths;
};

void main()
{
	struct student s[5];
	int i;
	float per;
	FILE *fp;
	fp = fopen("Marksheet.txt","w");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Details Of Student %d :- \n",i+1);
		printf("Enter Roll No :- ");
		scanf("%d",&s[i].roll);
		printf("Enter Name :- ");
		scanf("%s",&s[i].name);
		printf("Enter Chemistry Marks :- ");
		scanf("%d",&s[i].chem);
		printf("Enter Physics Marks :- ");
		scanf("%d",&s[i].phy);
		printf("Enter Maths Marks :- ");
		scanf("%d",&s[i].maths);
	}
	
	fprintf(fp,"\n\t\tStudent Marksheet\n\n");
	fprintf(fp,"=============================================\n");
	
	fprintf(fp,"Name   ");
	for(i=0;i<5;i++)
	{
		fprintf(fp,"\t%s",s[i].name);
	}
	
	fprintf(fp,"\nChemistry ");
	
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%d\t",s[i].chem);
	}
	
	fprintf(fp,"\nPhysics   ");
	
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%d\t",s[i].phy);
	}
	
	fprintf(fp,"\nMaths     ");
	
	for(i=0;i<5;i++)
	{
		fprintf(fp,"%d\t",s[i].maths);
	}
	
	fprintf(fp,"\nPercentage ");
	
	for(i=0;i<5;i++)
	{
		per = per +s[i].chem + s[i].phy + s[i].maths/3;
		fprintf(fp,"%.2f\t",per);
		per = 0;
	}
	
	fclose(fp);
}
