#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *filePointer;
	char ch;
	filePointer=fopen("dokumen.txt","r");
	if (filePointer==NULL){
		printf("File tidak ada\n");
	}
	else{
		while((ch=fgetc(filePointer)) !=EOF)
		{
		printf("%c",ch);
		}	
	}
	fclose(filePointer);
	return 0;
}
