#include<stdio.h>
#include<string.h>
int main(){
	char S[50];
	puts("Enter the string: ");
	gets(S);
	int i,count;
	count=0;
	for(i=0;i<strlen(S);i++){
		if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
			printf("%c\n",S[i]);
		    count++;
		}
	}
	printf("Number of vowels are: %d",count);
	return 0;
}
