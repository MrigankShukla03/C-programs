#include <stdio.h>

int main() {
   int n, i, f,g=0;
   printf("Enter the number: ");
   scanf("%d", &n);
   printf("Prime numbers from 0 to %d are: ",n);

   while (g < n) {
      f = 0;
      if (g <= 1) {
         g++;
         continue;
      }
      for (i = 2; i <= g / 2; ++i) {

         if (g % i == 0) {
            f = 1;
            break;
         }
      }if (f == 0)
         printf("%d ",g);
      g++;
   }

   return 0;
}