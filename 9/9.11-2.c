#include <stdio.h>
#include <ctype.h>

int chline(char,int,int);
char get_char();
int get_number();

int main(void){
    char ch;
    int i,j;
    do
    {
        printf("Input a char(q to quit): ");
        ch = get_char();
        if (ch=='q')
        {
            printf("Done!");
            return 0;
        }
        printf("Enter a numbers for col: ");
        i = get_number();
        printf("Enter a numbers for row: ");
        j = get_number();

        chline(ch,i,j);
    } while (1);

    return 0;
}
int chline(char ch,int col,int row){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
char get_char(){
    char ch,t;
    while (scanf("%c",&ch)!=1 || isspace(ch))
    {
       continue;
    }
    while((t=getchar())!=EOF && t!='\n');
    return ch;
}
int get_number(){
    int n;
    char t;
    while (scanf("%d",&n)!=1)
    {
        continue;
    }
    while((t=getchar())!=EOF && t!='\n');
    return n;
}