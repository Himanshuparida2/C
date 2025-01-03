#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
void *val_num(void *val){
	int *val_num=(int *)(val);
	printf("Value=%d\n",*val_num);
}
void main(){
	int val=5;
	pthread_t tid;
	pthread_create(&tid,NULL,val_num,(void *)&val);
	pthread_join(tid,NULL);
}
