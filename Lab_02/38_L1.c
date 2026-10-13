#include<stdio.h>
int main()
{
    int n,i,t;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        t=i*i;
    
    printf("%d\n",t);
    }
}