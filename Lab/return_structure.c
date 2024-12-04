#include <stdio.h>
struct book{
int page;
char name[10];
};
struct book get_struct();
int main(){
	struct book b1;
	b1=get_struct();
	printf("Data of b1\n");
	printf("Name Of Book : %s \nNumber of pages: %d\n",b1.name,b1.page);
	return 0;
}
struct book get_struct(){
	struct book b2;
	printf("Enter Name of Book and Number of Pages: ");
	scanf("%s %d",b2.name,&b2.page);
	return (b2);
}
