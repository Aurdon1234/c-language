#include<stdio.h>
int main(){
	int large,small,limit,num,i=0;
	printf("enter the limit of numbers: ");
	scanf("%d",&limit);
	scanf("%d",&num);
	large = small = num;
	limit--;
	while(i<limit){
		scanf("%d",&num);
		if(num>large){
			large=num;
		}
		if(num<small){
			small=num;
		}
		i++;
	}
	printf("range of the numbers is from %d to %d",small,large);
	return 0;
}
