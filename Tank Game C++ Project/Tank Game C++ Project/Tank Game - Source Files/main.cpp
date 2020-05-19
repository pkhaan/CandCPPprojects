#include <allegro.h>
#include <iostream>
#include <vector>
#include <fstream>
#include "initializer.h"
#include "map.h"
#include "tank.h"
#include "classes.h"
#include "info.h"
using namespace std;

    int level;
    BITMAP * bmptheme;
    BITMAP * bmpcredits;
    BITMAP * bmphighscores;
    BITMAP * bmpback;
    BITMAP * bmpplainback;
void drawmenu();
void loadscores();
void writescores(int);
int main(void)
{

   if( initializegame() == -1){
       cout << "Graphics Initialization Error";
       return -1;
   }
    int i=0,j=0,k=0;
    BITMAP* buffer = create_bitmap(screen->w,screen->h);
    BITMAP* background;
    MIDI *backsound;
    theme = "sketchy";
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0)
    {
//allegro_message(“Error initializing sound system”);
    return 1;
    }

string soundloc;
soundloc = theme + "\\backsound.wav" ;
backsound = load_midi("sketchy\\backsound.mid");
play_midi(backsound,0);



//destroy the sample
//destroy_sample(sample);
//remove the sound driver
//remove_sound();




    bmpback = load_bitmap("back.bmp",NULL);
    bmptheme = load_bitmap("theme.bmp",NULL);
    bmpcredits = load_bitmap("credits.bmp",NULL);
    bmphighscores = load_bitmap("highscores.bmp",NULL);
    bmpplainback = load_bitmap("plainback.bmp",NULL);

 level = 1;
