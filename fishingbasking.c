#include <stdio.h>  
  
int is_leap_year(int year)   
{  
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));  
}  
  
int days_from_start(int year, int month, int day)   
{  
    int days = 0;  
  
    for (int y = 1990; y < year; y++)   
    {  
        days += is_leap_year(y) ? 366 : 365;  
    }  
  
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
  
    if (is_leap_year(year))   
    {  
        days_in_month[1] = 29;  
    }  
  
    for (int m = 0; m < month - 1; m++)   
    {  
        days += days_in_month[m];  
    }  
  
    days += day - 1; // -1 because we want the difference from the starting day  
  
    return days;  
}  

int validateInput(int year, int month, int day)
{
    if(year>1990)
    {
        if(month >0 && month <13)
        {
            int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if( day <= days_in_month[--month])
            {
                return 1;
            }
            printf("Day is wrong!\n");
            return 0;
        }

            printf("Month is wrong!\n");
            return 0;
    }
        printf("Year is wrong!\n");
        return 0;
}
  
const char* fishing_or_basking(int days_passed)   
{  
    int cycle_position = days_passed % 5;  
    if (cycle_position < 3)   
    {  
        return "fishing";  
    }   
    else   
    {  
        return "basking";  
    }  
}  
  
int main()   
{  
    int n;  
    scanf("%d", &n);  
  
    for (int i = 0; i < n; i++)   
    {  
        int year, month, day;  
        scanf("%d %d %d", &year, &month, &day); 

        if(validateInput(year,month,day) == 1)
        {
            int days_passed = days_from_start(year, month, day);  
            const char* result = fishing_or_basking(days_passed);  
            printf("He was %s on %d.%02d.%02d\n", result, year, month, day);  
        }

        else
        {
            return 0;
        }

    }  
  
    return 0;  
}  