#include <stdio.h>
int main()
{
	int n,i=1,r,s;
	printf("enter number:");
	scanf("%d",&n);
		
	while(n>0){
		i=n%10;
		s=i+(r*10);
		printf("%d\t", i);
		n=n/10;
	}
	printf("digit in reverse is :%d\n", s);
	return 0;
}