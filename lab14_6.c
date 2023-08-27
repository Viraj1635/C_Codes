#include <stdio.h>
int main()
{
	int n,i,abavg=0;
	float sum=0,avg=0;
	printf("enter number:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter %dth number:",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	
	for (i=0;i<=n-1;i++)
	{
		if (avg<a[i])
		{
			abavg++;
		}
	}
	printf("avrage of numbers:%.2f\n",avg );
	printf("number grater than avrage:%d\n",abavg );
	return 0;
}