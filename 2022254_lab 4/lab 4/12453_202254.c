#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct krish{
    char a[100];
    int b;
    float c;
};

int main(){
    int n;
    printf("Enter the size of the character array: ");
    scanf("%d", &n);

    getchar();

    char **arr = (char **) malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        arr[i] = (char *) malloc(100 * sizeof(char));
    }

    printf("Enter the characters for the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }

    char s[100];
    printf("Enter the value to be searched: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';

    int index = -1;
    int found = 0;

    char **ptr = arr;
    for (int i = 0; i < n; i++) {
        if (strcmp(*ptr, s) == 0) {
            index = i;
            found = 1;
            break;
        }
        ptr++;
    }

    if (found) {
        printf("%s is found at position %d\n", s, index + 1);
    } else {
        printf("%s is not found in the array\n", s);
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
