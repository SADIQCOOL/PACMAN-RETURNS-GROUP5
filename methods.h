#ifndef METHODS_H_INCLUDED
#define METHODS_H_INCLUDED

#include"Header.h"
int score;



//COLLISON BY SADIQ

void change(){
	//PACMAN MOVE BY TIMER




	if(right){
		packmanposx+=packmanspeed;




			 if (packmanposy>=83 && packmanposy<=160 && packmanposx>=340 && packmanposx<=380)
			packmanposx=340;

		else if (packmanposy>=83 && packmanposy<=160 && packmanposx>=65 && packmanposx<=97)
			packmanposx=65;



		else if (packmanposy>=188 && packmanposy<=257 && packmanposx>=110 && packmanposx<=148)
			packmanposx=110;

				else if (packmanposy>=188 && packmanposy<=257 && packmanposx>=295 && packmanposx<=335)
			packmanposx=295;

		else if (packmanposy>=282 && packmanposy<=390 && packmanposx>=295 && packmanposx<=335)
			packmanposx=295;


		else if (packmanposy>=282 && packmanposy<=390 && packmanposx>=110 && packmanposx<=149)
			packmanposx=110;




		else if( packmanposx>=70 && packmanposx<=96 && packmanposy>=190 && packmanposy<=447)
			packmanposx=70;

		else if( packmanposx>=355 && packmanposx<=380 && packmanposy>=190 && packmanposy<=447)
			packmanposx=355;


		else if (packmanposy>=234 && packmanposy<=300 && packmanposx>=150 && packmanposx<=287)
			packmanposx=150;


	}

		if(packmanposx>=390 ){

		packmanposx=390;
	}






	if(left){
		packmanposx-=packmanspeed;




		if (packmanposy>=83 && packmanposy<=160 && packmanposx>=340 && packmanposx<=380)
			packmanposx=380;

		else if (packmanposy>=83 && packmanposy<=160 && packmanposx>=65 && packmanposx<=97)
			packmanposx=97;



		else if (packmanposy>=188 && packmanposy<=257 && packmanposx>=110 && packmanposx<=148)
			packmanposx=148;

				else if (packmanposy>=188 && packmanposy<=257 && packmanposx>=295 && packmanposx<=335)
			packmanposx=335;

		else if (packmanposy>=282 && packmanposy<=390 && packmanposx>=295 && packmanposx<=335)
			packmanposx=335;


		else if (packmanposy>=282 && packmanposy<=390 && packmanposx>=110 && packmanposx<=149)
			packmanposx=149;




		else if( packmanposx>=70 && packmanposx<=96 && packmanposy>=190 && packmanposy<=447)
			packmanposx=96;

		else if( packmanposx>=355 && packmanposx<=380 && packmanposy>=190 && packmanposy<=447)
			packmanposx=380;




		else if (packmanposy>=234 && packmanposy<=300 && packmanposx>=166 && packmanposx<=287)
			packmanposx=287;




	}

	if(packmanposx<=54 ){

		packmanposx=54;
	}


	if(up){
		packmanposy+=packmanspeed;


		if( packmanposx>=160 && packmanposx<=285 && packmanposy>=170 && packmanposy<=200 )

		 packmanposy=170;

		else if( packmanposx>=160 && packmanposx<=285 && packmanposy>=370 && packmanposy<=393)
			packmanposy=370;


		else if(packmanposx>=163 && packmanposx<=293 && packmanposy>=88 && packmanposy<=118)
			packmanposy=88;



		else if( packmanposy>=35 && packmanposy<=68 && packmanposx>=260 && packmanposx<=380 )
			packmanposy=35;


		else if ( packmanposy>=35 && packmanposy<=68 && packmanposx>=74 && packmanposx<=194)
			packmanposy=35;


		else if (packmanposy>=128 && packmanposy<=156 && packmanposx>=115 && packmanposx<=190)
			packmanposy=128;

		else if (packmanposy>=128 && packmanposy<=156 && packmanposx>=267 && packmanposx<=330)
			packmanposy=128;




		else if( packmanposx>=160 && packmanposx<=280 && packmanposy>=220 && packmanposy<=300)
			packmanposy=220;



		else if( packmanposx>=250 && packmanposx<=323 && packmanposy>=420 && packmanposy<=457)
			packmanposy=420;

		else if( packmanposx>=110 && packmanposx<=177 && packmanposy>=420 && packmanposy<=457)
			packmanposy=420;

		else if( packmanposx>=66 && packmanposx<=100 && packmanposy>=420 && packmanposy<=457)
			packmanposy=420;









	}
		if(packmanposy>=473  )

		packmanposy=473;







	if(down){
		packmanposy-=packmanspeed;


		if( packmanposx>=160 && packmanposx<=285 && packmanposy>=170 && packmanposy<=200 )

		 packmanposy=200;

		else if( packmanposx>=160 && packmanposx<=285 && packmanposy>=370 && packmanposy<=393)
			packmanposy=393;



		else if(packmanposx>=163 && packmanposx<=293 && packmanposy>=88 && packmanposy<=118)
			packmanposy=118;



		else if( packmanposy>=35 && packmanposy<=68 && packmanposx>=260 && packmanposx<=380 )
			packmanposy=68;


		else if ( packmanposy>=35 && packmanposy<=68 && packmanposx>=74 && packmanposx<=194)
			packmanposy=68;




		else if (packmanposy>=128 && packmanposy<=156 && packmanposx>=115 && packmanposx<=190)
			packmanposy=156;

		else if (packmanposy>=128 && packmanposy<=156 && packmanposx>=267 && packmanposx<=330)
			packmanposy=156;



		else if( packmanposx>=250 && packmanposx<=323 && packmanposy>=420 && packmanposy<=457)
			packmanposy=457;

	else if( packmanposx>=110 && packmanposx<=177 && packmanposy>=420 && packmanposy<=457)
			packmanposy=457;

		else if( packmanposx>=66 && packmanposx<=100 && packmanposy>=420 && packmanposy<=457)
			packmanposy=457;


		else if (packmanposy>=234 && packmanposy<=300 && packmanposx>=150 && packmanposx<=287)
			packmanposy=300;




	}
		if(packmanposy<=25 )

		packmanposy=25;







		// PACMAN AND GHOST COLLISION



		if(ghost2posx>=packmanposx && ghost2posx<=packmanposx+pacmanwidth && ghost2posy>=packmanposy && ghost2posy<=packmanposy+pacmanheight)
			menu=2;
		else if(ghost1posx>=packmanposx && ghost1posx<=packmanposx+pacmanwidth && ghost1posy>=packmanposy && ghost1posy<=packmanposy+pacmanheight)
menu=2;

		else if(ghost3posx>=packmanposx && ghost3posx<=packmanposx+pacmanwidth && ghost3posy>=packmanposy && ghost3posy<=packmanposy+pacmanheight)
menu=2;

}


                                   // GHOST MOVE BY TIMER





