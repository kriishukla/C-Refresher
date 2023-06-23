#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the size of the character array: ");
    scanf("%d", &n);

    char arr[n][10];
    printf("Enter the characters for the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    char s[10];
    printf("Enter the value to be searched: ");
    scanf("%s", s);

    int index = -1;
    int found = 0;  
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], s) == 0) {
            index = i;
            found = 1;  
            break;
        }
    }

    if (found) { 
        printf("%s is found at position %d\n", s, index + 1);
    } else {
        printf("%s is not found in the array\n", s);
    }

    return 0;
}
