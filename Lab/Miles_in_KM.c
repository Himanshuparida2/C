#include<stdio.h>
int main(){
double mile;
printf("Enter Miles:");
scanf("%lf", &mile);
double KMS_MILES=mile*1.609;
printf("%f Miles in %f KM \n",mile,KMS_MILES);
return 0;
}
