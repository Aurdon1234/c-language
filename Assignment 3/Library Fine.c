#include<stdio.h>
int main(){
	int days;
	scanf("%d",&days);
	if(days<=5)
	printf("You are charged with a fine of 50 paisa.");
	else if(days<=10)
	printf("You are charged with a fine of 1 rupee.");
	else if(days<=30)
	printf("You are charged with a fine of 5 rupees.");
	else
	printf("You are charged with a fine of 5 rupees and your subscription is cancelled.");
	return 0;
}
