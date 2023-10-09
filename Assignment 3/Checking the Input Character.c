#include<stdio.h>
int main(){
	char c;
	printf("Enter any character: ");
	scanf("%c",&c);
	int i=c;
	if(i<=122&&i>=97)
	printf("Lowercase Alphabet");
	else if(i<=90&&i>=65)
	printf("Uppercase Alphabet");
	else if(i<=57&&i>=48)
	printf("Digit");
	else
	printf("Special Character");
	return 0;
}
