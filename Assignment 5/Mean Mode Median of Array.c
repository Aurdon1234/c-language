#include<stdio.h>
int main()
{
	int arr[10]={1,1,1,2,2,3,4,5,6,6},mode,i,j,count1,count2=0;
	float sum=0;
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	printf("Mean of the given array is: %.2f\n",sum/10);
	for(i=0;i<10;i++)
	{
		count1=1;
		for(j=0;j<10;j++)
		{
			if(i==j)
			continue;
			else
			{
				if(arr[i]==arr[j])
				{
					count1++;
				}
			}
		}
		if(count1>count2)
		{
			count2=count1;
			mode=arr[i];
		}
	}
	printf("Mode of the given array is: %d (occurs %d times)\n",mode,count2);
	int n=sizeof(arr)/4;
	if(n%2!=0)
	printf("Median of the given array is: %d",arr[n/2]);
	else
	{
		printf("Median of the given array is: %.2f",(float)(arr[(n-1)/2]+arr[n/2])/2);
	}
	return 0;
}
