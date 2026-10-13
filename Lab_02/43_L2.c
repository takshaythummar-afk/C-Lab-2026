#include<stdio.h>
int main()
{
    int numbers[10];
    int sum=0;

    printf("Enter 10 integers\n");
    for(int i=0;i<10;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&numbers[i]);
    }

    for(int i=1;i<10;i++){
        sum=sum+numbers[i];
    }
    printf("The sum of 10 numbers is:%d",sum);
}