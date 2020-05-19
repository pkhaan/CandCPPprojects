#include <allegro.h>
//#include "initializer.h"
#include<vector>
#include "classes.h"
//#include "tank.h"
#include "map.h"
#include "powers.h"
using namespace std;
const int MAXBUL = 100;
int bullcount;
//const int brickwt;
bool isclearsameline(pos p1, pos p2);
ptank player;
bool isbotempty(pos p);
bool fired;
volatile int bultime;
vector<c1tank *> bot;
vector<eyecandy *> candies;
vector<power*> powers;
direction getdirection(pos destination,pos source);
vector<c1tank *>::iterator reachedbot(objects *,vector<c1tank*>::iterator me);
int getmaxposible(int &x,int &y,tank tnk, direction d);
vector<bullet *> buls;
bool forbiden (objects* obj, vector<c1tank*>::iterator me);
direction reversedir(direction d);
direction exceptof(direction d1, direction d2, direction d3);
direction exceptof(direction d1, direction d2);
int reversedir(int d);
direction makedir(int t);
int sameline(pos,pos);
power* createrandompower();
//volatile bool bultime;
//<vector>
int botnum = 5;
void newbul(void){
 bultime*=-1;
}
END_OF_FUNCTION(newbul);

LOCK_VARIABLE(bultime);

using namespace std;

// /*
void inittanks2()
{

    stringstream pathname;
    BITMAP* orgpath;
    BITMAP* path;
    int level = 1;
    path = create_bitmap(screen->w,screen->h);
    pathname << "path" << level << ".bmp" ;
    bot.clear();
    candies.clear();
    powers.clear();
    orgpath = load_bitmap(pathname.str().data(),NULL);
    stretch_blit(orgpath,path,0,0,orgpath->w,orgpath->h,0,0,screen->w,screen->h);
int x=0,y=0;
    for (int r=0;r < rows; r++)
  // /*
    {
     for(int c=0;c<columns;c++){
            if (getr(getpixel(path,x,y))==50){
                player.loadtank();
                player.setxy(x,y);
                player.settile(r,c);
               // botmap[r][c]=1;
                player.setstep(tilewidth);
            }else if(getb(getpixel(path,x,y)) == 100){
                c1tank * c1 = new c1tank;
                c1->loadtank();
                c1->setxy(x,y);
                c1->settile(r,c);
                c1->setstep(tilewidth);
                bot.push_back(c1);
               // botmap[r][c]=1;


            }else{
               // botmap[r][c]=0;
            }
                x+=tilewidth;

        }
            x=0;
            y+=tileheight;
    } //
  //  blit(brick,map,0,0,x,y,brick->w,brick->h);
 //   blit(brick,map,0,0,x+brick->w,y+brick->h,brick->w,brick->h);
      return;
}
// */


void inittanks(){
    player.loadtank();
    player.setxy(120,60);
   /* for (int i = 0;i < botnum ; i ++){
        c1tank* t = new c1tank;
        t->setrandompos();
        t->loadtank();
        bot.push_back(t);
    }
    */
    inittanks2();

}

void drawtanks(BITMAP* bmp){
    player.draw(bmp);
    for(vector<c1tank *>::iterator it2 = bot.begin(); it2 != bot.end() ; it2 ++){
        (*it2)->draw(bmp);


    }
}

