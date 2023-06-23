#include <stdio.h>
#include <string.h>

int replace(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ' ') {
            *str = '-';
            count++;
        }
        str++;
    }
    return count;
}

int main(void) {
    char line[100];
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0'; 
    int n = replace(line);
    printf("Replaced %d spaces. Resulting string: %s\n", n, line);
    return 0;
}
