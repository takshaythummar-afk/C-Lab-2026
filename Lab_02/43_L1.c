#include<stdio.h>
int main()
{
    int sales;
    printf("Enter the sales: ");
    scanf("%d",&sales);

    float com;
    if(sales<=500){
    com=sales*0.05;
    printf("commision:%f",com);}

    else if(sales>500 && sales<=2000){
        com=35+(sales*0.1);
        printf("commision:%f",com);

    }
    else if (sales>2000 && sales<=5000)
    {
        com=185+(sales*0.12);
        printf("commision:%f",com);
    }
    else if (sales>5000)
    {
        com=sales*0.125;
        printf("commision:%f",com);
    }
    
    

}