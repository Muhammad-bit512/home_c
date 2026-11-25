#include <stdio.h>
#include "temp_api.h"

void print_month_avg(struct sensor* info, int n, uint8_t month) {
    (void)info; (void)n;
    printf("Month %d: average temperature\n", month);
}

void print_month_min(struct sensor* info, int n, uint8_t month) {
    (void)info; (void)n;
    printf("Month %d: min temperature\n", month);
}

void print_month_max(struct sensor* info, int n, uint8_t month) {
    (void)info; (void)n;
    printf("Month %d: max temperature\n", month);
}

void print_year_avg(struct sensor* info, int n) {
    (void)info; (void)n;
    printf("Year: average temperature\n");
}

void print_year_min(struct sensor* info, int n) {
    (void)info; (void)n;
    printf("Year: min temperature\n");
}

void print_year_max(struct sensor* info, int n) {
    (void)info; (void)n;
    printf("Year: max temperature\n");
}