void watchbullets(BITMAP * buffer)
{
 int i=0;
 // manage eyecandies
 for(vector<eyecandy*>::iterator canit = candies.begin(); canit < candies.end(); canit++)
    {
        (*canit)->showtimecount -=1;
        if((*canit)->showtimecount > 0){
        (*canit)->draw(buffer);
        }else{
            delete (*canit);
            candies.erase(canit);
        }
    }
//
// draw powers
 for(vector<power*>::iterator powit = powers.begin(); powit < powers.end(); powit++)
 {

    (*powit)->draw(buffer);
}
//


   for(vector<bullet*>::iterator bulit = buls.begin(); bulit < buls.end(); bulit++)
    {
        bool erased = false;
        if(player.checkcol(*bulit) && (*bulit)->source != &player){
  // display a hit symbol when the player is hit
            eyecandy* c = new tankhit;
            c->setxy(player.loc.x,player.loc.y);
            candies.push_back(c);
////////////////////////////////////////

        player.score-=10;

        if((player.health -= (*bulit)->attack_power) < 0){
           player.score -=100;
          player.life--;
          player.health = player.hitpoints;
        }
        if(player.life == 0){
            throw game_over();
            alert("you are dead", "game over", "you lost", "I accept (A)", " I want to play more", 13,65);
        }
            if(--((*bulit)->penetration_count) == 0) { buls.erase(bulit); continue;}
        }
       (*bulit)->move();
       int r=(*bulit)->gettile().y;
       int c=(*bulit)->gettile().x;
       int addc = (*bulit)->velx == -1 ? 1 : 0;
       int addr = (*bulit)->vely == -1 ? 1 : 0;
       if((r - addr) < 0 || (r - addr) >= rows || (c-addc) < 0 || (c-addc) >= columns ) {
            buls.erase(bulit);
            continue;
       }
       if(vmap[r - addr][c-addc]==brickwt){


           objmap[r-addr][c-addc] = NULL;
           vmap[r - addr][c-addc]=emptywt;
// display a hit symbol when the brick is hit
            eyecandy* eye = new brickhit;
            eye->setxy((c-addc)*tilewidth,(r- addr)*tileheight);
            candies.push_back(eye);
//
// create a random power at the place
            power * p = createrandompower();
            if(p != NULL){
                p->setxy((c-addc)*tilewidth,(r- addr)*tileheight);
                p->curtile.y = r - addr;
                p->curtile.x = c - addc;
                powers.push_back(p);
            }
////////////////////////////////////////
              if(--((*bulit)->penetration_count) == 0) { buls.erase(bulit); continue;}

        }else if(vmap[r - addr][c-addc]==stonewt){

 // delete stone if enough hits
 /*
        objmap[r-addr][c-addc]->hitpoints -= (*bulit)->attack_power;
        if (objmap[r-addr][c-addc]->hitpoints < 0){
           objmap[r-addr][c-addc] = NULL;
           vmap[r - addr][c-addc] = emptywt;

        }
*/

// display a hit symbol when the stone is hit
// make correction to display hit symbol in case of stone
            addc = (*bulit)->velx == 1 ? 1 : 0;
            addr = (*bulit)->vely == 1 ? 1 : 0;
//
            eyecandy* eye = new stonehit;
            eye->setxy((c-addc)*tilewidth,(r - addr)*tileheight);
            candies.push_back(eye);

            if(--((*bulit)->penetration_count) == 0) { buls.erase(bulit); continue;}
////////////////////////////////////////

        }else{

              for ( vector<c1tank *>::iterator botit = bot.begin(); botit < bot.end(); botit++){
                    if( (*botit)->checkcol(*bulit) && dynamic_cast<c1tank*>((*bulit)->source) != (*botit)){   // if it2 and bulit same tile && it2 isn't parent of bulit
                            (*bulit)->penetration_count-=1;
                            (*botit)->health -= (*bulit)->attack_power;
                            if((*bulit)->source == &player) player.score +=10;
                            // display a hit symbol when the player is hit
                            eyecandy* eye = new tankhit;
                            eye->setxy((*botit)->loc.x,(*botit)->loc.y);

                            candies.push_back(eye);
                            ////////////////////////////////////////



                        if((*bulit)->penetration_count == 0){
                             buls.erase(bulit);
                             erased = true;
                        }
                        if((*botit)->health < 0)
                        {
                         //   cout << "Problem this";
                            //delete (*botit);
                          //  botmap[(*botit)->curtile.y][(*botit)->curtile.x] = 0;
                            bot.erase(botit);
                            player.score+=200;
                            continue;
                        }

                    }else{


                            // avoid the bullet if it is in the same line

                                    int totalwt = sameline((*bulit)->curtile, (*botit)->curtile);  // find out the sum of objects

                                    if( totalwt != -1 && totalwt % brickwt <= 6*emptywt && (*bulit)->source != (*botit)){  // bullet in same line && obstacle not heavy && don't try to escape own's bullet

                                            direction buldir = getdirection((*bulit)->curtile,(*botit)->curtile);
                                           // cout << "Tank:" << buldir << "  ";
                                           // cout << "Bullet:" << (*bulit)->dir << "  ";
                                            if(buldir == reversedir((*bulit)->dir)){

                                                    direction escapedir = exceptof(buldir,reversedir(buldir));
                                                  //  cout << "Escape:" << escapedir << "    ";
                                                    (*botit)->escape(escapedir);
                                                    (*botit)->clearpath();

                                            }

                                    }

                            /////////////////////////////////////////////////////

                           if (!erased) (*bulit)->draw(buffer);

                  }

              }

        }

    }
}
void drawbullets(BITMAP* buffer){
}
void movetanks()
{

     int r,j;
if(bot.size() ==0) throw next_level();
     if(bot.size() !=0){

     for (vector<c1tank *>::iterator botit = bot.begin(); botit < bot.end(); botit++){
        bool dontmove = false;

    for(vector<power*>::iterator powit = powers.begin(); powit < powers.end(); powit++)
    {

        if((*powit)->curtile == (*botit)->curtile) {
             (*powit)->applypower(*botit);
             delete (*powit);
             powers.erase(powit);
        }
        else if ((*powit)->curtile == player.curtile){
             (*powit)->applypower(&player);
             player.score+=100;
             delete (*powit);
              powers.erase(powit);
        }



    }


        if((*botit)->mode==RANDOM && !(*botit)->moving)
        {
            (*botit)->moverandom();

        }else if((*botit)->mode==ASTAR){

                if(!(*botit)->moving){



                    bool hung = false;
                    (*botit)->targettile = player.curtile;
                    try{
                        if((*botit)->movecount==5 || (*botit)->path.size() == 0){ // generate newpath every 5 step;
                        (*botit)->generatepath();
                           (*botit)->movecount=0;
                        }
                    }
                    catch(c1tank::hung){
                       hung = true;
                    }

/////////////// shoot the player if at same level
                    int totalwt = sameline((*botit)->curtile, player.curtile);  // find out the sum of objects
                    if(totalwt == -1) totalwt = sameline((*botit)->curtile, player.destile);  // if player is not in same line, check if the player is coming at the same line.

                    if( totalwt != -1 && totalwt % waterwt <= 4*brickwt){
                      if(isclearsameline((*botit)->curtile, player.curtile)){ // CHECK IF OTHER COMPUTER PLAYER ARE ON THE WAY
                       //  cout << "bot: " << (*botit) << " ";
                         dontmove = true;

                        if((*botit)->bultime==1){
                            (*botit)->turn(getdirection(player.curtile,(*botit)->curtile));
                               (*botit)->bultime=(*botit)->bulrate;
                                bullet *b = new bullet;
                                 b->load();
                                (*botit)->fire(b);
                                 buls.push_back(b);


                        }

                      }

///////////////////////////////////////////////////////////
                    }
                    if(!dontmove) {  // not move when don't move flag is on

                            if(hung) {
                               (*botit)->moverandom();
                           //    cout << " random ";
                                    bullet *b = new bullet;
                                    b->load();
                                    (*botit)->fire(b);
                                     buls.push_back(b);


                            }
                            else {
                              //  cout << " ***** ";

                               bool avoid_current_des = false;
                                    pos des = (*botit)->path.top();
                                    if(des == player.curtile) avoid_current_des = true;

                                        for(vector<bullet*>::iterator bulit = buls.begin(); bulit < buls.end(); bulit++)
                                        {
                                             int totalwt = sameline((*bulit)->curtile, des);  // find out the sum of objects

                                                if( totalwt != -1 && totalwt % waterwt <= 20*emptywt && (*bulit)->source != (*botit)){  // bullet in same line && obstacle not heavy && don't try to escape own's bullet
                                                    direction buldir = getdirection((*bulit)->curtile,des);

                                                  //  cout << "Tank:" << buldir << "  ";
                                                 //   cout << "Bullet:" << (*bulit)->dir << "  ";
                                                    if(buldir == reversedir((*bulit)->dir)){

                                                           avoid_current_des = true;
                                                    }

                                                }


                                        }

                                if(avoid_current_des == false && isbotempty(des)){
                                 (*botit)->destile = (*botit)->path.top();
                                (*botit)->turn(getdirection((*botit)->destile,(*botit)->curtile));
                                if(vmap[(*botit)->destile.y][(*botit)->destile.x] == brickwt){
                                    bullet *b = new bullet;
                                     b->load();
                                    (*botit)->fire(b);
                                     buls.push_back(b);
                                }
                                (*botit)->path.pop();
                                (*botit)->moving = true;
                                }else{


                                }



                            }
                    }


               (*botit)->movecount++;

                }

     }

       (*botit)->finemove();
      if((*botit)->bultime!=1) (*botit)->bultime--;

    }
}

player.finemove();
if(player.bultime!=1) player.bultime--;
  if(key[KEY_LEFT])
  {

         const int r=player.gettile().y;
        const  int c=player.gettile().x - 1;
         player.turnleft();
          if(r <rows && r >= 0 && c < columns && c>=0){
         if(isbotempty(pos(r,c)) && vmap[r][c] == emptywt){

                player.moveleft();
        }
          }


  } else
    if(key[KEY_RIGHT]){


            const int r=player.gettile().y;
             const int c=player.gettile().x + 1;
            player.turnright();
             if(r <rows && r >= 0 && c < columns && c>=0){
            if(isbotempty(pos(r,c)) && vmap[r][c] == emptywt){

                player.moveright();
            }
             }


    } else
    if(key[KEY_UP] ){


            const int r=player.gettile().y - 1;
             const int c=player.gettile().x;
            player.turnup();
             if(r <rows && r >= 0 && c < columns && c>=0){
             if(isbotempty(pos(r,c)) && vmap[r][c] == emptywt){

                 player.moveup();
            }
             }


    } else
    if(key[KEY_DOWN]){

            player.turndown();
            const int r=player.gettile().y + 1;
            const int c=player.gettile().x;
            if(r <rows && r >= 0 && c < columns && c>=0){
            if(isbotempty(pos(r,c)) && vmap[r][c] == emptywt){

                player.movedown();
            }
            }


    }
    if(key[KEY_SPACE]){

            fired=true;
            if(player.bultime == 1  )  {
                player.bultime=player.bulrate;

                bullet *b = new bullet;
                b->load();
                player.fire(b);
                buls.push_back(b);


           }

        }
}
int sameline(pos p1, pos p2){

    if( p1.x != p2.x && p2.y != p1.y ) return -1;
    int total=0;

    if(p1.x == p2.x){
        int increment = p1.y < p2.y ? 1 : -1;
     for(int i=p1.y; i != p2.y ; i += increment){

      total += vmap[i][p1.x];
     }

    }else if(p1.y == p2.y){
        int increment = p1.x < p2.x ? 1 : -1;
        for(int i=p1.x; i != p2.x ; i += increment){

        total += vmap[p1.y][i];
     }

    }
    return total;

}
bool isclearsameline(pos p1, pos p2){

    if( p1.x != p2.x && p2.y != p1.y ) return false;
    int total=0;

    if(p1.x == p2.x){
        int increment = p1.y < p2.y ? 1 : -1;
     for(int i=p1.y+increment; i != p2.y ; i += increment){
       for (vector<c1tank *>::iterator botit = bot.begin(); botit < bot.end(); botit++){
           pos position(i,p1.x);
           if((*botit)->curtile == position || (*botit)->destile == position) return false;
       }

     }

    }else if(p1.y == p2.y){
        int increment = p1.x < p2.x ? 1 : -1;
        for(int i=p1.x + increment; i != p2.x ; i += increment){
            for (vector<c1tank *>::iterator botit = bot.begin(); botit < bot.end(); botit++){
                pos position(p1.y,i);
               if((*botit)->curtile == position || (*botit)->destile == position) return false;
            }
       }

    }
    return true;
}


