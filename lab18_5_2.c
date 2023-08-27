#include <stdio.h>

void swap(int *a,int *b);

int main()
{
	int a=10,b=20,c;
	swap(&a,&b);
	printf("after swapin a=%d b=%d", a,b);
}
void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
