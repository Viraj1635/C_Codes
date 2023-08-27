#include<stdio.h>
int SI(int,int,int);
int main()
{
	int p,r,n,si;
	printf("Enter P: ");
	scanf("%d",&p);
	printf("Enter R: ");
	scanf("%d",&r);
	printf("Enter N: ");
	scanf("%d",&n);
	si=SI(p,r,n);
	printf("Simple Intrest: %d",si);
}
int SI(int a,int b,int c)
{
	int f;
	f=(a*b*c)/100;
	return f;
}
