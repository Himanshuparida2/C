#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
void *detachfun(void *arg){
	int i=*((int *)(arg));
	fprintf(stderr,"Before Detached: argument is %d \n",i);
	if(!pthread_detach(pthread_self())){
		return NULL;
	}
	fprintf(stderr,"If cond fails: argumant is %d\n",i);
	return NULL;
}
int main(){
	int x=10;
	pthread_t tid;
	pthread_create(&tid,NULL,detachfun,(void *)&x);
	sleep(1);
return 0;
}
