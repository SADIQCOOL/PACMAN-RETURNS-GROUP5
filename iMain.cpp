#include "iGraphics.h"
#include "bitmap_loader.h"
#include "Header.h"
#include "Structure.h"
#include <iostream>
#include "methods.h"


char ar[20];

int x = 0, y = 0, r = 20;



 //Array for DOTS AND CODES

int cx[100],cy[100];

int cx1[50],cy1[50];

int cx2[10],cy2[10];


void iDraw()
{
	//place your drawing codes here
	iClear();

	                            //   MAIN MENU

	if(menu==0){



iShowBMP(0,0,background);
iSetColor(255,255,0);
iText(100,110,"<CLICK START BUTTON TO START THE GAME>");
iFilledRectangle(150,250,200,50);
iSetColor(0,0,0);
iText(210,270,"START",GLUT_BITMAP_TIMES_ROMAN_24);



iSetColor(255,255,0);
iFilledRectangle(150,190,200,50);
iSetColor(0,0,0);
iText(210,210,"Credit",GLUT_BITMAP_TIMES_ROMAN_24);



iSetColor(255,255,0);
iFilledRectangle(150,130,200,50);
iSetColor(0,0,0);
iText(210,150,"HighScore",GLUT_BITMAP_TIMES_ROMAN_24);



}                               //   STARTING GAME
	                 

	if(menu==1){



	iShowImage(0,0,screenwidth,screenheigth,maze);


	sprintf(ar,"%d",score);
	iSetColor(255,255,255);
	iText(100,490,ar,GLUT_BITMAP_TIMES_ROMAN_24);


	//GHOST 1 BLUE
	GHOST a(30,30,iLoadImage("images//ghost1.png"));
iShowImage(ghost1posx,ghost1posy,a.length,a.height,a.image);

//GHOST 2
GHOST b(30,30,iLoadImage("images//ghost2.png"));
iShowImage(ghost2posx,ghost2posy,b.length,b.height,b.image);


//RED GHOST 3
GHOST c(30,30,iLoadImage("images//ghost3.png"));
iShowImage(ghost3posx,ghost3posy,c.length,c.height,c.image);






iSetColor(255,255,255);




		         // DOTS BY NAHIAN

//Bottom 1st row


    	cx[0]=86; cy[0] = 78;
	    cx[1]=126; cy[1] = 78;
	    cx[2]=166; cy[2] = 78;
	    cx[3]=206; cy[3] = 78;
	    cx[4]=246; cy[4] = 78;
	    cx[5]=286; cy[5] = 78;
	    cx[6]=326; cy[6] = 78;
	    cx[7]=366; cy[7] = 78;

//Bottom 2nd row
	    cx[9]=86; cy[9] = 35;
	    cx[10]=126; cy[10] = 35;
	    cx[11]=166; cy[11] = 35;
	    cx[12]=206; cy[12] = 35;
	    cx[13]=246; cy[13] = 35;
        cx[14]=286; cy[14] = 35;
	    cx[15]=326; cy[15] = 35;
	    cx[16]=366; cy[16] = 35;


//Top row

	    cx[18]=106; cy[18] = 477;
	    cx[19]=146; cy[19] = 477;
	    cx[20]=186; cy[20] = 477;
	    cx[21]=226; cy[21] = 477;
	    cx[22]=266; cy[22] = 477;
	    cx[23]=306; cy[23] = 477;
	    cx[24]=346; cy[24] = 477;
	    cx[25]=386; cy[25] = 477;


//RIGHT SIDE
   	    cx[26]=406; cy[26] = 37;
	    cx[27]=406; cy[27] = 77;
	    cx[28]=406; cy[28] = 117;
	    cx[29]=406; cy[29] = 157;
	    cx[30]=406; cy[30] = 197;
	    cx[31]=406; cy[31] = 237;
	    cx[32]=406; cy[32] = 277;
	    cx[33]=406; cy[33] = 317;
	    cx[34]=406; cy[34] = 357;
	    cx[35]=406; cy[35] = 397;
	    cx[36]=406; cy[36] = 437;
	    cx[37]=406; cy[37] = 477;


//LEFT SIDE
	    cx[38]=66; cy[38] = 37;
	    cx[39]=66; cy[39] = 77;
	    cx[40]=66; cy[40] = 117;
		cx[41]=66; cy[41] = 157;
	    cx[42]=66; cy[42] = 197;
	    cx[43]=66; cy[43] = 237;
	    cx[44]=66; cy[44] = 277;
		cx[45]=66; cy[45] = 317;
	    cx[46]=66; cy[46] = 357;
		cx[47]=66; cy[47] = 397;
		cx[48]=66; cy[48] = 437;
		cx[49]=66; cy[49] = 477;


//LEFT SIDE SPECIAL DOT
		cx1[0]=115; cy1[0]=118;
		cx1[1]=115; cy1[1]=153;
		cx1[2]=115; cy1[2]=188;
		cx1[3]=115; cy1[3]=223;
		cx1[4]=115; cy1[4]=258;
		cx1[5]=115; cy1[5]=293;
		cx1[6]=115; cy1[6]=328;
		cx1[7]=115; cy1[7]=363;
		cx1[8]=115; cy1[8]=398;
		cx1[9]=115; cy1[9]=433;

//RIGHT SIDE SPECIAL DOT
		cx1[10]=351; cy1[10]=118;
		cx1[11]=351; cy1[11]=153;
		cx1[12]=351; cy1[12]=188;
		cx1[13]=351; cy1[13]=223;
		cx1[14]=351; cy1[14]=258;
		cx1[15]=351; cy1[15]=293;
		cx1[16]=351; cy1[16]=328;
		cx1[17]=351; cy1[17]=363;
		cx1[18]=351; cy1[18]=398;
		cx1[19]=351; cy1[19]=433;
//SUPER DOT
		cx2[1]=180; cy2[1]=318;
		cx2[2]=285; cy2[2]=318;

//ANOTHER METHOD


		for(int i=0;i<50;i++){
			if(show[i]){
				iSetColor(255,255,0);
				iFilledCircle(cx[i],cy[i],4,100);
		      }
		}

		for(int i=0;i<20;i++){
			if(show1[i]){
				iSetColor(255,28,28);
				iFilledCircle(cx1[i],cy1[i],4,100);
		      }
		}
		for(int i=0;i<3;i++){
			if(show2[i]){
				iSetColor(0,255,255);
				iFilledCircle(cx2[i],cy2[i],5,100);
		      }
		}




//for bottom 1st row
for(int i=77,j=0;i<=358&&j<9;i+=40,j++){
	if(packmanposx>=i&&packmanposx<=i+10&&packmanposy>=66&&packmanposy<=85){
		show[j]=false;
		score+=100;
	 }
	}
//for bottom 2nd row
for(int i=77,j=9;i<=358&&j<=17;i+=40,j++){
	if(packmanposx>=i&&packmanposx<=i+10&&packmanposy>=20&&packmanposy<=40){
		show[j]=false;
		score+=100;
	 }
	}
//for left column
for(int i=30,j=38;i<=500&&j<50;i+=40,j++){
	if(packmanposy>=i&&packmanposy<=i+10&&packmanposx>=50&&packmanposx<=75){
		show[j]=false;
		score+=100;
	 }
	}


//for right column
for(int i=30,j=26;i<=500&&j<38;i+=40,j++){
	if(packmanposy>=i&&packmanposy<=i+10&&packmanposx>=385&&packmanposx<=415){
		show[j]=false;
		score+=100;
	 }
	}


//for top row
for(int i=106,j=18;i<=400&&j<26;i+=40,j++){
	if(packmanposx>=i&&packmanposx<=i+5&&packmanposy>=455&&packmanposy<=490){
		show[j]=false;
		score+=100;
	 }
	}
//for left side special dot
for(int i=110,j=0;i<=450&&j<=9;i+=35,j++){
	if(packmanposy>=i&&packmanposy<=i+10&&packmanposx>=95&&packmanposx<=120){
		show1[j]=false;
		score+=50;
	 }
	}
//for right side special dot
for(int i=110,j=10;i<=450&&j<=19;i+=35,j++){
	if(packmanposy>=i&&packmanposy<=i+10&&packmanposx>=330&&packmanposx<=355){
		show1[j]=false;
		score+=50;
	 }
	}
//for super dot
for(int i=170,j=1;i<=295&&j<=2;i+=105,j++){
	if(packmanposx>=i&&packmanposx<=i+10&&packmanposy>=300&&packmanposy<=330){
		show2[j]=false;
		score+=400;
	 }

}

	if(stop==1){


	}
   //PACMAN MOVE,MAZE AND GHOST MOVE AND Collison by SADIQ

if(right)
{
	//stop==1;



iShowImage(packmanposx,packmanposy,pacmanwidth,pacmanheight,pacman);

}
	if(left){
		iShowImage(packmanposx,packmanposy,pacmanwidth,pacmanheight,pacmanrotateleft);


	}

	if(up){

		iShowImage(packmanposx,packmanposy,pacmanwidth,pacmanheight,pacmanrotateup);

	}

	if(down){
		iShowImage(packmanposx,packmanposy,pacmanwidth,pacmanheight,pacmanrotatedown);

	}

	}




	                                                  //   GAMEOVER

	if(menu==2){

	  iShowImage(0,0,screenwidth,screenheigth,gameover);
	}

	                                             // CREDIT


		if(menu==3){



			iShowImage(0,0,screenwidth,screenheigth,created);

				iShowImage(54,477,40,40,backButton);



}

		if(menu==4){}






}

