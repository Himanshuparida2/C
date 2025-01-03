#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
void *func1(void *arg){
	while(1){
		printf("%d",1);
	}
return NULL;
}
void *func2(void *arg){
	while(1){
		printf("%d",2);
	}
return NULL;
}
int main(){
	pthread_t tid,tid1;
	pthread_create(&tid,NULL,func1,NULL);
	pthread_create(&tid1,NULL,func2,NULL);
	pthread_join(tid,NULL);
	pthread_join(tid1,NULL);
	return 0;
}
