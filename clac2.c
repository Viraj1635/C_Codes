#include<stdio.h>
void ao(int a[],int n,int *odd,int *even);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int even,odd,n=10;
	ao(a,n,&odd,&even);
	printf("odd=%d even=%d",odd,even);
}
void ao(int a[],int n,int *odd,int *even){
	int i=0;
	*even=0;
	*odd=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			*even=*even+1;
		}
		else{
			*odd=*odd+1;
		}
	}
}
