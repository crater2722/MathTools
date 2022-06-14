#include <stdio.h>
int main() {
char str[100],*ptr;
int v=0,c=0;
printf("Enter your name without space:\n");
scanf("%s",str);
printf("Your name is %s\n",str);
ptr=str;
while(*ptr!='\0'){
if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' || *ptr=='a' ||*ptr=='e' || *ptr=='i'|| *ptr=='o' ||*ptr=='u')
{
    v++;
}
else
{
    c++;
}
   ptr++;
}
printf("Number of vowels=%d\nNumber of consonants=%d",v,c);

    return 0;
}
