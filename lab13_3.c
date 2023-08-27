#include <stdio.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (a=1;a<=i;a++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}
