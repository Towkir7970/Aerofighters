#ifndef COLISSION_H_INCLUDED
#define COLISSION_H_INCLUDED
# include "iGraphics.h"
# include "bitmap_loader.h"
# include "variables.h"
# include "bullets.h"
# include "myplane.h"
# include "enemy.h"
# include "levels.h"
void colissioncheak1()
{
		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j < bulletnumber; j++)
			{
				if ((bullet[j].x >= enemylevel1[i].x&&bullet[j].x <= (enemylevel1[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel1[i].y) || ((bullet[j].x + 55) >= enemylevel1[i].x && (bullet[j].x + 55) <= (enemylevel1[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel1[i].y))
				{
					enemylevel1[i].show = false;
					break;
				}
				else
					enemylevel1[i].show = true;
			}
		}
		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j < bulletnumber1; j++)
			{
				if ((bullet1[j].x >= enemylevel1[i].x&&bullet1[j].x <= (enemylevel1[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel1[i].y) || ((bullet1[j].x + 55) >= enemylevel1[i].x && (bullet1[j].x + 55) <= (enemylevel1[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel1[i].y))
				{
					enemylevel1[i].show = false;
					break;
				}
				else
					enemylevel1[i].show = true;
			}
		}
}
void colissioncheak2()
{
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < bulletnumber; j++)
		{
			if ((bullet[j].x >= enemylevel2[i].x&&bullet[j].x <= (enemylevel2[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel2[i].y) || ((bullet[j].x + 55) >= enemylevel2[i].x && (bullet[j].x + 55) <= (enemylevel2[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel2[i].y) ||( ((bullet1[j].x >= enemylevel2[i].x && bullet1[j].x <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y) ))|| (((bullet1[j].x + 55) >= enemylevel2[i].x && (bullet1[j].x + 55) <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y)))
			{
				enemylevel2[i].show = false;
				break;
			}
			else
				enemylevel2[i].show = true;
		}
	}
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < bulletnumber1; j++)
		{
			if ((bullet1[j].x >= enemylevel2[i].x&&bullet1[j].x <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y) || ((bullet1[j].x + 55) >= enemylevel2[i].x && (bullet1[j].x + 55) <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y))
			{
				enemylevel2[i].show = false;
				break;
			}
			else
				enemylevel2[i].show = true;
		}
	}
}
void colissioncheak3()
{
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < bulletnumber; j++)
		{
			if ((bullet[j].x >= enemylevel3[i].x&&bullet[j].x <= (enemylevel3[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel3[i].y) || ((bullet[j].x + 55) >= enemylevel3[i].x && (bullet[j].x + 55) <= (enemylevel3[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel3[i].y))
			{
				enemylevel3[i].show = false;
				break;
			}
			else
				enemylevel3[i].show = true;
		}
	}
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < bulletnumber1; j++)
		{
			if ((bullet1[j].x >= enemylevel3[i].x&&bullet1[j].x <= (enemylevel3[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel3[i].y) || ((bullet1[j].x + 55) >= enemylevel3[i].x && (bullet1[j].x + 55) <= (enemylevel3[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel3[i].y))
			{
				enemylevel3[i].show = false;
				break;
			}
			else
				enemylevel3[i].show = true;
		}
	}
}
void colissioncheak4()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < bulletnumber; j++)
		{
			if ((bullet[j].x >= enemylevel4[i].x&&bullet[j].x <= (enemylevel4[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel4[i].y) || ((bullet[j].x + 55) >= enemylevel4[i].x && (bullet[j].x + 55) <= (enemylevel4[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel4[i].y))
			{
				enemylevel4[i].show = false;
				break;
			}
			else
				enemylevel4[i].show = true;
		}
	}
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < bulletnumber1; j++)
		{
			if ((bullet1[j].x >= enemylevel4[i].x&&bullet1[j].x <= (enemylevel4[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel4[i].y) || ((bullet1[j].x + 55) >= enemylevel4[i].x && (bullet1[j].x + 55) <= (enemylevel4[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel4[i].y))
			{
				enemylevel4[i].show = false;
				break;
			}
			else
				enemylevel4[i].show = true;
		}
	}
}
	void colissioncheak5()
	{
		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j < bulletnumber; j++)
			{
				if ((bullet[j].x >= enemylevel5[i].x&&bullet[j].x <= (enemylevel5[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel5[i].y) || ((bullet[j].x + 55) >= enemylevel5[i].x && (bullet[j].x + 55) <= (enemylevel5[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel5[i].y))
				{
					enemylevel5[i].show = false;
					break;
				}
				else
					enemylevel5[i].show = true;
			}
		}
		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j < bulletnumber1; j++)
			{
				if ((bullet1[j].x >= enemylevel5[i].x&&bullet1[j].x <= (enemylevel5[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel5[i].y) || ((bullet1[j].x + 55) >= enemylevel5[i].x && (bullet1[j].x + 55) <= (enemylevel5[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel5[i].y))
				{
					enemylevel5[i].show = false;
					break;
				}
				else
					enemylevel5[i].show = true;
			}
		}
	}



#endif // COLISSION_H_INCLUDED
