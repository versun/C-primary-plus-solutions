#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ 
    FILE* source,*target;
    if(argc!=3)
    {
        printf("Usage: %s source_filename target_filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((source = fopen(argv[1],"rb")) == NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((target = fopen(argv[2],"wb")) == NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    long last;
    fseek(source,0L,SEEK_END);
    last = ftell(source);
    rewind(source);

    char buff[last];
    fread(buff,last,1,source);
    fwrite(buff,last,1,target);

    if(ferror(source)){
        fprintf(stderr,"Error read file!\n");
    }else{
        puts("Write success!");
    }
    return 0;
}
