#include <stdio.h>
#include "pe12-3a.h"
int main(void){
    int mode = 0;
    int pre_mode = 0;
    double distance,fuel;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d",&mode);
    while(mode >= 0)
    {
        check_mode(&mode, pre_mode);
        get_info(mode,&distance,&fuel);
        pre_mode = mode;
        show_info(mode,distance,fuel);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}
