#include<stdio.h>

	int main(){
		float a,b,sum,sub,div,multi;
		char n;
		printf("enter value of A=");
		scanf("%f",&a);
		printf("enter value of B=");
		scanf("%f",&b);
		printf("enter value of operation=");
		scanf(" %c",&n);
		if (n=='+')
		{
			sum=a+b;
			printf("%.2f",sum);
		}
		else if (n=='-')
		{
			sub=a-b;
			printf("%.2f",sub);
		}

		else if (n=='*')
		{
			multi=a*b;
			printf("%.2f",multi);
		}

		else if (n=='/')
		{
			div=a/b;
			printf("%.2f",div);
		}
		return 0;
	}