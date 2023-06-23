#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct person {
    char name[100];
    char address[100];
    char age;
    char dob[100];
    struct person *next;
} Person;

Person *head = NULL;

Person *cp(char name[], char address[], int age, char dob[]) {
    Person *np = (Person *) malloc(sizeof(Person));
    strcpy(np->name, name);
    strcpy(np->address, address);
    np->age = age;
    strcpy(np->dob, dob);
    np->next = NULL;
    return np;
}

void add_person(Person *np) {
    if (head == NULL) {
        head = np;
    } else {
        Person *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = np;
    }
}



void display_persons() {
    printf("%-20s%-30s%-8s%s\n", "Name", "Address", "Age", "Date of Birth");
    Person *current = head;
    while (current != NULL) {
        printf("%-20s%-30s%-8d%s\n", current->name, current->address, current->age, current->dob);
        current = current->next;
    }
}

int main() {
    int n;
    char name[100];
    char address[100];
    char age_str[100];
    char dob[100];

    while (1) {
        printf("\nEnter an option:\n1. Add person\n2. Display persons\n3. Exit\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("\nEnter name: ");
                getchar(); 
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
                printf("\nEnter address: ");
                fgets(address, sizeof(address), stdin);
                address[strcspn(address, "\n")] = '\0';
                printf("\nEnter age: ");
                fgets(age_str, sizeof(age_str), stdin);
                age_str[strcspn(age_str, "\n")] = '\0';
                int age = atoi(age_str);
                printf("\nEnter date of birth: ");
                fgets(dob, sizeof(dob), stdin);
                dob[strcspn(dob, "\n")] = '\0';
                Person *np = cp(name, address, age, dob);
                add_person(np);
                printf("Person '%s' added successfully.\n", name);
                break;
            case 2:
                display_persons();
                break;
            case 3:
                printf("\nExiting program.\n");
                exit(0);
            default:
                printf("\nInvalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}