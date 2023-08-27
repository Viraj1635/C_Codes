#include<stdio.h>

	int main(){
		float a,b,sum,sub,div,multi;
		int n;
		printf("enter value of A=");
		scanf("%f",&a);
		printf("enter value of B=");
		scanf("%f",&b);
		printf("enter 1 for addition,2 for subtraction,3 for multiplication,4 for divison =");
		scanf("%d",&n);
		switch(n){
		case 1:
			sum=a+b;
			printf("%.2f",sum);
			break;
		case 2:
			sub=a-b;
			printf("%.2f",sub);
			break;
		case 3:
			multi=a*b;
			printf("%.2f",multi);
			break;
		case 4:
			div=a/b;
			printf("%.2f",div);
			break;
		default:
			printf("error");
		}
	return 0;
}