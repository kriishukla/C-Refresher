#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int count=0;
    printf("Enter value\n");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error\n");
        exit(0);
    }
    else{
    printf("Initial value is %d\n", n);
    while (n != 2) {
        if (n % 2 == 0) {
            n =n/2;
        } else {
            n = 3 * n + 1;
        }
        count++;
        printf("Next value is %d\n", n);
    }

    printf("Final value is 1, number of steps %d\n", count);
    return 0;
}
}