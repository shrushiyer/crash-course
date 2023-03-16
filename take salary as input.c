#include <stdio.h>

int main() {
    float salary, tax;
    printf("Enter salary:");
    scanf("%f", &salary);
    if (salary<=180000){
        tax= salary*8/100; 
    }
    if(salary>180000 && salary<=500000){
        tax= salary*16/100; 
    }
    if(salary>500000){
        tax= salary*33/100;
    }
    printf("Tax = %.2f", tax);
    return 0;
}
