/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		atof-org.c
 * Date:		Mon 05 Dec 2011 03:35:00 PM CST
 *
 * Please feel free to use and improve it
 */
#include <ctype.h>

double atof(char s[]){
	double sign, val;
	int i;
	//skip blank
	for (i = 0; isspace(s[i]); i++) 
		;
	sign = (s[i] == '-')?-1:1;			/* this line is triky */

	if (s[i] == '+' || s[i] == '-')
		i++;

	//calculate
	for (val = 0.0; isdigit(s[i]); i++)
		val = val * 10 + (s[i] - '0');
	if (s[i] == '.')
		i++;
	int power;
	for (power = 1.0; isdigit(s[i]); i++){
		val = val * 10 + (s[i] - '0');
		power *= 10;
	}

	val = sign * val/power;
	return val;
}
