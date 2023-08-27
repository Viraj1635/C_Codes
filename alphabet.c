#include <stdio.h>
 int main(){   
    char c;
        printf("Enter value of c:");
        scanf("%c",&c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("Alphabet is vowel");/* code */
        }
        else
        {
            printf("Alphabet is consonant");
        }
	return 0;
}