#include <stdio.h>

int  main() {
    float num1;
    float num2;
    char op;
    float result;
    printf("Enter the first number: \n");
    scanf("%f",&num1);
    printf("Enter the operator: \n");
    scanf(" %c",&op);
    printf("Enter the second number: \n");
    scanf("%f",&num2);
    switch (op)
    {
        case '-' :
        result=num1-num2;
        printf("%f",result);
        break;
        
        case '+' :
        result=num1+num2;
        printf("%f",result);
        break;
        
        case '*' :
        result=num1*num2;
        printf("%f",result);
        break;
        
        case '/' :
        result=num1/num2;
        printf("%f",result);
        break;
        
        default :
        printf("Operator is not valid");
    }
    
}
