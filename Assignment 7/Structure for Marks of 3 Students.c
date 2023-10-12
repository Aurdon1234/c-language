#include<stdio.h>
int main()
{
	struct mark
	{
		char name[20];int rollno;float marks;
	};
	struct mark m[3];
	int i;
	printf("Enter the Name, Roll Number, Marks of 3 students: \n");
	for(i=0;i<3;i++)
	scanf("%s %d %f",&m[i].name,&m[i].rollno,&m[i].marks);
	printf("Entered data is: \n");
	for(i=0;i<3;i++)
	printf("%s %d %f\n",m[i].name,m[i].rollno,m[i].marks);
	return 0;
}
