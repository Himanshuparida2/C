#include <stdio.h>
struct planet{
char name[10];
double rad;
int mass;
double dia;
};
int scan_struct(struct planet p1);
int main(){
	struct planet p1;
	int result=scan_struct(p1);
	printf("%d\n",result);
return 0;
}
int scan_struct(struct planet p1){
       printf("Enter Planet Name,rad,mass,dia : ");
       int result=scanf("%s %lf %d %lf",p1.name,&p1.rad,&p1.mass,&p1.dia);
       return result;
}
