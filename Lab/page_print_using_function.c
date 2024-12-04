#include <stdio.h>
struct book{
	char name;
	int page;
};
void printpage();
int main(){
struct book b1,b2;
printf("Enter The Contents Page and Name: \n");
scanf("%d %c",&b1.page,&b1.name);
printpage(b1.page);
return 0;
}
void printpage(int p){
printf("Page: %d \n",p);
}
