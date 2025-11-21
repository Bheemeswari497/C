#include<stdio.h>
int main()
{
	char item[20];
	scanf("%s",item);
	int uCount=0,lCount=0,dCount=0,sCount=0;
	int i;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		{
			uCount++;
		}
		else if(item[i]>='a' && item[i]<='z')
		{
		   lCount++;	
		}
		else if(item[i]>='0' && item[i]<='9')
		{
			dCount++;
		}
		else
		sCount++;
	}
	printf("No of Upper Case characters : %d\n",uCount);
	printf("No of Lower Case characters : %d\n",lCount);
	printf("No of digits : %d\n",dCount);
	printf("No of symbols : %d\n",sCount);
	return 0;
}
