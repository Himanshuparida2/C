#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *add(void *arg){
	printf("Thread Called function stmt\n");
	return NULL;
}

void main(){
	pthread_t tid;
	pthread_create(&tid,NULL,add,NULL);
	pthread_join(tid,NULL);
}
