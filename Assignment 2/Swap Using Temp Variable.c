#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the first integer: ");
    scanf("%d",&a);
    printf("Enter the second integer: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d",b);
    return 0;
}
