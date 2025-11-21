#include<stdio.h>
int main()
{
	int n,rem,add;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		n=n/10;
	    add=add+rem;
		printf("%d\n",add);
	}
	return 0;
}
