#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    printf("%s","enter number");
    scanf("%d", &a);
    printf("%s","enter base");
    scanf("%d",&b);
    int t = a;
    int h=a;
    int x;
    int o = 1;
    int f = 0; 
    int s;
    while (h!=0){
        s=h%10;
        if (s>=b){
            printf("invalid input" );
            return 0;
        }
    h=h/10;
    }
    while (t != 0) {
        x = t % 10;
        f = f + x * o; 
        t = t / 10;
        o = o * b;
    }
    printf("%d\n", f); 
    return 0;
}
