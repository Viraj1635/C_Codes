#include <stdio.h>
int main()
{
	int n=20,m=2,i,j,pos=0,neg=0,z=0;
	int a[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (j==0)
			{
				printf("enter roll number:");
				scanf("%d",&a[i][j]);
			}
			else{
				printf("enter marks:");
				scanf("%d",&a[i][j]);
			}
		}
	}
	printf("Roll no. marks\n");
	for (i=0;i<n;i++)
	{
		printf(" %d        %d",a[i][0],a[i][1]);
		printf("\n");
	}
}
