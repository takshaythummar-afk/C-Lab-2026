#include<stdio.h>
#include<math.h>
int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
int main()
{
    int n,i,t;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=factorial(i);
    printf("%d/%d+",i,t);
    }

}