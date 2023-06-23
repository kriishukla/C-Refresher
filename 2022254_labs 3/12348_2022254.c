#include <stdio.h>

#define basic 40

int main(void) {
    double rate, hours;
    double pay, total_pay = 0.0;

    while (1) {
        printf("Enter rate in pence/hr: ");
        scanf("%lf", &rate);

        if (rate == 0) {
            break;
        }

        printf("Enter hours: ");
        scanf("%lf", &hours);

        if (rate <= 0 || hours < 0) {
            printf("Invalid input values.\n");
            continue;
        }

        if (hours <= basic) {
            pay = rate * hours * 1;
        } else if (hours <= basic + 20) {
            double overtime_hours = hours - basic;
            pay = rate * basic * 1
                + rate * overtime_hours * 1.5;
        } else {
            double overtime_hours = basic + 20;
            double double_hours = hours - overtime_hours;
            pay = rate * basic * 1
                + rate * 20 * 1.5
                + rate * double_hours * 2;
        }

        total_pay += pay;
        printf("Pay at %f pence/hr for %.2lf hours is %.2lf pounds\n", rate, hours, pay / 100.0);
    }

    printf("Total pay is %.2lf pounds\n", total_pay / 100.0);

    return 0;
}
