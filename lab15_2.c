#include <stdio.h>
int main()
{
	int n,i,neg=0;
	printf("enter number:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter number:");
		scanf("%d",&a[i]);
	}
	for (i=0;i<=n-1;i++)
	{
		if (a[i]<0)
		{
			neg++;
		}
	}
	printf("total nagative numbers:%d",neg);
	return 0;
}
 
