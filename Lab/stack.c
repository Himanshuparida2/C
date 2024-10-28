#include <stdio.h>
#define max 10
int stack[max];
int* top;
void push(int el);
void display();
int main(){
    int topval=-1;
    top=&topval;
    for(int i=0;i<10;i++){
        push(i);
    }
    return 0;
}
void push(int el){
    stack[++*(top)]=el;
    top++;
}
void display(){
    for(int i=*top;i>0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}