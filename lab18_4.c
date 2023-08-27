#include <stdio.h>

float max(float a,float b,float c);

float main()
{
	float a,b,c,d;
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	printf("enter c:");
	scanf("%f",&c);
	d=max(a,b,c);
	printf("max is:%f", d);
}
float max(float a,float b,float c){
	if(a>b){
		if (a>c)
		{
			return a;
		}
	}
	else if(b>c){
		return b;		
	}
	else{
		return c;
	}
}
