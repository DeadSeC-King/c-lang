/*Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.*/
#include <stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main() {
    enum Days day;
    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("Day %d: %s\n", day, 
               (day == SUNDAY) ? "SUNDAY" :
               (day == MONDAY) ? "MONDAY" :
               (day == TUESDAY) ? "TUESDAY" :
               (day == WEDNESDAY) ? "WEDNESDAY" :
               (day == THURSDAY) ? "THURSDAY" :
               (day == FRIDAY) ? "FRIDAY" :
               "SATURDAY");
    }
    return 0;
}