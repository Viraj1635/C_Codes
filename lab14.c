#include <stdio.h>
int main()
{
	int n,i,max,min,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter number:");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (i=0;i<n;i++)
	{
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
		sum+=a[i];
	}

	printf("max is:%d",max);
	printf("min is:%d",min);
	printf("sum is:%d",sum);
	printf("avg is:%d",(sum/n));
	return 0;
}
