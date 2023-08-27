#include <stdio.h>
int main()
{
	int n=3,m=3,i,j,pos=0,neg=0,z=0;
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
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (a[i][j]>0)
			{
				pos++;
			}
			else if(a[i][j]==0){
				z++;
			}
			else
			{
				neg++;
			}
		}
	}
	printf("total positive number:%d\n",pos);
	printf("total negative number:%d\n",neg);
	printf("zero's:%d\n",z);
}
