#include <stdio.h>

int main() {
    int a;
  for(a=78901;a>0;a/=10){
       printf("%d \n", a%10);
   }
   return 0;
}
