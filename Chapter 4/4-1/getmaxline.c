/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		getmaxline.c
 * Date:		Wed 30 Nov 2011 09:44:45 AM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>

int getmaxline(char line[], int max){
		//char c;
		int c;
		int i = 0;
	
		while(--max > 0 && (c=getchar()) != EOF && c != '\n')
			line[i++] = c;			//DO NOT FORGET "= c;"
		if (c == '\n');
		line[i++] = c;
		line[i] = '\0';
		return i;
}
