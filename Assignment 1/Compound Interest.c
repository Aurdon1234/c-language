#include<stdio.h>
#include<math.h>
int main(){
    float p,r,n,t,ci;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the interest rate(in decimal): ");
    scanf("%f",&r);
    printf("Enter the no. of time interest is compounded per year: ");
    scanf("%f",&n);
    printf("Enter the time(in years): ");;
    scanf("%f",&t);    
    ci=p*pow((1+r/n),n*t);
    printf("The compound interest is: %f",ci);
    return 0;
}
