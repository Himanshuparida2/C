#include <stdio.h>
int main(){
printf("1 -> Odd or Even \n");
printf("2 -> Prime No \n");
printf("3 -> Factorial Of a Number \n");
int n;
printf("Enter Your Choice: \n");
scanf("%d",&n);
int num;
printf("Enter Your Number: \n");
scanf("%d",&num);
int count =0;
switch(n){
case 1: if(num%2==0){
              printf("%d is a Even Number \n",num);
        }
        else{
        printf("%d is a Odd Number\n",num);
        }
        break;
case 2: for(int i=1;i<=num;i++){
              if(num%i==0){
              count++;
              }
         }
         if(count>=3){
             printf("%d is not Prime\n ",num);
         }
         else{
             printf("%d is Prime \n",num);
         }
        break;
case 3: if(num==0||num==1){
           printf("%d is the factorial \n",num);
           }
             else{
             for(int i=num-1;i>=1;i--){
                 num*=i;
             }
             printf("%d is the factorial \n",num);
           }
            break;
    }
return 0;
}
