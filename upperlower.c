#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("%c is a uppercase character\n",ch);	
	}
	else
	{
		printf("%c is a lower case character\n",ch);
	}
	return 0;
}
