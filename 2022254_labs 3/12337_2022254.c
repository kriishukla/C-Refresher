#include <stdio.h>

int main(void){
    char ch;
    short wordCount[25] = {0};
    int count = 0;

    printf("Enter some text: \n");

    while ((ch = getchar()) != EOF){
        if (ch == ' ' || ch == ',' || ch == ';' || ch == ':' || ch == '.' || ch == '/' || ch == '\n'){
            if (count > 0 && count <= 25) {
                wordCount[count-1]++;
            }
            count = 0;
        } else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            count++;
        }
    }

    if (count > 0 && count <= 25) {
        wordCount[count-1]++;
    }

    for (int i = 0; i < 25; i++){
        printf("length %d : %d occurrences\n", i+1, wordCount[i]);
    }

    return 0;
}
