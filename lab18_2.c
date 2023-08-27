#include <stdio.h>

int max(int a,int b);
int min(int a,int b);

int main()
{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	c=max(a,b);
	d=min(a,b);
	printf("max is:%d\n", c);
	printf("min is:%d", d);
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
