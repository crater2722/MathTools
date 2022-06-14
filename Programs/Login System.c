#include <stdio.h>
#include <string.h>
#include <conio.h>

 
int main()
{
	
	
    char username[15];
    char password[12];
    
   
 
 
    printf("Enter your username:\n");
    scanf("%s",&username);
 
    printf("Enter your password:\n");
    scanf("%s",&password);
 
    if(strcmp(username,"user124")==0){  //change the "user124" part to change the username
        if(strcmp(password,"12345")==0){ //change the "12345" part to change the password
 
 	printf("Welcome..login succssful");
 
        }

 		else{
    printf("\nwrong password");
}
    }
	else{
    printf("\nUser doesn't exist");
}
    getch();
}
