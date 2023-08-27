#include <stdio.h>
int main()
{
	int n,m,i,j;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	int a[n][m],b[n][m],c[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("enter number of a:");
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("enter number of b:");
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
