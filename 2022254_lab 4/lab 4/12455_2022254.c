#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct krish
{
   char *a;
   int b[100];
   float c[100];
};

int main() {
    char *a = NULL;
    char *b = NULL;
    char *c = NULL;

    char *temp1 = NULL;
    char *temp2 = NULL;
    char *temp3 = NULL;

    size_t buf_size = 0;

    printf("Enter value for a: ");
    getline(&a, &buf_size, stdin);
    a[strcspn(a, "\n")] = '\0'; 

    printf("Enter value for b: ");
    getline(&b, &buf_size, stdin);
    b[strcspn(b, "\n")] = '\0';  

    printf("Enter value for c: ");
    getline(&c, &buf_size, stdin);
    c[strcspn(c, "\n")] = '\0'; 

    temp1 = strdup(a);
    temp2 = strdup(b);
    temp3 = strdup(c);

    free(a);
    free(b);
    free(c);

    a = temp3;
    b = temp1;
    c = temp2;

    printf("After rotation: a = %s, b = %s, c = %s\n", a, b, c);

    free(temp1);
    free(temp2);
    free(temp3);

    return 0;
}
