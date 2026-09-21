#include<stdio.h>
int main(){
    int n,p;

    printf("Enter the number=");
    scanf("%d",&n);

    if(n<=1){
        p=0;
    }
    else{
        p=1;
        for(int i=2;i<n;i++){
            if(n%i==0){
                p=0;
                break;
            }
        }
    }
    if(p==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n); 
    }
}