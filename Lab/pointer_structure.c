#include <stdio.h>
struct book{
	char name;
	int page;
};
int main(){
	struct book b1,b2;
	struct book *ptr;
	ptr=&b1;
	printf("Enter The Contents Page and Name: \n");
	scanf("%d %c",&b1.page,&b1.name);
	printf("Name Of the Book : %c\tPages : %d\n",ptr->name,ptr->page);
return 0;
}
