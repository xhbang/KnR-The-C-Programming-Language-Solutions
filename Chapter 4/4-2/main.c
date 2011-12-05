/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		main.c
 * Date:		Mon 05 Dec 2011 03:23:53 PM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>
#define N 10
main()
{
	double sum,atof(char[]);
	char line[N];
	sum = 0;
	while ((scanf("%s",&line)!= EOF)) {
//		printf("input line:%s\n",line);
		sum += atof(line);
		printf("\n%lf\n",sum);
	}
	printf("sum is :\n%lf\n",sum);
	printf("sum is :\n%g\n",sum);

}

