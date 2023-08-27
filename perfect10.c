#include <stdio.h>
int main()
{
	int n,i=1,ans=1,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n){
		if (n%i==0)
		{
			printf("%d\t", i);
			sum=sum+i;
		}
		
		i++;
	}
	if (sum==n)
	{
		printf("number is perfect\n");
	}
	else{
			printf("number is not perfect\n");
	}
	return 0;
}