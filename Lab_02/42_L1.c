#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter the value: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0){
        printf("it is composite number");
        break;}

    }
    if(i==n)
        printf("It is not composite number");
}