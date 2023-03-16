#include <stdio.h>

int main() {
    int value=1;
    for(int i=0;i<=3;i++){//for rows
    for(int j=0;j<i;j++){
            printf("%d \t",value);
            value++;
    }
    printf("\n");
}
}
