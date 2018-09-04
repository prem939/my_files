struct student 
{
	char name[20];
	int roll;
	char clgname[20];
};
#include<stdio.h>
void main()
{
	struct student s[2];
	for(int i=0;i<3;i++)
	{
		printf("enter the student name\n");
		scanf("%s",&s[i].name);
		
		printf("enter the id \n");
		scanf("%d",&s[i].roll);
		
		printf("enter the clg name \n");
		scanf("%d",&s[i].clgname);
	}
	
	for(int i=0;i<3;i++)
	{
		printf("name=%s id=%d  clgName=%d\n",s[i].name,s[i].roll,s[i].clgname);
	}
}
