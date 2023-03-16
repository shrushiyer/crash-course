#include <stdio.h>

int main() {
   int array[5];
   int multiply=1;
   printf("Enter array:\n");
   for (int i=0;i<5;i++){
       scanf("%d",&array[i]);
   }
   for (int j=0;j<5;j++){
       multiply*=array[j];
   }
   printf("multiply= %d", multiply);
}
