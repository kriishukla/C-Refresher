#include <stdio.h>
#include <string.h>

int main() {
    char sentence[10000];
    char word[100] = "";
    char words[100][100];
    int count = 0;
    int num_words = 0;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    char a[10000];
    strcpy(a, sentence);

    char *p = strtok(sentence, " ");
    while (p != NULL && num_words < 100) {
        strcpy(words[num_words], p);
        num_words++;
        p = strtok(NULL, " ");
    }

    printf("Enter the word to search for: ");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = '\0';

    for (int i = 0; i < num_words; i++) {
        if (strcmp(words[i], word) == 0) {
            count++;
        }
    }

    printf("The sentence is \"%s\"\n", a);
    printf("The word is \"%s\"\n", word);
    printf("The word occurs %d times.\n", count);

    return 0;
}
