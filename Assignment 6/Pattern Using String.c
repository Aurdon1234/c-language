#include<stdio.h>
int main()
{
	char s[10]="UNIVERSITY";
	int i,j;
	for(i=0;i<10;i+=2)
	{
		for(j=0;j<i+2;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
	}
	for(i=8;i>0;i-=2)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}
