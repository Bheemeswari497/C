/*#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter angles of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if (sum==180)
	{
		printf("triangle is valid");
	}
	else 
	{
		printf("traingle is not valid");
	}
	return 0;
}*/
#include<stdio.h>
struct student{
	int rollno;
	char name[50];
	float cgpa;
}s1;
int main()
{ 
struct student s1={1,swarna,9.8};
printf("enter the student details:\n");
printf("enter student rolln:\n");
scanf("%d",s1.rollno);
printf("enter student name:\n");
scanf("%s",s1.name);
printf("enter students cgpa:\n");
scanf("%f",s1.cgpa);
return 0;
}
