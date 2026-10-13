#include<stdio.h>
int main()
{
    int n,sum=0;
    while(1){
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<0){
        break;
    }
    
        sum=sum+n;
    }
    printf("sum=%d",sum);
    
}