#ifndef BULLETS_H_INCLUDED
#define BULLETS_H_INCLUDED
#include "variables.h"

struct bulletplanekey
{
	int x;
	int y;
	bool show=true;
}bullet[1000];
struct bulletplanemouse
{
	int x;
	int y;
	bool show = true;
}bullet1[1000];

void set()
{
	bullet[bulletnumber-1].x = plnkey[level-1].x + 40;
	bullet[bulletnumber-1].y = plnkey[level-1].y + 110;
}
void changefire()
{
	for (int i = 0; i < bulletnumber; i++)
	{

			bullet[i].y = bullet[i].y + 2;

	}
}
void showfire()
{
	for (int b1 = 0;b1<bulletnumber;b1++)
	{

			iShowImage(bullet[b1].x, bullet[b1].y, 20, 100, shoot);
			iShowImage(bullet[b1].x + 55, bullet[b1].y, 20, 100, shoot);

	}
}
void set1()
{
	bullet1[bulletnumber1 - 1].x = plnmouse[level - 1].x1 + 40;
	bullet1[bulletnumber1 - 1].y = plnmouse[level - 1].y1 + 110;
}
void changefire1()
{
	for (int i = 0; i<bulletnumber1; i++)
		bullet1[i].y = bullet1[i].y + 2;
}
void showfire1()
{
	for (int b1 = 0; b1<bulletnumber1; b1++)
	{
		iShowImage(bullet1[b1].x, bullet1[b1].y, 20, 100, shoot);
		iShowImage(bullet1[b1].x + 55, bullet1[b1].y, 20, 100, shoot);
	}
}


#endif // BULLETS_H_INCLUDED
