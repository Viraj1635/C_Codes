#include <stdio.h>
int main()
{
	int n,i,odd=0,even=0;
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
		if (a[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	printf("total even numbers:%d\n", even);
	printf("total odd numbers:%d", odd);
	return 0;
}