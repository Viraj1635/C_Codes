#include <stdio.h>
int main()
{
	int i=1,n;
	printf("\nprint using while: ");
	while(i<=10){
		printf("%d\t", i);
		i=i+1;
	}

	printf("\nprint using do while: ");
	i=1;
	do
	{
		printf("%d\t",i);
		i++;
	} 
	while (i<=10);

	printf("\nenter a number :");
	scanf("%d",&n);
	i=1;
	printf("\nprint 1 to n using while: ");
	while(i<=n){
		printf("%d\t", i);
		i=i+1;

	}

	printf("\nprint 1 to n using do while: ");
	i=1;
	do
	{
		printf("%d\t",i);
		i++;
	} 
	while (i<=n);
	return 0;
}