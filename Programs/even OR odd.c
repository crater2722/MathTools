#include <stdio.h>

int main() {
int num;
printf ("Enter a Number\n");
scanf("%d",&num);
printf("You have entered the number %d \n",num);
	if(num%2==0)
    printf("The Given number is = EVEN",num);
    else
    printf("The Given number is = ODD",num);

    return 0;
}
