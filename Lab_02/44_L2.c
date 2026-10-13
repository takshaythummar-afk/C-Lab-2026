#include<stdio.h>
int main()
{
    int numbers[10],k=0,j=0;

    printf("Enter 10 integers\n");
    for(int i=0;i<10;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&numbers[i]);
    }
    for(int i=0;i<10;i++){
        if(numbers[i]%2==0){
            k=k+1;
        }
    }
    for(int i=0;i<10;i++){
        if(numbers[i]%2!=0){
            j=j+1;
        }
    }
    printf("Total odd numbers:%d\n",j);
    printf("Total even numbers:%d",k);
        
}