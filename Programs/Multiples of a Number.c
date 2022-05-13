#include <stdio.h>

int main() {
    int num;
    int multiplier=0;
    int userentry;
    int ans;
    printf("Hello. Enter a number to find it's multiples!\n\n");
    scanf("%d", &num);
    printf("Now enter a number to find how many multiples to show!\n\n");
    scanf("%d", &userentry);
    printf("Thank you for entering! Please look below for your answer!\n\n");
    while(multiplier<=userentry){
    ans=num*multiplier;
    printf("%d x %d = %d\n\n", num , multiplier , ans);
    multiplier++;
    }
    return 0;
}
