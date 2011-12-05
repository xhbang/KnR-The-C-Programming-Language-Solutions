/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		wc.c
 * Date:		Wed 30 Nov 2011 10:56:56 AM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>
#define IN 0
#define OUT 1

main()
{
	char c;
	int wc, lc, cc;
	wc = lc = cc = 0;
	int state = OUT;
	while ((c=getchar()) != EOF) {
		cc++;
		if (c == '\n')
			lc++;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			wc++;
			state = IN;
		}
	}
	printf("word count: %d\nline count: %d\nchar count: %d\n", wc, lc, cc);
}

