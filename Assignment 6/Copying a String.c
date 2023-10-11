#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="abcdefghi",s2[20],s3[20];
	int i;
	for(i=0;i<strlen(s1);i++)
	{
		s2[i]=s1[i];
	}
	strcpy(s3,s1);
	printf("s2: %s\n",s2);
	printf("s3: %s",s3);
	return 0;
}
