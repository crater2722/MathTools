#include <stdio.h>

int main(){
    int num1, num2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    minMultiple = (num1>num2) ? num1 : num2;
    while(1)
    {
        if( minMultiple%num1==0 && minMultiple%num2==0 )
        {
            printf("The LCM of %d and %d is %d.", num1, num2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}