#include <stdio.h>
int main(){
int num=2;
while(num<10000){
num=num*num;
if(num>10000){
break;}
printf("%d \n",num);
}

return 0;
}
