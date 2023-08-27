#include <stdio.h>
int main()
{
	int i,n;
	printf("\nenter a starting number :");
	scanf("%d",&i);
	printf("\nenter a ending number :");
	scanf("%d",&n);
	while(i<=n){
		if (i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
	return 0;
}