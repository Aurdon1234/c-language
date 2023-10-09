#include<stdio.h>
int main(){
    int x,temp;
    printf("Enter an integer: ");
    scanf("%d",&x);
    temp=x;
    temp+=5;
    printf("x+=5: %d\n",temp);
    temp=x;
    temp-=5;
    printf("x-=5: %d\n",temp);
    temp=x;
    temp*=5;
    printf("x-=5: %d\n",temp);
    temp=x;
    temp/=5;
    printf("x-=5: %d\n",temp);
    return 0;
}
