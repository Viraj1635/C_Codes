#include <stdio.h>
int main()
{
	int x,y,i=1,ans=1;
	printf("Enter x & y:");
	scanf("%d %d",&x,&y);
	while(i<=y){
		ans=ans*x;
		i++;
	}
	printf("value of x^y is :%d\n",ans );
	return 0;
}