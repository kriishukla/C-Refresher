#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *x = malloc(sizeof(char) * 1000);
    int ked = 0;
    int c;
    while ((c = getchar()) != EOF && ked < 999) {
        x[ked] = c;
        ked++;
        if (c == '\n') {
            x[ked-1] = '\0';
            int stt = ked - 2;
            int ed = ked - 2;
            int i = ked - 2;
            while (i >= 0) {
                if (i == 0) {
                    int j = i;
                    while (j <= ed) {
                        printf("%c", x[j]);
                        j++;
                    }
                    printf(" ");
                }
                if (x[i] != ' ') {
                    stt--;
                } else {
                    stt--;
                    int j = stt + 2;
                    while (j <= ed) {
                        printf("%c", x[j]);
                        j++;
                    }
                    printf(" ");
                    ed = stt;
                }
                i--;
            }
            printf("\n");
            ked = 0;
        }
    }
    free(x);
    return 0;
}
