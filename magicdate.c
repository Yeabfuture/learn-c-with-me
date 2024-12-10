#include <stdio.h>

int isMagicDate(int day, int month, int year) {
    int lastTwoDigitsOfYear = year % 100;
    if (day * month == lastTwoDigitsOfYear) {
        return 1;
    }
    return 0;
}

void findMagicDatesIn20thCentury() {
    
    for (int year = 1900; year <= 1999; year++) {
        int hasMagicYear = 0;
        int printed = 0;
        for (int month = 1; month <= 12; month++) {
            int maxDays = 31;
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                maxDays = 30;
            } else if (month == 2) {
                int leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
                maxDays = leapYear ? 29 : 28;
            }

            for (int day = 1; day <= maxDays; day++) {
                if (isMagicDate(day, month, year)) {
                    printf("%04d/%02d/%02d ", year, month, day);
                    printed = 1;
                    hasMagicYear = 1;
                }
            }
        }
        if (printed > 0) {
            printf("\n");
        }
        if(hasMagicYear == 0)
        {
            printf("\n");
        }
    }
}

int main() {
    getchar();
    findMagicDatesIn20thCentury();
    return 0;
}
