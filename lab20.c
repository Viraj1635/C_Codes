#include <stdio.h>
struct employee
{
	char name[50];
	char pos[50];
	char email[50];
	int sal;
};
int main(){
	struct employee empolyee1;
	printf("enter name:");
	scanf("%s",empolyee1.name);
	printf("enter position:");
	scanf("%s",empolyee1.pos);
	printf("enter E-mail:");
	scanf("%s",empolyee1.email);
	printf("enter salary:");
	scanf("  %d",&empolyee1.sal);
	printf("name of employee:%s\n",empolyee1.name);
	printf("position of employee:%s\n",empolyee1.pos);
	printf("E-mail of employee:%s\n",empolyee1.email);
	printf("salary of employee:%d\n",empolyee1.sal);

	return 0;
}
