#include <stdio.h>
int main()
{
	int n,i=1,ans=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=10){
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans );
		i++;
	}
	return 0;
}