#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED
#include "variables.h"

void showscore()
{
	itoa(sr,s1,10);
	iText(720,950,s1, GLUT_BITMAP_TIMES_ROMAN_24);
}
void fileappend(int a)
{
	FILE *b = fopen("log.txt", "a");
	fprintf(b, "\n%d", a);
	fclose(b);
}
void printFile()
{
	int a, filey=600;
	char scorefile[10];
	FILE *b = fopen("log.txt", "r");
	while (fscanf(b, "%d", &a) != EOF)
	{
		itoa(a, scorefile, 10);
		iText(370, filey, scorefile, GLUT_BITMAP_HELVETICA_18);
		printf("%d\n", a);
		filey -= 50;
	}
	fclose(b);
}

#endif // SCORE_H_INCLUDED