void changeghost1(){




//BLUE GHOST 1

	if(menu==1){


	ghost1posy+=ghostspeed;


	if(ghost1posy>=465){
		ghost1posy=465;
	ghostspeed=4;
	//ghost1posy+=ghostspeed;
	ghost1posx+=ghostspeed;
	//printf("RIGHT\n");

	}



	if(ghost1posx>=390){
	ghost1posx=390;
	ghostspeed=-4;
	//ghost1posy+=ghostspeed;
	//printf("DOWN\n");

	}


	if(ghost1posy<=20)
	{

	ghost1posy=20;
	ghostspeed=-4;
	ghost1posx+=ghostspeed;
	//printf("LEFT\n");


	}



	if(ghost1posx<=50){

	ghost1posx=50;
	ghostspeed=4;
	//printf("AGAIN UP\n");

	}


//RED GHOST3

	ghost3posy+=ghost3speed;



	if(ghost3posy>=400){
		ghost3posy=400;
	ghost3speed=3;
	//ghost1posy+=ghostspeed;
	ghost3posx+=ghost3speed;
	//printf("RIGHT\n");

	}


	if(ghost3posx>=340){
	ghost3posx=340;
	ghost3speed=-3;
	//ghost1posy+=ghostspeed;
	//printf("DOWN\n");

	}



	if(ghost3posy<=70)
	{

	ghost3posy=70;
	ghost3speed=-3;
	ghost3posx+=ghost3speed;
	//printf("LEFT\n");


	}



	if(ghost3posx<=100){

	ghost3posx=100;
	ghost3speed=3;
	//printf("AGAIN UP\n");

	}



	//ORANGE GHOST 2

ghost2posy+=ghost2speed;



	if(ghost2posy>=345){
		ghost2posy=345;
	ghost2speed=2;
	//ghost1posy+=ghostspeed;
	ghost2posx+=ghost2speed;
	//printf("RIGHT\n");

	}


	if(ghost2posx>=290){
	ghost2posx=290;
	ghost2speed=-2;
	//ghost1posy+=ghostspeed;
	//printf("DOWN\n");

	}



	if(ghost2posy<=165)
	{

	ghost2posy=165;
	ghost2speed=-2;
	ghost2posx+=ghost2speed;
	//printf("LEFT\n");


	}



	if(ghost2posx<=145){

	ghost2posx=145;
	ghost2speed=2;
	//printf("AGAIN UP\n");

	}


	}


		 }







#endif // METHODS_H_INCLUDED
