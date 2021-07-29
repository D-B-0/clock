#include "../includes/numbers.h"

#include <stdio.h>
#include <stdlib.h>

void print_number(const char *num[])
{
	int i;
	i = 0;
	while (i < ASCII_LINES)
	{
		printf("%s\n", num[i]);
		i++;
	}
}

void print_clock(const char *hour_digit_2[], const char *hour_digit_1[], const char *divisor[], const char *minute_digit_2[], const char *minute_digit_1[])
{
	int i;
	i = 0;
	while (i < ASCII_LINES)
	{
		printf("%s%s%s%s%s\n", hour_digit_2[i], hour_digit_1[i], divisor[i], minute_digit_2[i], minute_digit_1[i]);
		i++;
	}
}

const char **ascii_of_num(int num)
{
	switch (num)
	{
	case 0:
		return(zero);
	case 1:
		return(one);
	case 2:
		return(two);
	case 3:
		return(three);
	case 4:
		return(four);
	case 5:
		return(five);
	case 6:
		return(six);
	case 7:
		return(seven);
	case 8:
		return(eight);
	case 9:
		return(nine);
	default:
		fprintf(stderr, "Requested ascii of unavailable number\n");
		exit(1);
	}
}

const char *divisor_on[] = {
	"        ",
	"   __   ",
	"  |__|  ",
	"        ",
	"   __   ",
	"  |__|  ",
	"        ",
	"        ",
};
const char *divisor_off[] = {
	"        ",
	"        ",
	"        ",
	"        ",
	"        ",
	"        ",
	"        ",
	"        ",
};
const char *zero[] = {
	"    _____   ",
	"   /  _  \\  ",
	"  |  / \\  | ",
	"  |  | |  | ",
	"  |  | |  | ",
	"  |  | |  | ",
	"  |  \\_/  | ",
	"   \\_____/  ",
};
const char *one[] = {
	"      __    ",
	"     /  |   ",
	"    / / |   ",
	"   /_/| |   ",
	"      | |   ",
	"      | |   ",
	"      | |   ",
	"      |_|   ",
};
const char *two[] = {
	"    ____    ",
	"   / __ \\   ",
	"  / /  \\ \\  ",
	"  |_|  / /  ",
	"      / /   ",
	"     / /    ",
	"    / /____ ",
	"   /_______|",
};
const char *three[] = {
	"    _____   ",
	"   /  _  \\  ",
	"   |_/ | |  ",
	"      /  |  ",
	"      \\  |  ",
	"    _  | |  ",
	"   | \\_| |  ",
	"   \\_____/  ",
};
const char *four[] = {
	"     ____   ",
	"    / _  |  ",
	"   / / | |  ",
	"  / /  | |  ",
	" / /___| |_ ",
	"|__________|",
	"       | |  ",
	"       |_|  ",
};
const char *five[] = {
	"    ______  ",
	"   | _____| ",
	"   | |      ",
	"   |  \\_    ",
	"    \\_  \\   ",
	"      \\  |  ",
	"    __|  /  ",
	"    \\___/   ",
};
const char *six[] = {
	"      _     ",
	"     / /    ",
	"    / /     ",
	"   / /      ",
	"   | \\___   ",
	"   \\  __  \\ ",
	"    \\ \\_\\  \\",
	"     \\_____/",
};
const char *seven[] = {
	"   _________",
	"   \\_____  /",
	"        / / ",
	"       / /  ",
	"      / /   ",
	"     / /    ",
	"    / /     ",
	"   /_/      ",
};
// const char *seven[] = {
// 	"    ________",
// 	"   /_____  /",
// 	"        / /",
// 	"       / /",
// 	"      / /",
// 	"     / /",
// 	"    / /",
// 	"   /_/",
// };
const char *eight[] = {
	"            ",
	"     ___    ",
	"    / _ \\   ",
	"   | |_| |  ",
	"    \\   /   ",
	"    / _ \\   ",
	"   | |_| |  ",
	"    \\___/   ",
};
const char *nine[] = {
	"   _____    ",
	"  / __  \\   ",
	"  \\ \\_\\  \\  ",
	"   \\____  \\ ",
	"        \\ | ",
	"        / / ",
	"       / /  ",
	"      /_/   ",
};
