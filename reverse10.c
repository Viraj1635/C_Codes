#include <stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("enter number:");
	scanf("%d",&n);
		
	while(n>0){
		i=n%10;
		s=i+(s*10);
		n=n/10;
	}
	printf("digit in reverse is :%d\n", s);
	return 0;
}