#include<stdio.h>
int main(){
    int n;
    int sum_even=0,sum_odd=0;
    printf("Enter the value of n= ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum_even+=i;
        }
        else
        {
            sum_odd+=i;
        }
    }
    printf("Sum of even numbers = %d\n",sum_even);
    printf("Sum of odd numbers = %d\n",sum_odd);
}