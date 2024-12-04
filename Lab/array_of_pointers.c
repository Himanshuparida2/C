#include <stdio.h>
struct Student{
	char name[20];
	int reg;
	int sec;
};
int main(){
	struct Student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter Name : \n");
		scanf(" %s",s[i].name);
		printf("Enter Registration Number: \n");
		scanf("%d",&s[i].reg);
		printf("Enter Section: \n");
		scanf("%d",&s[i].sec);
	}
	for(i=0;i<3;i++){
		printf("Enter Name : %s\tReg. No: %d\tSection: %d\n",s[i].name,s[i].reg,s[i].sec);
	}
	return 0;
}
