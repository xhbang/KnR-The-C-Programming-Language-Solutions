/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		strindexmain.c
 * Date:		Wed 30 Nov 2011 09:00:50 AM CST
 *
 * Please feel free to use and improve it
 */

#include <stdio.h>
#define MAX 10
int getmaxline(char line[], int max);
int strindex(char source[], char dest[]);

char find[] = "test";

main()
{
	char line[MAX];
	int sum = 0;

	while (getmaxline(line, MAX) > 0){
		printf("line is %s\n", line);
		if (strindex(line, find) > 0){
			printf("patten found\n",line);
			sum++;
		}
	}
}

///usr/include/stdio.h:671:20: note: previous declaration of ‘getmaxline’ was here

int getmaxline(char line[], int max){
	//char c;
	int c;
	int i = 0;
	//use --max instead of max--,for '\0' at end of string
	// wrong: while(--max > 0 && (c=getchar()) != '\0' && c != '\n')
	while(--max > 0 && (c=getchar()) != EOF && c != '\n')
		line[i++] = c;			//DO NOT FORGET "= c;"
	if (c == '\n')
		line[i++] = c;
	line[i] = '\0';
	//despite '\0',i is size of string
	return i;
}

int strindex(char source[], char dest[]){
	int i,j,k;
	for (i = 0; source[i] != '\0'; i++){
		for (j = i, k = 0; dest[k] != '\0' && source[j] == dest[k]; j++, k++)
			;
		if (k > 0 && dest[k] == '\0')
			return k;
	}
}
