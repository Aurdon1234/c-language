#include<stdio.h>
int main() {
	float gross_salary,basic,da,ta;
	printf("Enter the basic salary: ");
	scanf("%f",&basic);
	da=10*basic/100;
	ta=12*basic/100;
	gross_salary=basic+da+ta;
	printf("Gross Salary is %f",gross_salary);
	return 0;
}
