#include<conio.h>
#include<stdio.h>

int main()
{
    int num1,num2,choice;
    float result;
    printf("Enter to integer");
    scanf("%d %d", &num1, &num2);
    printf("Chosse an operator to perfrom :\n ");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Quotient\n");
    printf("Enter your choice 1 to 4 \n");
    scanf("%d",&choice);
    
     switch (choice)
     {
        case 1: 
        result=num1+num2;
        printf("Result=%.2f \n",result);
        break;
        case 2:
        result=num1-num2;
        printf("Result=%.2f \n",result);
        break;
        case 3:
        result=num1*num2;
        printf("Result=%.2f \n",result);
        break;
        case 4:
        if(num2!=0)
        {
            result=(float)num1/num2;
            printf("Result=%.2f \n",result);    
        }
        else{
            printf("Error : Division by zero is not allowed  \n ");
        }
        break;
        default :
        printf("Invalid choice ! Please choose between 1 and 4 .\n ");

     }

    return 0;
}