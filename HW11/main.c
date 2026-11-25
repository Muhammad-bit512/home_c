#include <stdio.h>
#include "temp_api.h"

#define SIZE 3

int main(void) {
    struct sensor info[SIZE] = {
        {2026, 1, 15, 12, 30, -5},
        {2026, 1, 16, 14, 00, -12},
        {2026, 5, 10, 18, 15, 22}
    };

    print_month_avg(info, SIZE, 1);
    print_month_min(info, SIZE, 1);
    print_month_max(info, SIZE, 1);

    printf("-----------------------------\n");

    print_year_avg(info, SIZE);
    print_year_min(info, SIZE);
    print_year_max(info, SIZE);

    return 0;
}
