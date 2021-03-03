/* count.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // exit() prototype

int main(void)
{
    int ch;         // place to store each character as read
    char filename[80];
    FILE *fp;       // "file pointer"
    unsigned long count = 0;
    puts("Please input filename: ");
    scanf("%s",filename);
    if ((fp = fopen(filename,"r")) == NULL)
    {
        printf("Can't open %s\n",filename); 
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);  // same as putchar(ch);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);
    
    return 0;
}
