#include <stdio.h>

  int main() {
    int no, i, f;

    printf("Enter any number: ");
    scanf("%d", & no);
    f = 0;
    i = 2;
    while (i <= no / 2) {
      if (no % i == 0) {
        f = 1;
        break;
      }
      i++;
    }
    if (f == 0)
      printf(" %d is Prime Number", no);
    else
      printf("%d  Not Prime Number", no);

  }