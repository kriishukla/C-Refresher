#include <stdio.h>

int main(){
    
    char c1 , c2;
    int search1 = 0, search2 = 0 , val1 , val2;
    printf("Enter both character: ");
    scanf("%c %c" , &c1 , &c2);

    char str[16] = "0123456789ABCDEF";
    int arr[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    for (int i = 0; i < 16; i++) {
        if (c1 == str[i]){
            val1 = arr[i];
            search1 = 1;
        }
        if (c2 == str[i]){
            val2 = arr[i];
            search2 = 1;
        }
    }
    if(search1==0 || search2==0){
        printf("ERROR please enter correct char");
        return 0;
    }
    printf("Value in Decimal: %d" , (16*val1)+val2);
    return 0;
}