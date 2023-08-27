#include<stdio.h>
void ao(int a[],int n,int *min,int *max,int *sum,float *avg);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int min,max,sum,n=10;
	float avg;
	ao(a,n,&min,&max,&sum,&avg);
	printf("Max=%d Min=%d Sum=%d Avg=%.2f",max,min,sum,avg);
}
void ao(int a[],int n,int *min,int *max,int *sum,float *avg){
	int i=0;
	*min=a[0];
	*max=a[0];
	*sum=0;
	for(i=0;i<n;i++){
		if(*max<a[i]){
			*max=a[i];
		}
		if(*min>a[i]){
			*min=a[i];
		}
		*sum=*sum+a[i];
	}
	*avg=(float)*sum/n;
}
