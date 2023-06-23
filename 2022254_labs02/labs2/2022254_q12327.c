#include <stdio.h>
#include <stdlib.h>

int main() {
    float list[10];
    int i, swap;

    printf("enter values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &list[i]);
    }

    while (1) {
        swap = 0;
        for (i = 0; i < 9; i++) {
            if (list[i] > list[i + 1]) {
                int f = list[i];
                list[i] = list[i + 1];
                list[i + 1] = f;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }

    printf("Smallest element: %d\n", list[0]);
    printf("Largest element: %d\n", list[9]);
    float sum=0;
    int j=0;
    while(j<10){
        sum=sum+list[j];
        j++;
    }
    
    printf("%f",sum/10);

    return 0;
}