#include <stdio.h>
int main()
{
	int n,i,max=0,min=0;
	float sum=0;
	printf("enter number:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter %dth number:",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for (i=0;i<=n-1;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	min=a[0];
	for (i=0;i<=n-1;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
	}
	for (i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}

	printf("total maximun numbers:%d\n", max);
	printf("total minimum numbers:%d\n", min);
	printf("sum of numbers:%.0f\n", sum);
	printf("avrage of numbers:%.2f\n", sum/n);
	return 0;
}