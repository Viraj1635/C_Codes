#include <stdio.h>
int main()
{
	int n,i=1,ans=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n){
		if (n%i==0)
		{
			printf("%d\t", i);
		}
		i++;
	}
	return 0;
}