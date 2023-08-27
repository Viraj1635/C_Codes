#include <stdio.h>
int main()
{
	int a=2,*b;
	b=&a;
	printf("number a:%d\n",a);
	printf("address a:%d",b);
	return 0;
}
