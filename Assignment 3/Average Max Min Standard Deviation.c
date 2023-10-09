#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e,avg,sd;
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Avg is: %d\n",avg);
	if((a>b)&&(a>c)&&(a>d)&&(a>e))
	printf("%d is max term\n",a);
	else if((b>a)&&(b>c)&&(b>d)&&(b>e))
	printf("%d is max term\n",b);
	else if((c>b)&&(c>a)&&(c>d)&&(c>e))
	printf("%d is max term\n",c);
	else if((d>b)&&(d>c)&&(d>a)&&(d>e))
	printf("%d is max term\n",d);
	else 
	printf("%d is max term\n",e);
	if((a<b)&&(a<c)&&(a<d)&&(a<e))
	printf("%d is min term\n",a);
	else if((b<a)&&(b<c)&&(b<d)&&(b<e))
	printf("%d is min term\n",b);
	else if((c<b)&&(c<a)&&(c<d)&&(c<e))
	printf("%d is min term\n",c);
	else if((d<b)&&(d<c)&&(d<a)&&(d<e))
	printf("%d is min term\n",d);
	else 
	printf("%d is min term\n",e);	
	sd=sqrt((pow(a-avg,2)+pow(b-avg,2)+pow(c-avg,2)+pow(d-avg,2)+pow(e-avg,2))/5);
	printf("%d",sd);
	return 0;
}
