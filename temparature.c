#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter temp in fahrenheit\n");
	scanf("%f",&fahrenheit);
	celsius=5.0/9*(fahrenheit-32);
	printf("%.2f fahrenheit is equal to %.2f celsius.\n",fahrenheit,celsius);
	return 0;
}
