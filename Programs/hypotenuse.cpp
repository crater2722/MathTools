#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Hello user! Enter the 2 side lengths of your\nright triangle to find hypotenuse(Seperate with space):-");
    scanf("%f%f", &a,&b);
    a=a*a;
    b=b*b;
    printf("The First side length is = %f \n The Second side length is = %f \n The Hypotneuse is = %f", a,b,sqrt(a+b));
    return 0;
}