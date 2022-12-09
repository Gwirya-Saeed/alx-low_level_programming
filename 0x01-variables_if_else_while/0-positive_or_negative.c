#include <time.h> 
 #include <stdio.h>
 /* main -prints the number      is greater than 0: is positive
* the number is 0: is zero
* the number is less than 0: is negative
 */
 int main(void) 
 {
         int n; 
         srand(time(0));          n = rand() - RAND_MAX / 2; 
          if(n>0) {
printf("n  is positive\n"); 
}
if(n==0) {
printf("n is zero\n");
}
if(n<0) {
printf("n is negative\n");
}
         return (0); 
 }
