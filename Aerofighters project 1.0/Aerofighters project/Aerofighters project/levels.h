#ifndef LEVELS_H_INCLUDED
#define LEVELS_H_INCLUDED
#include "variables.h"

struct background1
{
	int X;int Y;
	background1()
	{
		X=0;
		Y=0;
	}
}backgrnd1;
struct background2
{
	int X;int Y;
	background2()
	{
		X=0;
		Y=1015;
	}
}backgrnd2;
void backgroundcordinate()
{
	if(backgrnd1.Y<-1015)
	{
		backgrnd1.Y=1015;
	}
	else
		backgrnd1.Y-=1;
	if(backgrnd2.Y<-1015)
	{
		backgrnd2.Y=1015;
	}
	else
		backgrnd2.Y-=1;
}
void background1()
{
	backgroundcordinate();
	iShowImage(backgrnd1.X,backgrnd1.Y,767,1019,bg1);
	iShowImage(backgrnd2.X,backgrnd2.Y,767,1019, bg2);
	iText(650, 950, "score", GLUT_BITMAP_TIMES_ROMAN_24);
}
void background2()
{
	backgroundcordinate();
	iShowImage(backgrnd1.X,backgrnd1.Y,767,1019,bg3);
	iShowImage(backgrnd2.X,backgrnd2.Y,767,1019, bg4);
	iText(650, 950, "score", GLUT_BITMAP_TIMES_ROMAN_24);
}
void background3()
{
	backgroundcordinate();
	iShowImage(backgrnd1.X,backgrnd1.Y,767,1019,bg5);
	iShowImage(backgrnd2.X,backgrnd2.Y,767,1019, bg6);
	iText(650, 950, "score", GLUT_BITMAP_TIMES_ROMAN_24);
}
void background4()
{
	backgroundcordinate();
	iShowImage(backgrnd1.X,backgrnd1.Y,767,1019,bg7);
	iShowImage(backgrnd2.X,backgrnd2.Y,767,1019, bg8);
	iText(650, 950, "score", GLUT_BITMAP_TIMES_ROMAN_24);
}
void background5()
{
	backgroundcordinate();
	iShowImage(backgrnd1.X,backgrnd1.Y,767,1019,bg9);
	iShowImage(backgrnd2.X,backgrnd2.Y,767,1019, bg10);
	iText(650, 950, "score", GLUT_BITMAP_TIMES_ROMAN_24);
}


#endif // LEVELS_H_INCLUDED
