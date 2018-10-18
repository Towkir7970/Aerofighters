#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include "variables.h"

    struct enemy1
{
	int x;
	int y;
	bool show=true;
}enemylevel1[4];
	struct enemy2
{
	int x;
	int y;
	bool show = true;
}enemylevel2[4];
	struct enemy3
{
	int x;
	int y;
	bool show = true;
}enemylevel3[4];
	struct enemy4
{
	int x;
	int y;
	bool show = true;
}enemylevel4[4];
	struct enemy5
{
	int x;
	int y;
	bool show = true;
}enemylevel5[4];

	void setenemy1()
	{
		for (int i = 0; i<4; i++)
		{
			enemylevel1[i].x = 100 + rand() % 600;
			enemylevel1[i].y = 1019 + rand() % 300;
		}
	}
void enemy1change()
{
	for(int i=0;i<4;i++)
	{
		enemylevel1[i].y -= 5;
		if(enemylevel1[i].y<0)
	    {
				enemylevel1[i].y = 1019 + rand() % 700;
				enemylevel1[i].x = 20 + rand() % 650;
	    }
	}
}
void enemy1()
{
	for (int i = 0; i<4; i++)
	{
		if (enemylevel1[i].show)
			iShowImage(enemylevel1[i].x, enemylevel1[i].y, 120, 100, image1);
		else
		{
			if (enemylevel1[i].y>1019)
			{
				enemylevel1[i].show = true;
			}
		}
	}
}

void enemy2change()
{
		for(int i=0;i<4;i++)
	{
		enemylevel2[i].y-=5;
		if(enemylevel2[i].y<0)
	    {
		   enemylevel2[i].y=1019+rand()%700;
		   enemylevel2[i].x=20+rand()%650;
	    }
	}
}
void setenemy2()
{
	for(int i=0;i<4;i++)
	{
		enemylevel2[i].x=100+rand()%600;
		enemylevel2[i].y=1019+rand()%300;
	}
}
void enemy2()
{
	for (int i = 0; i<4; i++)
	{
		if (enemylevel2[i].show)
			iShowImage(enemylevel2[i].x, enemylevel2[i].y, 120, 100, image1);
		else
		{
			if (enemylevel2[i].y>1019)
			{
				enemylevel2[i].show = true;
			}
		}
	}
}
void enemy3change()
{
		for(int i=0;i<4;i++)
	{
		enemylevel3[i].y-=5;
		if(enemylevel3[i].y<0)
	    {
		   enemylevel3[i].y=1019+rand()%700;
		   enemylevel3[i].x=20+rand()%650;
	    }
	}
}
void setenemy3()
{
	for(int i=0;i<4;i++)
	{
		enemylevel3[i].x=100+rand()%600;
		enemylevel3[i].y=1019+rand()%300;
	}
}
void enemy3()
{
	for(int i=0;i<4;i++)
	{
		if (enemylevel3[i].show)
		iShowImage(enemylevel3[i].x, enemylevel3[i].y, 120, 100, image3);
		else
			score++;
	}
}
void enemy4change()
{
		for(int i=0;i<4;i++)
	{
		enemylevel4[i].y-=5;
		if(enemylevel4[i].y<0)
	    {
		   enemylevel4[i].y=1019+rand()%700;
		   enemylevel4[i].x=20+rand()%650;
	    }
	}
}
void setenemy4()
{
	for(int i=0;i<4;i++)
	{
		enemylevel4[i].x=100+rand()%600;
		enemylevel4[i].y=1019+rand()%300;
	}
}
void enemy4()
{
	for(int i=0;i<4;i++)
	{
		if (enemylevel4[i].show)
		iShowImage(enemylevel4[i].x, enemylevel4[i].y, 120, 100, image4);
		else
		score++;
	}
}
void enemy5change()
{
	for(int i=0;i<4;i++)
	{
		enemylevel5[i].y-=5;
		if(enemylevel5[i].y<0)
	    {
		   enemylevel5[i].y=1019+rand()%700;
		   enemylevel5[i].x=20+rand()%650;
	    }
	}
}
void setenemy5()
{
	for(int i=0;i<4;i++)
	{
		enemylevel5[i].x=100+rand()%600;
		enemylevel5[i].y=1019+rand()%300;
	}
}
void enemy5()
{
	for (int i = 0; i < 4; i++)
	{
		if (enemylevel5[i].show)
			iShowImage(enemylevel5[i].x, enemylevel5[i].y, 120, 100, image5);
		else
			score++;
	}
}


#endif // ENEMY_H_INCLUDED
