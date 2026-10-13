#include<stdio.h>
int main()
{
    int unit;
    printf("Enter the unit: ");
    scanf("%d",&unit);

    float charge;
    if(unit>0 && unit<=200){
        charge=unit*0.5; 
        printf("charge:%f",charge);
    }

    else if(unit>200 && unit<=400){
        charge=100+((unit-200)*0.65);
        printf("charge:%f",charge);

    }
    else if (unit>400 && unit<=600)
    {
        charge=230+((unit-400)*0.80);
        printf("charge:%f",charge);
    }
    else if (unit>600)
    {
        charge=425+((unit-600)*1.25);
        printf("charge:%f",charge);
    }
    
    return 0;

}