bool over = false;
theme = "classic";
drawmenu();
while(1){


    initmap(level,theme);  // must be called earlier than inittanks
    inittanks();
    initializeinfo();
    stringstream path;
    path << theme << "\\back.bmp";
    background = load_bitmap(path.str().data(),NULL);

   //install a digital sound driver
   clear_to_color(screen,makecol(255,255,255));
    blit(background,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    drawmap(screen);
     drawtanks(screen);
   // drawvmap(screen);
    readkey();
    set_keyboard_rate(100,1);

play_sample(sndpower,255,0,1000,0);
   blit(buffer,screen,0,0,0,0,screen->w,screen->h);
   player.reset();

   try {
    while(!key[KEY_ESC]){
   //  /*

       clear_to_color(buffer,makecol(255,255,255));
          blit(background,buffer,0,0,0,0,SCREEN_W,SCREEN_H);

            movetanks();
            drawmap(buffer);
            watchbullets(buffer);
            drawinfos(buffer);
            drawtanks(buffer);

            acquire_screen();
            blit(buffer,screen,0,0,0,0,screen->w,screen->h);
            release_screen();
            clear_keybuf();
           // readkey();
            rest (10);

    }
drawmenu();

   }
   catch(game_over){
    string path;
  //  path = theme + "\\gameover.bmp";
    BITMAP * overpic;
    overpic = load_bitmap("gameover.bmp",NULL);
    blit(overpic,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    writescores(player.score);
    drawmenu();
    clear_keybuf();
    over = true;
   }
   catch(next_level){
    string path;
    path = theme + "\\levelcomplete.bmp";
    BITMAP * overpic;
    overpic = load_bitmap(path.data(),NULL);
    blit(overpic,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    rest(2000);
    readkey();
    level++;



   }

}

        return 0;
}
END_OF_MAIN();

void  drawmenu(){
    arrow itank;
    int keycounter = 0;
    int repeatrate = 20;
    bool start = false;
    BITMAP* mybuffer = create_bitmap(screen->w,screen->h);
    while(!start){
        keycounter ++;
         stretch_blit(bmpback,mybuffer,0,0,bmpback->w,bmpback->h,0,0,SCREEN_W,SCREEN_H);


        itank.draw(mybuffer);

       if(key[KEY_DOWN] && keycounter > repeatrate){
           keycounter = 0;
           itank.movedown();
        }
        if(key[KEY_UP] && keycounter > repeatrate){
            keycounter = 0;
            itank.moveup();
        }
        if(key[KEY_ENTER]){
            switch((itank.selection)){

             case 1:
             start = true;
            // loading();
          //  bool notbreak = true;

                                 blit(bmpplainback,mybuffer,0,0,0,0,SCREEN_W,SCREEN_H);
                         for(int i=0;i<120;i+=20)
                         rect(mybuffer, 200+i, 200, 220+i,220 , makecol(73,197,193));
                         textout_centre_ex(mybuffer, font, "LOADING...",
                                            250, 180,
                                            makecol(255, 175, 110), makecol(110,110,110));
                           blit(mybuffer,screen,0,0,0,0,SCREEN_W,SCREEN_H);
                           for(int i=0;i<120;i+=20)
                        {
                            rest (500);
                            //if(key[KEY_ESC]) notbreak = false;
                            rectfill(screen, 200+i, 200, 220+i, 220,makecol(73,197,193));
                        }
                        //game_play();

                                 level = 1;
                                 break;
             case 2:
             stretch_blit(bmptheme,screen,0,0,bmptheme->w,bmptheme->h,0,0,SCREEN_W,SCREEN_H);
             while(1){
                if(key[KEY_RIGHT]){
                    theme = "sketchy";
                    break;
                }
                if(key[KEY_LEFT]){
                    theme = "classic";
                    break;
                }
                rest(10);
                clear_keybuf();
            }
            break;
            case 3:
                 stretch_blit(bmphighscores,screen,0,0,bmphighscores->w,bmphighscores->h,0,0,SCREEN_W,SCREEN_H);
                 loadscores();
                 //displayscores();
                 rest(1000);
                 readkey();
            break;
            case 4:
                exit(0);
            case 5:
                stretch_blit(bmpcredits,screen,0,0,bmpcredits->w,bmpcredits->h,0,0,SCREEN_W,SCREEN_H);
                rest(1000);
                readkey();
            }
        }


          blit(mybuffer,screen,0,0,0,0,screen->w,screen->h);
    //      cout << "not reach";

         rest(10);
         clear_keybuf();


    }

        return;
}

void loadscores()
{

      char name[30];
      int score;
    int x = 100,y= 120;
    fstream file;
    file.open("scores.txt",ios::in);
     int i=0;


 while(!file.eof())
  {
      file>>name>>score;
 //  cout<<" name "<<name;
       BITMAP *tmp;
	   tmp = create_bitmap( text_length(font, name)+200, text_height(font));
	   clear_to_color( tmp , makecol( 255 , 0 , 255 ) );
   textprintf_ex(tmp, font, 0,0, makecol(0, 0, 0),-1, " %s",name);
   textprintf_right_ex(tmp, font, 200, 0, makecol(0, 0, 0),-1, " %d",score);
   masked_stretch_blit( tmp , screen , 0 , 0 , tmp -> w , tmp -> h ,  x+10 , y+20+40*i , (int)(tmp -> w * 3), (int)(tmp -> h * 3));
   destroy_bitmap( tmp );
     i++;
  }

  file.close();
 }
void writescores(int score)
{
    fstream file;
   file.open("scores.txt",ios::out|ios::app);
  // masked_blit(name,tank,0,0,16,24,name->w,name->h);
     int ascii;
     int n=0;
     long int counter=0;
//     cout << "I am called" ;
     char name[30];
    char *c = "c";
  int x = 260;
  int y = 300;
   while(!key[KEY_ENTER])
    {
        counter++;
        if(counter > 100000) counter = 0;
        if(counter > 10){
                    counter=0;
                    ascii =(readkey()+(95*257+161))/257-32;
                    BITMAP *tmp;
                    tmp = create_bitmap(text_length(font, c), text_height(font));
                    clear_to_color( tmp , makecol( 255 , 0 , 255 ) );
                    textprintf_ex(tmp, font, 0,0, makecol(255, 100, 200),-1,"%c", ascii);
                    masked_stretch_blit( tmp , screen , 0 , 0 , tmp -> w , tmp -> h ,  x+20*n , y , (int)(tmp -> w * 3), (int)(tmp -> h * 3));
                    name[n] = ascii;
                    ++n;
                    clear_keybuf();

        }else{
//        clear_keybuf();
        }
                    clear_keybuf();
        rest(10);
                  //  cout<<" "<<ascii;
    }


name[n]='\0';
file<<" "<<name<<" "<<score;
file.close();
}
