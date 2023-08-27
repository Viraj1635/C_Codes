#include <stdio.h>
struct book
{
	char title[50];
	char author[50];
	char public[50];
	int price;
};
int main(){
	int i;
	struct book book[3];
	for (i=0;i<3;i++){
	printf("enter book-%d title:",i+1);
	scanf("%s",book[i].title);
	printf("enter name of author:");
	scanf("%s",book[i].author);
	printf("enter name of publication:");
	scanf("%s",book[i].public);
	printf("enter book price:");
	scanf("  %d",&book[i].price);
	}
	printf("\n");
	for (i=0;i<3;i++){
	printf("title of book%d:%s\n",i+1,book[i].title);
	printf("author of book%d:%s\n",i+1,book[i].author);
	printf("publication of book%d:%s\n",i+1,book[i].public);
	printf("price of book%d:%d\n",i+1,book[i].price);
	printf("\n");
	}
	return 0;
}
