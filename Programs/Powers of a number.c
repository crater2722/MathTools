#include <stdio.h>

int main() {
    int num;
    int num2;
    int user_enter;
    int track=1;
    printf("Enter a number\n");
    scanf("%d", &num2);
    num=num2;
    printf("Now to enter a power\n");
    scanf("%d", &user_enter);
    printf("Thank you for entering. Answers below:-\n");
    while(track <= user_enter){
        printf("Power of %d to %d = %d\n", num2, track, num);
        num=num*num2;
        track++;
    }
    return 0;
}
