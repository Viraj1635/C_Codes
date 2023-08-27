#include <stdio.h>
int main()
{
	int s,n,i=1,sum=0,avg=0;
	printf("enter total number:");
	scanf("%d",&s);
	while(i<=s){
	printf("enter number:");
	scanf("%d",&n);
	sum=sum+n;
	i++;
	}
	avg=sum/s;
	printf("%d\n",sum);
	printf("%d",avg);
	return 0;
}