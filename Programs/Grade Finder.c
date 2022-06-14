#include <stdio.h>

int main() {
   int marks;
   char grade;
   printf("enter the marks: ");
   scanf("%d",&marks);
   if(marks>89) grade='A';
   else if(marks>79) grade = 'B';
   else if(marks>69) grade = 'C';
   else if(marks>59) grade = 'D';
   else grade = 'F';
   
   printf("Your Grade is %c",grade);
    return 0;
}
