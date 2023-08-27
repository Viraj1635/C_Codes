#include<stdio.h>

int main(){
	
	int n,i,j,temp;
	
	printf("Enter a n:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(a[i]<a[j]){
				a[i]=a[j];
				
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
