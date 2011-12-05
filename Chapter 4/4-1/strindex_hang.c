/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		strindex_hang.c
 * Date:		Wed 30 Nov 2011 09:49:28 AM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>

int strindex_hang(char source[], char dest[]){
	int i,j,k;
	for (i = 0; source[i] != '\0'; i++){
		for (j = i, k = 0; dest[k] != '\0' && source[j] == dest[k]; j++, k++)
			;
		if (k > 0 && dest[k] == '\0')
			return k;
	}
}
