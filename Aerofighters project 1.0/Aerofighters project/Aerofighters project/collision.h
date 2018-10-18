#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include "variables.h"

void colissioncheak1()
{
		for (int i = 0; i < 4; i++)
		{
			if (enemylevel1[i].show == true)
			{
				for (int j = 0; j < bulletnumber; j++)
				{
					if ((bullet[j].x >= enemylevel1[i].x&&bullet[j].x <= (enemylevel1[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel1[i].y) && ((bullet[j].y + 100) < (enemylevel1[i].y + 100)) || (bullet[j].x + 50 >= enemylevel1[i].x&&bullet[j].x + 50 <= (enemylevel1[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel1[i].y) && ((bullet[j].y + 100) < (enemylevel1[i].y + 100)))
					{
						enemylevel1[i].show = false;
						sr++;
						break;
					}
					else
					{
						enemylevel1[i].show = true;
					}
				}
			}
		}
		for (int i = 0; i<4; i++)
		{
			if (enemylevel1[i].show == true)
			{
				for (int j = 0; j < bulletnumber1; j++)
				{
					if ((bullet1[j].x >= enemylevel1[i].x&&bullet1[j].x <= (enemylevel1[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel1[i].y) && ((bullet1[j].y + 100) < (enemylevel1[i].y + 100)) || (bullet1[j].x+50 >= enemylevel1[i].x&&bullet1[j].x+50 <= (enemylevel1[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel1[i].y) && ((bullet1[j].y + 100) < (enemylevel1[i].y + 100)))
					{
						enemylevel1[i].show = false;
						sr++;
						break;
					}
					else
					{
						enemylevel1[i].show = true;

					}
				}
			}
		}
}
void colissioncheak2()
{
	for (int i = 0; i < 4; i++)
	{
		if (enemylevel2[i].show == true)
		{
			for (int j = 0; j < bulletnumber; j++)
			{
				if ((bullet[j].x >= enemylevel2[i].x&&bullet[j].x <= (enemylevel2[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel2[i].y) && ((bullet[j].y + 100) < (enemylevel2[i].y + 100)) || (bullet[j].x + 50 >= enemylevel2[i].x&&bullet[j].x + 50 <= (enemylevel2[i].x + 120)) && ((bullet[j].y + 100) >= enemylevel2[i].y) && ((bullet[j].y + 100) < (enemylevel2[i].y + 100)))
				{
					enemylevel2[i].show = false;
					sr++;
					break;
				}
				else
				{
					enemylevel2[i].show = true;
				}
			}
		}
	}
	for (int i = 0; i<4; i++)
	{
		if (enemylevel2[i].show == true)
		{
			for (int j = 0; j < bulletnumber1; j++)
			{
				if ((bullet1[j].x >= enemylevel2[i].x&&bullet1[j].x <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y) && ((bullet1[j].y + 100) < (enemylevel2[i].y + 100)) || (bullet1[j].x + 50 >= enemylevel2[i].x&&bullet1[j].x + 50 <= (enemylevel2[i].x + 120)) && ((bullet1[j].y + 100) >= enemylevel2[i].y) && ((bullet1[j].y + 100) < (enemylevel2[i].y + 100)))
				{
					enemylevel2[i].show = false;
					sr++;
					break;
				}
				else
				{
					enemylevel2[i].show = true;

				}
			}
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
			{
				if (enemylevel3[i].show == false)
				{
					enemylevel3[i].show = false;
				}
				else
					enemylevel3[i].show = true;
			}
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
			{
				if (enemylevel3[i].show == false)
				{
					enemylevel3[i].show = false;
				}
				else
					enemylevel3[i].show = true;
			}
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
			{
				if (enemylevel4[i].show == false)
				{
					enemylevel4[i].show = false;
				}
				else
					enemylevel4[i].show = true;
			}
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
				{
					if (enemylevel4[i].show == false)
					{
						enemylevel4[i].show = false;
					}
					else
						enemylevel4[i].show = true;
				}
			}
		}
	}



#endif // COLLISION_H_INCLUDED
