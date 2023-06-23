#include <stdio.h>

enum month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    int day, month, year;
    printf("Enter a date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    int leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        leap = 1;
    }


    int days_in_month[] = {0, 31, 28 + leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    day++;

    if (day > days_in_month[month]) {
        day = 1;
        month++;
        if (month > DECEMBER) {
            month = JANUARY;
            year++;
        }
    }


    char *month_name;
    switch (month) {
        case JANUARY:
            month_name = "January";
            break;
        case FEBRUARY:
            month_name = "February";
            break;
        case MARCH:
            month_name = "March";
            break;
        case APRIL:
            month_name = "April";
            break;
        case MAY:
            month_name = "May";
            break;
        case JUNE:
            month_name = "June";
            break;
        case JULY:
            month_name = "July";
            break;
        case AUGUST:
            month_name = "August";
            break;
        case SEPTEMBER:
            month_name = "September";
            break;
        case OCTOBER:
            month_name = "October";
            break;
        case NOVEMBER:
            month_name = "November";
            break;
        case DECEMBER:
            month_name = "December";
            break;
        default:
            month_name = "Invalid month";
            break;
    }

    printf("The next date is: %d %s %d\n", day, month_name, year);

    return 0;
}
