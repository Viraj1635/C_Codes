#include <stdio.h>
int main()
{
	float r,g,b,w,c,m,y,k,max;
	printf("enter value of R=");
	scanf("%f",&r);
	printf("enter value of G=");
	scanf("%f",&g);
	printf("enter value of B=");
	scanf("%f",&b);
	 max = r;  
        if(g > max)  
        {  
            max = g;  
        }  
  
        if(b > max)  
        {  
            max = b;  
        }  
  
        w= max/255;  
	c=(w-(r/255))/w;
	m=(w-(g/255))/w;
	y=(w-(b/255))/w;
	k=1-w;
	printf("CMYK = (%f, %f, %f, %f)\n",c,m,y,k  ); 

	return 0;
}