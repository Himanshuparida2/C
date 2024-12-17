#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *binaryfile;
	int i;
	binaryfile=fopen("nums.bin","wb");
	for(i=2;i<=500;i+=2){
		fwrite(&i,sizeof (int), 1, binaryfile);
	}
	fclose(binaryfile);
	return 0;
}
