#ifndef NUMBERS_H
#define NUMBERS_H

void print_number(const char *num[]);
void print_clock(const char *hour_digit_2[], const char *hour_digit_1[], const char *divisor[], const char *minute_digit_2[], const char *minute_digit_1[]);
const char **ascii_of_num(int num);

#define ASCII_LINES 8
const char *divisor_on[ASCII_LINES];
const char *divisor_off[ASCII_LINES];
const char *zero[ASCII_LINES];
const char *one[ASCII_LINES];
const char *two[ASCII_LINES];
const char *three[ASCII_LINES];
const char *four[ASCII_LINES];
const char *five[ASCII_LINES];
const char *six[ASCII_LINES];
const char *seven[ASCII_LINES];
const char *eight[ASCII_LINES];
const char *nine[ASCII_LINES];

#endif