vector<c1tank*>::iterator reachedbot(objects* obj,vector<c1tank*>::iterator me){
    vector<c1tank *>::iterator it = bot.begin();
    for (int i=0; it<bot.end();it++,i++)
        if ((*it)->checkcol(obj) && it != me) return it;
         return it;
}

//bool forbiden (objects* obj, vector<c1tank*>::iterator botid)
//{
//if( ( reachedwall(obj)!= objmap.end() ) || obj->atedge() || obj->checkcol(&player) || (reachedbot(obj,botid) != bot.end()) ) return true;
//return false;
//}
direction reversedir(direction d){
    switch(d){
    case LEFT:
    return RIGHT;
    case RIGHT:
    return LEFT;
    case UP:
    return DOWN;
    case DOWN:
    return UP;
    }
    return DOWN;
}
int reversedir(int d){
    switch(d){
    case 0:
    return 1;
    case 1:
    return 0;
    case 2:
    return 3;
    case 3:
    return 2;
    }
    return 0;
}


direction makedir(int t){
    if(t==1) return LEFT;
    if(t==2) return RIGHT;
    if(t==3) return UP;
    if(t==4) return DOWN;
}
direction getdirection(pos destination,pos source){
    if(destination.x > source.x) return RIGHT;
    if(destination.y > source.y) return DOWN;
     if(destination.x < source.x) return LEFT;
      if(destination.y < source.y) return UP;
      return LEFT;
}
/*int getmaxposible(int &x,int &y,c1tank tnk, direction d){
    tnk.loadtank();
     while(reachedwall(&tnk) == objmap.end()){
         tnk.move(d);
     }
     x=tnk.loc.x;
     y=tnk.loc.y;
     return 0;
}
*/
bool isbotempty(pos p){
  //  if (vmap[p.y][p.x] != emptywt) return false;
    for(vector<c1tank *>::iterator it2 = bot.begin(); it2 != bot.end() ; it2 ++){
        if((*it2)->curtile ==p || (*it2)->destile ==p) return false;
    }
    if(player.curtile ==p || player.destile == p) return false;

    return true;
}

direction exceptof(direction d1, direction d2)
{
    if (d2 != reversedir(d1))
    {
        return reversedir(d1);
    }else{
        switch(d1){
            case LEFT:
            return UP;
            case UP:
            return LEFT;
            case DOWN:
            return RIGHT;
            case RIGHT:
            return DOWN;
        }
    }

}
direction exceptof(direction d1, direction d2, direction d3)
{
    if (d1 != LEFT && d2 != LEFT && d3 != LEFT) return LEFT;
    if (d1 != RIGHT && d2 != RIGHT && d3 != RIGHT) return RIGHT;
    if (d1 != UP && d2 != UP && d3 != UP) return UP;
    if (d1 != DOWN && d2 != DOWN && d3 != DOWN) return DOWN;

}

power* createrandompower(){
    power* p;
    int r = rand() % 50;
   // bulfast, bulrate, bulheavy,pierce,tankfast
    switch(r){
        case 1:
         p = new bulrate;
         return p;
         case 2:
         p = new bulfast;
         return p;
         case 3:
         p = new bulheavy;
         return p;
         case 4:
         p = new pierce;
         return p;
         case 5:
         p = new tankfast;
         return p;
         default:
         return NULL;
   }
    return NULL;
}


