#include "classes.h"
#include "tank.h"
#include "initializer.h"
#include "map.h"


BITMAP *playerpic, *healthpic, *linepic, *scorepic;

int infox =0 ,infoy = 0;
void initializeinfo(){
    infoy = rows*tilewidth;
    infox = 0;
    string path;

    path = theme + "\\ptank(5).bmp" ;
    playerpic = load_bitmap(path.data(),NULL);
    path = theme + "\\health.bmp" ;
    healthpic = load_bitmap(path.data(),NULL);
    path = theme + "\\line.bmp" ;
    linepic = load_bitmap(path.data(),NULL);
    path = theme + "\\score.bmp" ;
    scorepic = load_bitmap(path.data(),NULL);

}


void drawinfos(BITMAP * bmp){
    for(int i=0;i<SCREEN_W;i+=linepic->w){
    masked_blit(linepic,bmp,0,0,infox + i,infoy,linepic->w,linepic->h);
    }
    for(int i=0;i<player.life;i++)
    {
     masked_blit(playerpic,bmp,0,0,infox + i*(player.width + 10),infoy+10,player.width,player.height);
    }
   // cout << "Health" << player.health << " hit" << player.hitpoints;
   for(int i=0;i<player.health;i++){
    masked_blit(healthpic,bmp,0,0,infox + i*(healthpic->w),infoy + player.height + 7,healthpic->w,healthpic->h);
  }
  masked_blit(scorepic,bmp,0,0,infox + 500 ,infoy ,scorepic->w,scorepic->h);
  textprintf_ex(bmp, font, infox + 560,infoy+12, makecol(0, 0, 0),-1," %d", player.score);



}

