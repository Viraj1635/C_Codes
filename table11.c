#include <stdio.h>
int main()
{
	int n,i,ans=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans );
	}
	return 0;
}