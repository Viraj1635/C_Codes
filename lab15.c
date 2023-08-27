#include <stdio.h>
int main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	int a[n],b[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter number:");
		scanf("%d",&a[i]);
	}
	for (i=0;i<=n-1;i++)
	{
		b[i]=a[i];
	}
	printf("new array:");
	for (i=0;i<=n-1;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
