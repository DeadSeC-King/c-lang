//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char date[MAX];
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    // Remove newline character if present
    date[strcspn(date, "\n")] = 0;

    // Extract day, month, and year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to month name
    char* month_name;
    switch(atoi(month))
    {
        case 1: month_name = "Jan"; break;
        case 2: month_name = "Feb"; break;
        case 3: month_name = "Mar"; break;
        case 4: month_name = "Apr"; break;
        case 5: month_name = "May"; break;
        case 6: month_name = "Jun"; break;
        case 7: month_name = "Jul"; break;
        case 8: month_name = "Aug"; break;
        case 9: month_name = "Sep"; break;
        case 10: month_name = "Oct"; break;
        case 11: month_name = "Nov"; break;
        case 12: month_name = "Dec"; break;
        default: month_name = "Invalid"; break;
    }

    // Print the reformatted date
    printf("Reformatted date: %s-%s-%s\n", day, month_name, year);
    return 0;
}
