#include <stdio.h>

int main(void){
    int no1 = 0;
    int no2 = 0;
    double time = 0;
    int hour=0, min=0, sec=0;
    int temp1=0, temp2=0;

    scanf("%d %d", &no1, &no2);
    time = (no2-no1+50)/100;

    temp1 = time;
    temp2 = time;
    hour = (time/3600);
    min = (time-hour*3600)/60;
    sec = time-hour*3600-min*60;

    printf("%02d:%02d:%02d", hour, min, sec);

    return 0;
}
