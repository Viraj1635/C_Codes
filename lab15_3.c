#include <stdio.h>
int main()
{
	int n,i,div=0;
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
		if (a[i]%3==0)
		{
			printf("%d,",a[i]);		
		}
	}
	printf("\b");
	printf(" \n");
	
	return 0;
}
 
