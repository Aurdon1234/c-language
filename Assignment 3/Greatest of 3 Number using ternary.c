#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	(a>=b)?((a>=c)?(printf("%d is greatest",a)):(printf("%d is greatest",c))):((b>=c)?(printf("%d is greatest",b)):(printf("%d is greatest",c)));
	return 0;
}
