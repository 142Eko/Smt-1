#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fp;
fp = fopen("fileku.txt","a");	//jawaban (a) fprintf(..., "Kalimat tambahan \n");	//jawaban (b)
fprintf(fp, "Kalimat tambahan \n");	//jawaban (b)
fclose(fp);
fclose(fp);
return 0;
}
