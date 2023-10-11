#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="abcd",s2[50]="efgh";
	printf("%d\n",strcmp(s1,s2));
	strcat(s1,s2);
	puts(s1);
	return 0;
}
