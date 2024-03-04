#include <stdio.h>

int main() {
   double in;
   scanf("%lf",&in);
   int out=(int)in;
   double sub=in-out;
   if(sub>=0.5) out++;
   printf("%d",out);
   return 0;
}