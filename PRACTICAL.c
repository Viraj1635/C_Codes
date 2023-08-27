#include <stdio.h>
 int main(){   
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if (a>=b){
                if (a>=c)
                {  
                    printf("a is bigger");
                }
                else
                {
                    printf("c is bigger");
                }
            }
    else if (b>=a){
                if (b>=c)
                {  
                    printf("b is bigger");
                }
                else
                {
                    printf("c is bigger");
                }
            }       
      
	return 0;
}