#include <stdio.h>
struct book{
     char name;
     int pages;
};
int main(){
	struct book b1,b2;
	printf("Enter The Book Page And Name : ");
	scanf("%d",&b1.pages);
	scanf(" %c",&b1.name);
	printf("\nBook Name: %c \tPages: %d",b1.name,b1.pages);
	b2=b1;
	printf("\nBook Name: %c \tPages: %d\n",b2.name,b2.pages);
return 0;
}
