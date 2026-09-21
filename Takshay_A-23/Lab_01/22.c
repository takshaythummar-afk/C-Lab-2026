#include<stdio.h>
int main(){
    int n,i;
    long factorial=1 ;
    printf("Enter a number= ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("This is not possible");
    }

    else{

        for(i = 1; i<=n; i++)
        {
        factorial = factorial*i;
        }
        printf("factorial=%ld",factorial);
        
    }
}