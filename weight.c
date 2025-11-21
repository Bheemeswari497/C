#include<stdio.h>
int main()
{
	float weight,height,BMI;
	scanf("%f%f",&weight,&height);
	BMI=weight*height;
	if(BMI<18.5)
	{
		printf("underweight");
	}
	else if(BMI>=18.5 && BMI<=24.9)
	{
		printf("Normal weight");
	}
	else if(BMI>=25 && BMI<=29.9)
	{
		printf("Over weight");
	}
	else
	{
		printf("obesity");
	}
	return 0;
}
