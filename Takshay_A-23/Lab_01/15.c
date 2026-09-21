#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float percentage;

    printf("Enter the marks of subject 1: ");
    scanf("%d", &m1);

     printf("Enter the marks of subject 2: ");
    scanf("%d", &m2);

     printf("Enter the marks of subject 3: ");
    scanf("%d", &m3);

     printf("Enter the marks of subject 4: ");
    scanf("%d", &m4);

     printf("Enter the marks of subject 5: ");
    scanf("%d", &m5);

    percentage = (m1+m2+m3+m4+m5)/5;
    printf("percentage = %f%%/n",percentage);

    if (percentage >= 90 && percentage < 100)
        printf("First Division");

    else if(percentage >= 80 && percentage < 90)
        printf("Second Division");

    else if (percentage >= 70 && percentage < 80)
        printf("Third Division");

    else
        printf("You are fail");


}