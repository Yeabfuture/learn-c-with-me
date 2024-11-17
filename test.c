#include <stdio.h>

// Function to check if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to validate the date input
int is_valid_date(int year, int month, int day) {
    if (year < 1990 || month < 1 || month > 12 || day < 1) {
        return 0; // Invalid year, month, or day
    }
    
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year)) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }
    
    if (day > days_in_month[month - 1]) {
        return 0; // Day exceeds maximum days in the given month
    }
    
    return 1; // Valid date
}

// Function to calculate the total number of days from Jan 1, 1990
int days_from_start(int year, int month, int day) 
{
    int days = 0;
    
    // Calculate total days for the years before the given year
    for (int y = 1990; y < year; y++) {
        days += is_leap_year(y) ? 366 : 365;
    }
    
    // Days in months array
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year)) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }
    
    // Add the days for the months before the given month
    for (int m = 0; m < month - 1; m++) {
        days += days_in_month[m];
    }
    
    // Add the days for the current month (day - 1 to exclude the starting day)
    days += day - 1;
    
    return days;
}

// Function to determine if fishing or basking
const char* fishing_or_basking(int days_passed) {
    int cycle_position = days_passed % 5;
    if (cycle_position < 3) {
        return "fishing";
    } else {
        return "basking";
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int year, month, day;
        scanf("%d %d %d", &year, &month, &day);
        
        if (year < 1990) {
           // printf("Invalid year: %d\n", year);
            break;
        }
        
        if (!is_valid_date(year, month, day)) {
            // printf("Invalid date: %d.%02d.%02d\n", year, month, day);
            break; 
        }
        
        int days_passed = days_from_start(year, month, day);
        const char* result = fishing_or_basking(days_passed);
        
        printf("He was %s on %d.%d.%d\n", result, year, month, day);
    }
    
    return 0;
}
