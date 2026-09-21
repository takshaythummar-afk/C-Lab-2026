#include<stdio.h>
int main(){

    long seconds = 31558150;
    long days, hours , minutes, remaining;

    days = seconds / 86400;
    remaining = seconds % 86400;

    hours = remaining / 3600;
    remaining = hours % 3600;

    minutes = remaining / 60;

    printf("Days = %ld\n", days);
    printf("Hours = %ld\n", hours);
    printf("Minutes = %ld\n", minutes);

}