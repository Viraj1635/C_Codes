#include <stdio.h>
int main()
{
	int n,i=1,ans=0;
	printf("Enter a number:");
	scanf("%d\n",&n);
	while(i<=n){
		ans=ans+i;
		i++;
	}
	printf("n!:%d\n",ans );
	return 0;
}