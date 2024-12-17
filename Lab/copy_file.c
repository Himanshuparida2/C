#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *open,*copy;
	open=fopen("nums.bin","rb");
	copy=fopen("copy_content.bin","wb");
	char ch;
	for(ch=getc(open);ch!=EOF;ch=getc(open)){
		putc(ch,copy);
	}
	fclose(open);
	fclose(copy);
	return 0;
}
