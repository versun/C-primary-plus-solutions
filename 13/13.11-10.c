#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* fp1;
    char filename[80];
    long int location;
    char c;
    puts("Inpute a filename: ");
    scanf("%s",filename);
    if((fp1=fopen(filename,"r")) == NULL){
        printf("Can't open %s file",filename);
        exit(EXIT_FAILURE);
    }
    puts("Input a number to positioning:");
    scanf("%li",&location);
    fseek(fp1, location, SEEK_SET);
    c = getc(fp1); 
    while(!feof(fp1) && c!='\n'){
        printf("%c",c);
        c = getc(fp1); 
    }
    puts("Done!");
    fclose(fp1);
    return 0;
}
