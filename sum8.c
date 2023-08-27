#include <stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("\nenter a ending number :");
	scanf("%d",&n);
	while(i<=n){
		if (i==n)
			printf("%d=",i);
		else 
			printf("%d+",i);
		{
			/* code */
		}
		sum=sum+i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}