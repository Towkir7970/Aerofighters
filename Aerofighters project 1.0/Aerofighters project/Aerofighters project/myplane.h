#ifndef MYPLANE_H_INCLUDED
#define MYPLANE_H_INCLUDED
#include "variables.h"
struct planecoordinates
{
	int x;
	int y;
	bool show;
	planecoordinates()
	{
		x=100;
		y=30;
		show = true;
	}
}plnkey[5];
struct planecoordinates2
{
	int x1;
	int y1;
	bool show;
	planecoordinates2()
	{
		x1 = 250;
		y1 = 30;
		show = true;
	}
}plnmouse[5];

void plane1()
{
	iShowBMP2(plnkey[0].x, plnkey[0].y, "level1plane.bmp", 0);
}
void planem1()
{
	iShowBMP2(plnmouse[0].x1, plnmouse[0].y1, "level1plane1.bmp", 0);
}
void plane2()
{
	iShowBMP2(plnkey[1].x, plnkey[1].y, "level2plane.bmp", 0);
}
void planem2()
{
	iShowBMP2(plnmouse[1].x1, plnmouse[1].y1, "level2plane1.bmp", 0);
}
void plane3()
{
	iShowBMP2(plnkey[2].x, plnkey[2].y, "level3plane.bmp", 0);
}
void planem3()
{
	iShowBMP2(plnmouse[2].x1, plnmouse[2].y1, "level3plane1.bmp", 0);
}
void plane4()
{
	iShowBMP2(plnkey[3].x, plnkey[3].y, "level4plane.bmp", 0);
}
void planem4()
{
	iShowBMP2(plnmouse[3].x1, plnmouse[3].y1, "level4plane1.bmp", 0);
}
void plane5()
{
	iShowBMP2(plnkey[4].x, plnkey[4].y, "level5plane.bmp", 0);
}
void planem5()
{
	iShowBMP2(plnmouse[4].x1, plnmouse[4].y1, "level5plane1.bmp", 0);
}

#endif // MYPLANE_H_INCLUDED
