#include<stdio.h>
int main(){
    int n;
    printf("1 for +\n");
    printf("2 for -\n");
    printf("3 for *\n");
    printf("4 for /");
    scanf("%d",&n);

    switch(n)
    {
        case (1):{
        int a,b,sum;
        printf("Enter the value of a= ");
        scanf("%d",&a);
        printf("Enter the value of b= ");
        scanf("%d",&b);
        
        sum = a+b;
        printf("Sum=%d",sum);
        break;    
        }
    
        case (2):
        {
        int c,d,substraction;
        printf("Enter the value of c= ");
        scanf("%d",&c);
        printf("Enter the value of d= ");
        scanf("%d",&d);
        
        substraction = c-d;
        printf("substraction=%d",substraction);
        break;    
        }

        case (3):
        {
        int e,f,multiplication;
        printf("Enter the value of e= ");
        scanf("%d",&e);
        printf("Enter the value of f= ");
        scanf("%d",&f);
        
        multiplication = e*f;
        printf("multiplication=%d",multiplication);
        break;    
        }

        case 4:
{
    int i, h, division;

    printf("Enter the value of i= ");
    scanf("%d", &i);

    printf("Enter the value of h= ");
    scanf("%d", &h);

    if (h != 0)
    {
        division = i / h;
        printf("division = %d", division);
    }
    else
    {
        printf("Division by zero is not allowed.");
    }

    break;
}

        
        default:
        printf("Invalid");
    }

}