void iPassiveMouse(int x, int y)
{
	;
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);

		if(mx>=150 && mx<=350 && my>=250 && my>=250 && my<=300)


			menu=1;


		if(mx>=150 && mx<=350  && my>=190 && my<=230)


			menu=3;


		if(mx>=150 && mx<=350  && my>=133 && my<=183)


			menu=4;


		if(mx>=66 && mx<=95 && my>=477 && my<=505)
			menu=0;



	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		//x -= 10;
		//y -= 10;

	}
}


/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if(key == 'a')
	{
		packmanposx-=10;




	}

		if(key == 'd')
	{
		packmanposx+=10;

	}
			if(key == 'w')
	{
		packmanposy+=10;

	}
				if(key == 's')
	{
		packmanposy-=10;

	}

		if(key==' ')
		{


		}

	//place your codes for other keys here
}



void iSpecialKeyboard(unsigned char key)
{

	if(key==GLUT_KEY_RIGHT){
		//packmanposx+=7;


	right = true;
	left = false;
	up = false;
	down = false;

	//GHOST




	}

	if(key==GLUT_KEY_LEFT){


		//packmanposx-=7;
		right = false;
	left = true;
	up =false;
	down = false;

	}
	if(key==GLUT_KEY_UP){
		//packmanposy+=7;
		up = true;
	down = false;
	right = false;
	left = false;
	}

	if(key==GLUT_KEY_DOWN){
		//packmanposy-=7;
		up= false;
	down= true;
	right = false;
	left = false;



	}


	if (key == GLUT_KEY_END)
	{

		exit(0);
	}
	//place your codes for other keys here
}






                                      //COLLISON BY SADIQ

