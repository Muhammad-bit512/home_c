#ifndef TEMP_API_H
#define TEMP_API_H

#include <stdint.h>

struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
};

void print_month_avg(struct sensor* info, int n, uint8_t month);
void print_month_min(struct sensor* info, int n, uint8_t month);
void print_month_max(struct sensor* info, int n, uint8_t month);

void print_year_avg(struct sensor* info, int n);
void print_year_min(struct sensor* info, int n);
void print_year_max(struct sensor* info, int n);

#endif
