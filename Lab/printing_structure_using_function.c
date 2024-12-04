#include <stdio.h>
struct book{
	char name;
	int page;
};
void print_struct(struct book b1);
int main(){
struct book b1,b2;
printf("Enter The Contents Page and Name: \n");
scanf("%d %c",&b1.page,&b1.name);
print_struct(b1);
return 0;
}
void print_struct(struct book b1){

printf("Name: %c\tPage: %d \n",b1.name,b1.page);
}
