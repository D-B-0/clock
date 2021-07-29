#include "../includes/numbers.h"

#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
	time_t raw_time;
	struct tm *time_info;
	int divisor;

	divisor = 1;
	while (1)
	{
		printf("\e[1;1H\e[2J");
		time(&raw_time);
		time_info = localtime(&raw_time);
		print_clock(
			ascii_of_num(time_info->tm_hour / 10),
			ascii_of_num(time_info->tm_hour % 10),
			divisor? divisor_on : divisor_off,
			ascii_of_num(time_info->tm_min / 10),
			ascii_of_num(time_info->tm_min % 10)
		);
		divisor ^= 1;
		usleep(600 * 1000);
	}

	return(0);
}
