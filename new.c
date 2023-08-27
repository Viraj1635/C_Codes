#include<stdio.h>
int main(){
	int a[]={10,20,30,40,50};
	int *ptr;
	int i,sum=0;
	ptr=a;
	for(i=0;i<5;i++){
		*ptr=*ptr+i;
		sum=sum+*ptr;
	}
	printf("sum of array:%d",sum);
	return 0;	
}
