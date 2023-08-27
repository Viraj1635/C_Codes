	#include <stdio.h>
int main()
{
	int n,i,s;
	printf("enter number:");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=n-1;i++)
	{
		printf("enter number:");
		scanf("%d",&a[i]);
	}
	printf("serach number:");
	scanf("%d",&s);
	for (i=0;i<=n-1;i++)
	{
		if (a[i]==s)
		{
			printf("number index in array is :%d", i);
		}
	}
	return 0;
}