void change();


                                     //GHOST Move with Collison maze

void changeghost1();







int main()


    {
		memset(show,true,sizeof(show));
		memset(show1,true,sizeof(show1));
		memset(show2,true,sizeof(show2));

	//place your own initialization codes here.


		                                     // timer for ghost

	iSetTimer(2 ,change);

	                                                 // timer for ghost move
	iSetTimer(6,changeghost1);



	                                              //           MUSIC



	if(musicOn)
		//PlaySound("music\\Intro.wav",NULL,SND_LOOP | SND_ASYNC);
		PlaySound("music\\Intro.wav",NULL,SND_ASYNC);


	iInitialize(screenwidth,screenheigth, "SADIQ");


	maze = iLoadImage("images\\maze96.png");
	pacman=iLoadImage("images\\newpacman.png");
	pacmanrotateleft=iLoadImage("images\\newpacmanrotateleft.png");
	pacmanrotateup=iLoadImage("images\\newpacmanrotateup.png");
	pacmanrotatedown=iLoadImage("images\\newpacmanrotatedown.png");

	gameover=iLoadImage("images\\gameOver3.png");
	created=iLoadImage("images\\created.png");


	backButton=iLoadImage("images\\Slide1.png");

	iStart(); // it will start drawing

	return 0;

}

