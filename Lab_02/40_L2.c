#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter the lines: ");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(j==i){
                printf("1");
            }
            else{
                printf("0");
            }
    }
    printf("\n");
}
}