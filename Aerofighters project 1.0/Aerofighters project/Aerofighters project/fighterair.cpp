# include "iGraphics.h"
# include "bitmap_loader.h"
# include "variables.h"
# include "myplane.h"
# include "bullets.h"
# include "antagonists.h"
# include "enemy.h"
# include "collision.h"
# include "levels.h"
# include "score.h"


void ourplanecollision1()
{
	for (int i = 0; i < 4; i++)
	{
		if (level == 1)
		{
			if ((enemylevel1[i].x >= (plnkey[0].x - 120) && enemylevel1[i].x >= (plnkey[0].x + 150)) && (enemylevel1[i].y >= plnkey[0].y&&enemylevel1[i].y <= (plnkey[0].y + 180)))
			{
				live--;
				printf("%d", live);
			}
			if ((enemylevel1[i].x >= (plnmouse[0].x1 - 120) && enemylevel1[i].x >= (plnmouse[0].x1 + 150)) && (enemylevel1[i].y >= plnmouse[0].y1&&enemylevel1[i].y <= (plnmouse[0].y1 + 180)))
			{
				live1--;
				printf("%d", live1);
			}
		}
	}
}
void showlive()
{
	iSetColor(255,0,0);
	if (live == 3)
	{
		iFilledRectangle(40, 900, 50, 10);
		iFilledRectangle(90, 900, 50, 10);
		iFilledRectangle(140, 900, 50, 10);
	}
	else if (live == 2)
	{
		iFilledRectangle(40, 900, 50, 10);
		iFilledRectangle(90, 900, 50, 10);
	}
	else if (live == 1)
	{
		iFilledRectangle(40, 900, 50, 10);
	}
	else if (live == 0)
	{
		level = 0;
	}
	if (multiplayer == 1)
	{
		if (live == 3)
		{
			iFilledRectangle(600, 900, 50, 10);
			iFilledRectangle(650, 900, 50, 10);
			iFilledRectangle(700, 900, 50, 10);
		}
		else if (live == 2)
		{
			iFilledRectangle(600, 900, 50, 10);
			iFilledRectangle(650, 900, 50, 10);

		}
		else if (live==1)
		iFilledRectangle(600, 900, 50, 10);
	}
}

