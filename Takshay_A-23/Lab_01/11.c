#include<stdio.h>
int main(){
    int hours,minutes,seconds,total;

    printf("Enter total seconds= ");
    scanf("%d",&total);

    hours = total/60;
    total = total % 60;

    minutes = total/60;
    seconds = total % 60;


    printf("Hours = %d\n",hours);
    printf("Minutes = %d\n",minutes);
    printf("Seconds = %d",seconds);


}