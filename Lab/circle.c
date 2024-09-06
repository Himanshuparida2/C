//Area of Circle
#include<stdio.h>
#define pie 2.14
int main(){
double a,area,circum;
printf("Enter Radius: ");
scanf("%lf",&a);
area=pie*a;
circum=2*pie*a;
printf("Area = %f , Circumferance = %f",area,circum);
return 0;
}
