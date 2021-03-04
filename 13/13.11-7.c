#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    FILE* fp1;
    FILE* fp2;
    char c1,c2;
    if(argc!=3){
        printf("Usage: %s filename-1 filename-2",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp1 = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s file!",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp2 = fopen(argv[2], "r")) == NULL){
        printf("Can't open %s file!",argv[2]);
        exit(EXIT_FAILURE);
    }

    rewind(fp1);
    rewind(fp2);

    c1 = getc(fp1);
    c2 = getc(fp2);
    while(1){
        while(!feof(fp1)){
            if(c1!='\n'){
                printf("%c",c1);
                c1 = getc(fp1);
            }else{
                c1 = getc(fp1);
                break;
            }
        }
        while(!feof(fp2)){
            if(c2!='\n'){
                printf("%c",c2);
                c2 = getc(fp2);
            }else{
                c2 = getc(fp2);
                break;
            }
        }
        if(feof(fp1) && feof(fp2)){
            break;
        }else{
            puts("");
        }
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
