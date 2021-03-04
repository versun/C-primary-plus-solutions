#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char filename[80];
    char c_l,c_U;
    puts("Please input filename: ");
    scanf("%s",filename);
    if((fp = fopen(filename, "rw+")) == NULL){
        printf("Can't open %s",filename);
        exit(EXIT_FAILURE);
    }
    rewind(fp);
    while((c_l=getc(fp)) != EOF){
        c_U = toupper(c_l);
        ungetc(c_l,fp);
        putc(c_U, fp);
        fflush(fp);
    }
    if(feof(fp)){
        puts("Success!");
    }else{
        puts("Error write!");
        exit(EXIT_FAILURE);
    }
    fclose(fp);

    return 0;
}
