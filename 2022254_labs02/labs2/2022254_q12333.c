#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* ptr;
    char word[100];
    int i = 0;
    ptr = fopen("hello.txt", "r");
 
    while (fscanf(ptr, "%s", word) != EOF) {
        printf("%s\n", word);
    }
    
    fclose(ptr);
    return 0;
}
