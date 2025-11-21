#include<stdio.h>

void wish()
{
	printf("hello world\n");
}

int main()
{
	wish();
	printf("control comes from wish function\n");
	wish();
	return 0;
}

