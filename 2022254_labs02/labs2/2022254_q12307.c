#include <stdio.h>
#include <ctype.h>
#include<stdlib.h> 

int main() {
    char s[10], e[10]; 
    int num; 

    printf("Enter two values to be compared: \n");
    scanf("%s",s);
    scanf("%s",e);


    for (int i = 0; s[i] != '\0'; i++) {
        if (!isdigit(s[i])) {
            printf("Invalid input");
            return 0;
        }
    }
    for (int i = 0; e[i] != '\0'; i++) {
        if (!isdigit(e[i])) {
            printf("Invalid input");
            return 0;
        }
    }
    int st = atoi(s);
    int et = atoi(e);
    if (st < et) {
        printf("up");
    } 
    else if (st > et) {
        printf("down");
    } 
    else {
        printf("equal");
    }

    return 0;
}
