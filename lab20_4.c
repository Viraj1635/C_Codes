#include <stdio.h>
struct student
{
	char name[50];
	int per;
	int age;
};
int main(){
	int i;
	struct student student[5];
	for (i=0;i<5;i++){
	printf("enter student-%d name:",i+1);
	scanf("%s",student[i].name);
	printf("enter percentage of student:");
	scanf(" %d",&student[i].per);
	printf("enter age of student:");
	scanf(" %d",&student[i].age);
	}
	printf("\n");
	for (i=0;i<5;i++){
	printf("name of student%d:%s\n",i+1,student[i].name);
	printf("per of student%d:%d\n",i+1,student[i].per);
	printf("age of student%d:%d\n",i+1,student[i].age);
	printf("\n");
	}
	return 0;
}
