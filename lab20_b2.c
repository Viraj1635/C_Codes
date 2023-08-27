#include <stdio.h>
struct student
{
	char name[50];
	int per;
	int age;
};
int main(){
	struct student *stdptr,std1;
	stdptr=&std1;
	printf("enter student name:");
	scanf("%s",stdptr->name);
	printf("enter percentage of student:");
	scanf(" %d",&stdptr->per);
	printf("enter age of student:");
	scanf(" %d",&stdptr->age);
	printf("\n");
	printf("name of student:%s\n",stdptr->name);
	printf("per of student:%d\n",stdptr->per);
    printf("age of student:%d\n",stdptr->age);
	printf("\n");
	return 0;
}
