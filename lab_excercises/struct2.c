#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct class
{
	char name[30];
	int roll_no;
	char ch[1];
};
int i;
struct class student[5];
void display_student();
void record_student();
int main()
{
	
	record_student();
	display_student();
	return 0;
}

void record_student()
{
	printf("recording the details of five students\n");
	for(i=0;i<5;i++)
	{
		printf("enter the student name\n");
		scanf("%s",student[i].name);
		printf("enter the student roll number\n");
		scanf("%d",&student[i].roll_no);
		printf("enter the student gender\n");
		scanf("%s",student[i].ch);
	}
}

void display_student()
{
	printf("information list\n");
	for(i=0;i<5;i++)
	{
		printf("name :%s\t roll no:%d\t gender: %s\n",student[i].name,student[i].roll_no,student[i].ch);
	}
}	
		