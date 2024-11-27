
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int is_leap_year(int year);
int is_valid_date(struct Date date);
int days_between_dates(struct Date d1, struct Date d2);
int day_of_week(struct Date date);
int days_from_start(struct Date date);

int main() {
    struct Date date1, date2;

    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    if (!is_valid_date(date1)) {
        printf("The first date is invalid.\n");
        return 1;
    }
    if (!is_valid_date(date2)) {
        printf("The second date is invalid.\n");
        return 1;
    }

    int days = days_between_dates(date1, date2);
    printf("The number of days between the two dates is: %d\n", days);

    int dow = day_of_week(date1);
    const char* days_of_week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    printf("The day of the week for the first date is: %s\n", days_of_week[dow]);
int dow = day_of_week(date2);
    printf("The day of the week for the first date is: %s\n", days_of_week[dow]);

    return 0;
}
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int is_valid_date(struct Date date) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (is_leap_year(date.year)) {
        days_in_month[1] = 29;
    }
    if (date.month < 1 || date.month > 12) return 0;
    if (date.day < 1 || date.day > days_in_month[date.month - 1]) return 0;

    return 1;
}
int days_from_start(struct Date date) {
    int days = date.day;
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (is_leap_year(date.year)) {
        days_in_month[1] = 29;
    }
    for (int i = 0; i < date.month - 1; i++) {
        days += days_in_month[i];
    }

    for (int i = 0; i < date.year; i++) {
        days += is_leap_year(i) ? 366 : 365;
    }

    return days;
}
int days_between_dates(struct Date d1, struct Date d2) {
    int days1 = days_from_start(d1);
    int days2 = days_from_start(d2);
    return days1 > days2 ? days1 - days2 : days2 - days1;
}
int day_of_week(struct Date date) {
    int d = date.day;
    int m = date.month;
    int y = date.year;

    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    int dow = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;
    return (dow + 7) % 7; // Adjust for negative values
}
