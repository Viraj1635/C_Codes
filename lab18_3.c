#include <stdio.h>

int si(int p,int r,int n);

int main()
{
	int p,r,n,c;
	printf("enter principle value:");
	scanf("%d",&p);
	printf("enter rate of intrest:");
	scanf("%d",&r);
	printf("enter no. of years:");
	scanf("%d",&n);
	c=si(p,r,n);
	printf("sum is:%d", c);
}
int si(int p,int r,int n){
	return (p*r*n)/100;
}
