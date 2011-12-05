/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		main.c
 * Date:		Wed 30 Nov 2011 09:41:44 AM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>
#define MAX 10
int getmaxline(char line[], int max);
int strindex_hang(char source[], char dest[]);

char find[] = "test";

main()
{
	char line[MAX];
	int sum = 0;
	while (getmaxline(line, MAX) > 0){
		//printf("line is %s\n", line); 
		if (strindex_hang(line, find) > 0){
			printf("patten found @ %s\n",line);
		sum++;
		}
	}
	printf("%d pattern founded\n", sum);
}
