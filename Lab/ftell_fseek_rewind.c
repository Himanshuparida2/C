#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fileptr;
	long position;
	char buffer[256];
	fileptr=fopen("text.txt","w+");
	if(fileptr==NULL){
		printf("Unable to open the file");
		return 1;
	}
	fputs("Hello World\n",fileptr);
	fputs("File Handling in C is fun.\n",fileptr);
	fputs("This Demonstrates ftell, fseek and rewind.\n",fileptr);
	position=ftell(fileptr);
	printf("Current Position of the Pointer : %ld \n",position);
	fseek(fileptr,0,SEEK_SET);
	printf("\nReading the file from the start after seeking to the start:\n");
	while(fgets(buffer,sizeof(buffer),fileptr)!=NULL){
		printf("%s",buffer);
	}
	printf("\n");
	fseek(fileptr,13,SEEK_SET);
	while(fgets(buffer,sizeof(buffer),fileptr)!=NULL){
		printf("%s",buffer);
	}
	printf("\n");
	position=ftell(fileptr);
	printf("File position after fseek : %ld\n",position);
	rewind(fileptr);
	position=ftell(fileptr);
	printf("File position after rewind : %ld\n",position);
	fclose(fileptr);
return 0;
}
