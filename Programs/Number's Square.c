#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to find it's square! No decimals.\n");
    scanf("%d", &num);
    num = num*num;
    printf("Your answer is %d!", num);
    return 0;
}
