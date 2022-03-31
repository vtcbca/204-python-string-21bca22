//wap to create a function marksheet which print student marksheet using udf
//note:marksheet(sid,sname,m1,m2,.m3,total,percentage

#include<stdio.h>
#include<conio.h>
typedef struct marksheet
{
	int sid,m1,m2,m3,total;
	char sname[20];
	float per;
};
void input();
void marksheet(struct student);

{
	clrscr();
	input();
	getch();
}
void input ()
{
	struct student s;
	printf("\n enter student i'd:");
	scanf("%d",&s,sid);
	printf("|n enter student name:"):
	flushall()
	gets(s.name)
	printf("\n enter m1");
	scanf("%d",&s,m1);
	printf("\n enter m2");
	scanf("%d",&s,m2);
	printf("\n enter m3");
	scanf("%d",&s,m3);
	marksheet(s);
}
void marksheet(struct student x)
{
	x,total=x,m1=x,m2+x,m3;
	x,per=x,total/3;
	clrscr();
	printf("\n studen id: %d",x,sid);
	printf("\n student name: %s",x,sname);
	printf("\n marks1: %d",x,m1);
	printf("\n marks2: %d",x,m2);
	printf("\n marks3: %d",x,m3);
}

