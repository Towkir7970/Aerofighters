#ifndef ANTAGONISTS_H_INCLUDED
#define ANTAGONISTS_H_INCLUDED
#include "variables.h"
#include "bullets.h"

struct antagonist
{
	int x;
	int y;
	bool show = true;
}anta[5];

struct antagonistbullet
{
	int x;
	int y;
}antabullet[3];

void changeantagn()
{
	if (flag == 1)
	{
		if (anta[level - 1].x <= 580)
			anta[level - 1].x = anta[level - 1].x + 5;
		else
			flag = 0;
	}
	else
	{
		if (anta[level - 1].x >= 5)
			anta[level - 1].x = anta[level - 1].x - 5;
		else
			flag = 1;
	}
}
void antagonistshow()
{
	//if (level==1)
	iShowImage(anta[level - 1].x, 700, 250, 250,ant1);
	/*
	if (level == 2)
		iShowImage(anta[level - 1].x, 700, 250, 250, ant1);
	if (level == 3)
		iShowImage(anta[level - 1].x, 700, 250, 250, ant1);
	if (level == 4)
		iShowImage(anta[level - 1].x, 700, 250, 250, ant1);
	if (level == 5)
		iShowImage(anta[level - 1].x, 700, 250, 250, ant1);
	*/
}
void setantagonistsbullet()
{
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			antabullet[i].x = anta[level - 1].x + 100;
			antabullet[i].y = 700;
		}
		else if (i == 1)
		{
			antabullet[i].x = anta[level - 1].x + 200;
			antabullet[i].y = 700;
		}
		else if (i == 2)
		{
			antabullet[i].x = anta[level - 1].x + 400;
			antabullet[i].y = 700;
		}
	}
}
void antabullaetchange()
{
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			antabullet[i].x = antabullet[i].x-1;
			antabullet[i].y = antabullet[i].y-5;
		}
		else if (i == 1)
		{
			//antabullet[i].x = anta[level - 1].x;
			antabullet[i].y = antabullet[i].y - 5;
			if (antabullet[i].y<=0)
			{
				setantagonistsbullet();
			}
		}
		else if (i == 2)
		{
			antabullet[i].x = antabullet[i].x + 1;
			antabullet[i].y = antabullet[i].y - 5;
		}
	}
}
void showantagonistsbullet()
{
	for (int i = 0; i < 3; i++)
	{
		iShowImage(antabullet[i].x,antabullet[i].y, 50,50, shoot);
	}
}

#endif // ANTAGONISTS_H_INCLUDED
