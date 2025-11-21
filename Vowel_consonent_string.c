#include<stdio.h>
int main()
{
	char item[20];
	scanf("%s",item);
	int i;
	int vcount=0,cCount=0;
	for(i=0;item[i]!='0';i++)
	{
		if(item[i]=='a' || item[i]=='e' || item[i]=='i' ||item[i]== 'o' ||item[i]== 'u')
		{
			vcount++;
		}
		else
		{
			cCount++;
		}
		printf("Number of Vowels:%d",vcount);
		printf("Number of consonents:%d",cCount);
	gets(item);	
	}
	return 0;
}
