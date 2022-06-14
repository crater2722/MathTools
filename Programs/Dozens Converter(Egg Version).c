#include <stdio.h>

int main(){
	int eggs;
	int never_ending = 1;
	double dozens;
	printf("Hello chuccegguser176!,\nYou work for the international egg production company and this program\n will allow you to convert the eggs you collect into dozens.\n The ChuckEggs company is happy for your service! Continue below...");


	printf("\n\nEnter Eggs:-\n");
	scanf("%d",eggs);
	dozens = eggs / 12.0;
	printf("The Dozens is %d", dozens);

	return 0;
}
