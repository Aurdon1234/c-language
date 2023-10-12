#include<stdio.h>
int main()
{
	char name[3][20];
	int rollno[3];
	float marks[3];
	int i;
	pritnf("Enter the marks for 3 students: \n")
	for(i=0;i<3;i++)
	{
		scanf("%s %d %f",&name[i],&rollno[i],&marks[i]);
	}
	printf("Entered data is: \n");
	for(i=0;i<3;i++)
	{
		printf("%s %d %f\n",name[i],rollno[i],marks[i]);
	}
	return 0;
}
