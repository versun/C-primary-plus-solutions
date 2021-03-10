#include <stdio.h>
#include <ctype.h>
#include <string.h>
enum Month{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
struct Date{
    int year;
    int month;
    int day;
};    
int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 

int total_days(struct Date *date){
    int sum=0;
    char m[4];
    enum Month month;
    puts("Input year: ");
    scanf("%i",&date->year);
    
    puts("Input month: ");
    fgets(m,4,stdin);
    for(int i=0;i<4;i++)
        m[i]=tolower(m[i]);
    date->month = month[m]; 
    printf("%i",date->month);
    while(getchar()!='\n')
        continue;

    puts("Input day: ");
    scanf("%i",&date->day);
   
    for(int i=0; i<date->month-1; i++){
        sum+=days[i];
        printf("%i",sum);
        puts("");
    }
    sum+=date->day;
    if(date->year%4==0){
        sum+=1;
    }
    return sum;
}

int main(void){
    int sum;
    struct Date date;
    sum = total_days(&date); 
    printf("%i",sum);
    return 0;
}
