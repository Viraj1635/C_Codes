#include <stdio.h>
int main()
{
	int n,i,pos=0,neg=0;
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
		if (a[i]>0)
		{
			pos++;
		}
		else{
			neg++;
		}
	}
	printf("total positive numbers:%d\n", pos);
	printf("total negative numbers:%d", neg);
	return 0;
}