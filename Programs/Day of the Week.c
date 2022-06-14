#include <stdio.h>

int main() {
  
  int endingDayOfWeek;
  int daysThatPass;

  printf("You started on Sunday, now enter how many days went past...\n");
  scanf("%d", &daysThatPass);
  endingDayOfWeek = daysThatPass % 7;
  switch(endingDayOfWeek) {
  		case 1:
  		printf("Thank You, if %d days pass, it will be Monday", daysThatPass);
  	break;
  		case 2:
  		printf("Thank You, if %d days pass, it will be Tuesday", daysThatPass);
  	break;
  		case 3:
  		printf("Thank You, if %d days pass, it will be Wednesday", daysThatPass);
  	break;
  		case 4:
  		printf("Thank You, if %d days pass, it will be Thursday", daysThatPass);
  	break;
  		case 5:
  		printf("Thank You, if %d days pass, it will be Friday", daysThatPass);
  	break;
  		case 6:
  		printf("Thank You, if %d days pass, it will be Saturday", daysThatPass);
  	break;
  		case 0:
  		printf("Thank You, if %d days pass, it will be Sunday", daysThatPass);
  	break;
  		default:
  		printf("Thank You, if %d days pass, oh wait something is wrong so i cant caluculate it", daysThatPass);
  	break;
  }
  return 0;
}
