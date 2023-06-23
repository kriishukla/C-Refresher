#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int sum = 0;
    printf("%s","enter values");
    while(1){
        scanf("%d",&a);
        if (a == -999){
            break;
        }
        sum = sum + a;
    }
    printf("%d",sum);
    return 0;
}
