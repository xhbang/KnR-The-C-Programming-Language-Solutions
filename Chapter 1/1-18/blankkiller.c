/*
 * Copyleft:	Hang xie
 * Email:		sonicisdreaming@gmail.com
 * Blog:		xhbang.com
 * File:		blankkiller.c
 * Date:		Wed 30 Nov 2011 03:24:50 PM CST
 *
 * Please feel free to use and improve it
 */
#include <stdio.h>
#define MAX 20

int get_line(char line[], int max);
void killer(char str[], int len);

main()
{
	char line[MAX];
	int i, len;
	char c;

	while ((len = get_line(line, MAX)) > 0){
		killer(line, len);
		printf("%s",line);
	}
}

int get_line(char line[], int max){
	char c;
	int i = 0;
	for (--max; (c = getchar()) != EOF && c != '\n';)
		line[i++] = c;
	if (c == '\n')
		line[i++] = c;
	line[i] = '\0';
	return i;
}

void killer(char str[], int len){
	int pos;
	for (pos = len - 1; pos >= 0; pos--){
		if (str[pos] == '\t' || str[pos] == ' ')
			;
		else
			break;
	}
	str[pos + 1] == '\0';
}

