#include <stdio.h>
struct student
{
	int rollno;
	char name[50];
	int marks[3];
};
struct student add( );
void print(struct student s[]);
void result(struct student s);
void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		s[i]=add();
	}	
	print(s);
	
}
struct student add()
{
	struct student s;
	int i;
	printf("Enter roll no ");
	scanf("%d",&s.rollno);
	printf("Enter name");
	scanf("%s",s.name);
	for(i=0;i<3;i++)
	{
		printf("Enter marks %d",i+1);
		scanf("%d",&s.marks[i]);
	}
	return s;
}
void print(struct student s[])
{
	for(int i=0;i<5;i++)
	{
		printf("\nroll no  : %d",s[i].rollno);
		printf("\nname : %s",s[i].name);
		result(s[i]);
	}
}
void result(struct student s)
{
	int sum;
	for(int i=0;i<3;i++)
	{
		printf("Marks%d=%d",i+1,s.marks[i]);
		sum+=s.marks[i];
	}
	printf("Percentage = %f",sum/3.0);
}

