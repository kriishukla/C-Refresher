#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    float interest; 
    float capital;
    float interest_rate;
    float years;
    printf("Enter capital: ");
    scanf("%f", &capital); 
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate); 
    printf("Enter years: ");
    scanf("%f", &years);

    printf("Year Interest  Sum\n");
    printf("----+-------+--------\n");
    while (i < years) {
        interest = capital * interest_rate / 100;
        capital += interest;
        printf("%2d \t%0.2f \t%0.2f\n", i + 1, interest, capital);
        i++;
    }
    return 0;
}
