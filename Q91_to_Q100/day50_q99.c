// Q99: Change the date format from dd/mm/yyyy to dd-Mon-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // <-- Added this header for atoi()

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    gets(date); // safer: fgets(date, sizeof(date), stdin);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int m = atoi(month);

    if (m >= 1 && m <= 12)
        printf("%s-%s-%s\n", day, months[m - 1], year);
    else
        printf("Invalid month!\n");

    return 0;
}
