#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
void *thread_function(void *arg){
	int *i=(int *)arg;
	int *result=malloc(sizeof(int));
	*result=*i * 10;
	pthread_exit(result);
}
int main(){
	pthread_t tid;
	int val=1;
	pthread_create(&tid,NULL,thread_function,(void *)&val);
	int *result;
	pthread_join(tid,(void **)&result);
	printf("%d\n",*result);
	free(result);
	return 0;
}
