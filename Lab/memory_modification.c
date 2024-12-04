#include <stdio.h>
#include <stdlib.h>
struct book{
	char name;
	int page;
};
void print_struct(struct book *b1){

printf("Name: %c\tPage: %d \n",b1->name,b1->page);
}
int main(){
	struct book *b1;
	b1=(struct book*)malloc(sizeof(struct book));
	printf("Enter The Contents Page and Name: \n");
	scanf("%d %c",&b1->page,&b1->name);
	print_struct(b1);
	printf("Size of Structure : %ld\n",sizeof(b1));
	if(b1!=NULL){
		free(b1);
	}
return 0;
}
