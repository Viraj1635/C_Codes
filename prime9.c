#include <stdio.h>
int main()
{
	int n,i=2,sum=0,c=0;
	printf("enter number:");
	scanf("%d",&n);
		
	while(i<=n){
		if (n%i==0)
		{
			c++;
		}
		i++;
	}
	if (c==2)
	{
		printf("number is prime\n");
	}
	else
	{
		printf("number is not prime\n");
	}
	
	return 0;
}