void iDraw()
{
	iClear();
	if (menum == 0 && level == 0)
	{
		iShowBMP(0, 0, "menu.bmp");
		iShowBMP2(50, 780, "newgame.bmp", 255);
		iShowBMP2(50, 710, "instructions.bmp", 255);
		iShowBMP2(50, 640, "highscore.bmp", 255);
		iShowBMP2(50, 590, "about.bmp", 255);
		iShowBMP2(50, 520, "credits.bmp", 255);
		iShowBMP2(50, 450, "quit.bmp", 255);
	}
	if (menum == 2)
	{
		iShowBMP(0, 0, "menu2.bmp");
		iShowBMP2(580, 800, "back.bmp", 0);
	}
	if (menum == 3)
	{
		iShowBMP(0, 0, "menu3.bmp");
		iShowBMP2(580, 800, "back.bmp", 0);
		printFile();
		
	}
	if (menum == 4)
	{
		iShowBMP(0, 0, "menu4.bmp");
		iShowBMP2(580, 800, "back.bmp", 0);
	}
	if (menum == 5)
	{
		iShowBMP(0, 0, "menu5.bmp");
		iShowBMP2(580, 800, "back.bmp", 0);
	}
	if (level == 1)
	{
		if (sr <= 100)
		{
			background1(); 
			plane1(); 
			enemy1(); 
			showscore();
			iShowBMP2(600, 900, "menuback.bmp", 0);
			if (fire == 1)
			{ 
				showfire(); 
			}
			if (multiplayer == 1)
			{ 
				planem1(); 
				if (fire1 == 1)
				{ showfire1(); 
				}
			}
		}
		else if (sr > 100)
		{
			background1(); 
			plane1(); 
			showscore(); 
			iShowBMP2(600, 900, "menuback.bmp", 0);
			antagonistshow();
			showantagonistsbullet();//showantagonistsbullet();antagonistshow();
			if (fire == 1)
			{ 
				showfire(); 
			}
			if (multiplayer == 1)
			{ 
				planem1(); 
				if (fire1 == 1)
				{ 
					showfire1(); 
				} 
			}
		}
	}
	if (level == 2)
	{
		//background2(); plane2(); enemy2(); if (fire == 1){ showfire(); }if (multiplayer == 1){ planem2(); if (fire1 == 1){ showfire1(); } }
		if (sr <= 100)
		{
			background2(); 
			plane2(); 
			enemy2(); 
			showscore();
			iShowBMP2(600, 900, "menuback.bmp", 0);
			if (fire == 1)
			{ 
				showfire(); 
			}
			if (multiplayer == 1)
			{ 
				planem2(); 
				if (fire1 == 1)
				{ 
					showfire1(); 
				} 
			}
		}
		else if (sr >100)
		{
			background2(); 
			plane2();
			antagonistshow(); 
			showscore();
			iShowBMP2(600, 900, "menuback.bmp", 0);
			if (fire == 1)
			{ 
				showfire(); /*showantagonistsbullet(); */ 
			}
			if (multiplayer == 1)
			{ 
				planem2(); 
				if (fire1 == 1)
				{ 
					showfire1();
				}
			}
		}
	}
	if (level == 3)
	{
		background3(); 
		plane3();
		enemy3(); 
		if (fire == 1)
		{ 
			showfire(); 
		}
		if (multiplayer == 1)
		{
			planem3();
			if (fire1 == 1)
			{
				showfire1();
			}
		}
	}
	if (level == 4)
	{
		background4(); 
		plane4(); 
		enemy4(); 
		if (fire == 1)
		{ 
			showfire(); 
		}
		if (multiplayer == 1)
		{
			planem4(); 
			if (fire1 == 1)
			{
				showfire1();
			}
		}
	}
	if (level == 5)
	{
		background5();
		plane5();
		enemy5(); 
		if (fire == 1)
		{
			showfire(); 
		}
		if (multiplayer == 1)
		{
			planem5(); 
			if (fire1 == 1)
			{ 
				showfire1();
			}
		}
	}
}
void iMouseMove(int mx, int my)
{
	if ((mx>70 && mx<717) && (my>230 && my<1019))
	{
		plnmouse[level - 1].x1 = mx - 65;
		plnmouse[level - 1].y1 = my - 200;
	}
}
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (level == 0)
		{
			if (mx >= 50 && mx <= 449 && my >= 850 && my <= 903)
			{
				level = 1;
			}
			if (mx >= 50 && mx <= 349 && my >= 780 && my <= 833)
			{
				menum = 2;
			}
			if (mx >= 50 && mx <= 348 && my >= 715 && my <= 767)
			{
				menum = 3;
			}
			if (mx >= 50 && mx <= 250 && my >= 650 && my <= 710)
			{
				menum = 4;
			}
			if (mx >= 50 && mx <= 289 && my >= 605 && my <= 649)
			{
				menum = 5;
			}
			if (mx >= 50 && mx <= 185 && my >= 530 && my <= 600)
			{
				exit(0);
			}
		}
		if (menum == 2 || menum == 3 || menum == 4 || menum == 5)
		{
			if (mx >= 580 && mx <= 710 && my >= 850 && my <= 890)
			{
				menum = 0;
			}
		}
		if (level == 1 || level == 2)
		{
			if (mx >= 600 && mx <= 738 && my >= 930 && my <= 950)
			{
				fileappend(sr);
				level = 0;
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}
void iKeyboard(unsigned char key)
{
	
        if(key == '\r')
		{
			multiplayer = 1;
		}
	if(key == 'x')
	{
		
		exit(0);
	}
	if (key == 'm')
	{
		menum = 0;
	}
	if(key=='1')
	{
		level=1;
		setenemy1();
		j = 0;
	}
	if(key=='2')
	{
		bulletnumber = 0;
		fire = 0;
		fire1 = 0;
		level=2;
		setenemy2();
		j = 0;
		multiplayer = 0;
		sr = 0;
	}
	if(key=='3')
	{
		bulletnumber = 0;
		fire = 0;
		fire1 = 0;
		level=3;
		setenemy3();
		j = 0;
		multiplayer = 0;
		sr = 0;
	}
	if(key=='4')
	{
		bulletnumber = 0;
		fire = 0;
		fire1 = 0;
		level=4;
		setenemy4();
		j = 0;
		multiplayer = 0;
		sr = 0;
	}
	if(key=='5')
	{
		bulletnumber = 0;
		fire = 0;
		fire1 = 0;
		level=5;
		setenemy5();
		j = 0;
		multiplayer = 0;
		sr = 0;
	}
	if (key =='f')
	{
		bulletnumber++;
		set();
		fire = 1;
		if (bulletnumber == 1000)
		{
			bulletnumber = 0;
		}
	}
	if (key == 'l')
	{
		bulletnumber1++;
		set1();
		fire1 = 1;
		if (bulletnumber1 == 1000)
		{
			bulletnumber1 = 0;
		}
	}
}
void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_LEFT)
	{
			if(plnkey[level-1].x!=0)
			{
				plnkey[level-1].x=plnkey[level-1].x-10;
			}
	}
	if(key == GLUT_KEY_RIGHT)
	{
			if(plnkey[level-1].x<617)
			{
				plnkey[level-1].x=plnkey[level-1].x+10;
			}
	}
	if(key == GLUT_KEY_UP)
	{
       if(plnkey[level-1].y<839)
			{
				plnkey[level-1].y=plnkey[level-1].y+10;
			}
	}
	if(key == GLUT_KEY_DOWN)
	{
        if(plnkey[level-1].y!=30)
			{
				plnkey[level-1].y=plnkey[level-1].y-10;
			}
	}
	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
}
int main()
{
	iSetTimer(5, enemy1change);
	iSetTimer(7, enemy2change);
	iSetTimer(9, enemy3change);
	iSetTimer(11, enemy4change);
	//iSetTimer(13, enemy5change);
	//iSetTimer(0.1, gameoverplanekey);
	iSetTimer(10, changefire);
	iSetTimer(10, changefire1);
	iSetTimer(0.1, colissioncheak1);
	iSetTimer(0.2, colissioncheak2);
	iSetTimer(0.2, changeantagn);
	iSetTimer(10, antabullaetchange);
	//iSetTimer(0.3, colissioncheak3);
	//iSetTimer(0.4, colissioncheak4);
	//iSetTimer(0.5, colissioncheak5);
	iInitialize(767, 1019, "Fighter");
	//openfile("score.bin");
	image1 = iLoadImage("enemy1.png");
	image2 = iLoadImage("enemy2.png");
	image3 = iLoadImage("enemy3.png");
	image4 = iLoadImage("enemy4.png");
	image5 = iLoadImage("enemy5.png");
	bg1 = iLoadImage("level1 1.bmp");
	bg2 = iLoadImage("level1 1.bmp");
	bg3 = iLoadImage("level2 1.jpg");
	bg4 = iLoadImage("level2 1.jpg");
	bg5 = iLoadImage("level3.bmp");
	bg6 = iLoadImage("level3.bmp");
	bg7 = iLoadImage("level4 1.jpg");
	bg8 = iLoadImage("level4 1.jpg");
	bg9 = iLoadImage("level5 1.jpg");
	bg10 = iLoadImage("level5 1.jpg");
	shoot = iLoadImage("fire.png");
	//leser = iLoadImage("laser.png");
	ant1 = iLoadImage("anta1.gif");
	//anta[4] = iLoadImage("anta5.gif");
	//scr = iLoadImage("score.jpg");
	iStart();
	return 0;
}