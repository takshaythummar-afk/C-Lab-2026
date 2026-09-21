#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,remainder,num,originalNum,temp,result=0;

    printf("Enter an integer: ");
    scanf("%d",&num);

    originalNum=num;

    for(temp=num;temp !=0;temp=temp/10){
        n++;
    }

    for(temp=num;temp !=0;temp=temp/10)
    {
        remainder = temp % 10;
        result = result + round(pow(remainder,n));
    }

    if (result == originalNum)
    {
        printf("it is armstrong number");
    }
    else{
        printf("it is not armstrong nummber");
    }
}