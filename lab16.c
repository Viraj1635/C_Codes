#include <stdio.h>
int main()
{
	int n,m,i,j;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	int a[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("enter number:");
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
