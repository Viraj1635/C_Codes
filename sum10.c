#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter number:");
	scanf("%d",&n);
		i=n%10;
		sum=sum+i;
	while(n>0){
		i=n%10;
		n=n/10;
	}
	sum=sum+i;
	printf("sum is %d\n", sum);
	return 0;
}