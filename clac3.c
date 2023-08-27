#include <stdio.h>

float avg(int a,int b,int c);

int main(){
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=avg(a,b,c);
	printf("%f",d);
}
float avg(int a,int b,int c){
		return (a+b+c)/(float)3;

}
