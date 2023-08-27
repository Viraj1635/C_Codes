#include <stdio.h>

int add(int a,int b);

int main()
{
	int a=10,b=10,c;
	c=add(a,b);
	printf("sum is:%d", c);
}
int add(int a,int b){
	return a+b;
}