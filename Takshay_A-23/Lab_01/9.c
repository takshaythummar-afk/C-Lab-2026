#include<stdio.h>
int main(){

    int hour,minutes,seconds,total;

    printf("Enter hours, minutes and seconds: ");
    scanf("%d%d%d", &hour,&minutes,&seconds);

    total = hour*3600 + minutes*60 + seconds;
    printf("Total seconds is =%d",total);
}