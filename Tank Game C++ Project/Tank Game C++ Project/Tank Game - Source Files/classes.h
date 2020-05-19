#ifndef classes_h
#define classes_h 1
#include <allegro.h>
#include <sstream>
#include <iostream>
#include <stack>
#include <cmath>
#include "map.h"

using namespace std;
class power;
/*
extern int tilewidth;
extern int tileheight;
extern int columns;
extern int rows;
*/
class game_over{};
class next_level{};
struct pos{
    int x;
    int y;
    pos(){};
    pos(int i,int j):x(j),y(i){}
    bool operator !=(pos & p){
        if(p.x != x || p.y !=y) return true;
        return false;
    }
    bool operator ==(pos & p){
        if(p.x == x && p.y == y) return true;
        return false;
    }
};
enum direction{
    NUL = 0,
    LEFT = 1,
    RIGHT = 2,
    UP = 3,
    DOWN = 4

};
enum behaviour{RANDOM, ASTAR, FLEE, AMBUSH};
class tank;
int getmaxposible(int &,int &,tank , direction );
enum objtype {BRICK, STONE, WATER};

//using namespace std;
class objects{
    public:
    int i,j;
    pos loc;
    objtype type;
    int width;
    int height;
    int rotation;
    int drawmargin;
    int totalimages;
    pos curtile;
   // BITMAP* rotpic;
    int health;
    int hitpoints;
    stringstream paths[10];
    string basicname;
    stringstream basicpath;
    BITMAP* pic;
    BITMAP* pics[10];

    public:
     void setxy(int inpx,int inpy){
        loc.x = inpx;
        loc.y = inpy;
    }
    objects (){
        curtile.x = 0;
        curtile.y = 0;
        loc.x = 0;
        loc.y = 0;
        totalimages=1;
        i=20;
        rotation = 0;
        type = BRICK;
        drawmargin =0;
        hitpoints = 100;
        health = hitpoints;
    }
    objtype gettype()
    {
        return type;
    }
    void highlight()
    {
        line(pic,0,0,width,height,makecol(200,200,200));
    }
    void draw(BITMAP * bmp){
        //pathname << basicpath << "(" << (hitpoints / (health+1)) << ")" ;
        // masked_blit(pic,bmp,0,0,loc.x + drawmargin,loc.y + drawmargin,width,height);
       // cout << "hitpoints/health" << hitpoints/(health)-1;
       int picx = (hitpoints - health)*totalimages/hitpoints;
       if (picx >= totalimages) picx = totalimages - 1;
       if (totalimages == 1) { picx = 0;}
       if(!pics[picx]== NULL){

         rotate_sprite(bmp, pics[picx], loc.x + drawmargin, loc.y + drawmargin,  ftofix(float(rotation)*256/360));
       }


    }
    int getwidth() { return width; }
    int getheight(){ return height;}
    bool atedge(){
        if (loc.x < 0 || loc.x + width >= columns*tilewidth || loc.y < 0 || loc.y + height >= rows*tileheight ) return true;
        return false;

    }
    pos getpos(){ return loc;}
    bool checkcol(objects *o){
        if( (o->loc.x + o->width) <= (loc.x + width) && (o->loc.x + o->width) >= loc.x && o->loc.y >= loc.y && o->loc.y <= (loc.y + height) ) return true; //Top-right corner of o
        if( o->loc.x <= (loc.x+width) && o->loc.x >= loc.x && o->loc.y >= loc.y && o->loc.y <= (loc.y + height) ) return true;  //Top-left corner of o
        if ( o->loc.x <= (loc.x+width) && o->loc.x >= loc.x && (o->loc.y + o->height) >= loc.y && (o->loc.y + o->height) <= (loc.y + height) ) return true; // bottom left
        if( (o->loc.x + o->width) <= (loc.x+width) && (o->loc.x + o->width) >= loc.x && (o->loc.y + o->height) >= loc.y && (o->loc.y + o->height) <= (loc.y + height) )return true;// bottom right

        if( (loc.x + width) <= (o->loc.x + o->width) && (loc.x + width) >=o->loc.x && loc.y >= o->loc.y && loc.y <= (o->loc.y + o->height) ) return true; //Top-right corner of o
        if( loc.x<= (o->loc.x+o->width) && loc.x>=o->loc.x&& loc.y >= o->loc.y && loc.y <= (o->loc.y + o->height) ) return true;  //Top-left corner of o
        if ( loc.x<= (o->loc.x+o->width) && loc.x>=o->loc.x&& (loc.y + height) >= o->loc.y && (loc.y + height) <= (o->loc.y + o->height) ) return true; // bottom left
        if( (loc.x + width) <= (o->loc.x+o->width) && (loc.x + width) >=o->loc.x&& (loc.y + height) >= o->loc.y && (loc.y + height) <= (o->loc.y + o->height) )return true;// bottom right




        return false;
    }


};
class brick: public objects{
    private:


    public:

    brick(){
        basicname = "brick";
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
        type = BRICK;
    }


};
class stone: public objects{
    private:

    public:

    stone(){
        basicname = "stone";
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
        type = STONE;
    }
};
class water: public objects{
    private:

    public:

    water(){

        basicname = "water" ;
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
        type = WATER;
    }
};


class eyecandy: public objects
{
    public:
        int showtimecount;
        int showtime;


};
class tankhit: public eyecandy
{
        public:


    tankhit(){
        showtime = 10;
        showtimecount = showtime;
        totalimages = 1;
        basicname = "tankhit" ;
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
        play_sample(sndtankhit,255,0,1000,0);
    }
};
class brickhit: public eyecandy
{
        public:


    brickhit(){
        showtime = 10;
        showtimecount = showtime;
        totalimages = 1;
        basicname = "brickhit" ;
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);

        }
        width=pics[0]->w;
        height=pics[0]->h;
        play_sample(sndbrickhit,255,0,1000,0);
    }
};
class stonehit: public eyecandy
{
        public:


    stonehit(){
        showtime = 10;
        showtimecount = showtime;
        totalimages = 1;
        basicname = "stonehit" ;
        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
        play_sample(sndstonehit,255,0,1000,0);
    }
};
class movingobject: public objects
{
    protected:
    int velx;
    int vely;

    pos destile;
    int speed;

    bool moving;
    int step;
    int tilestep;
    public:
    virtual void justforabstraction() = 0;
    void settile(int y,int x){
        curtile.x=x;
        curtile.y=y;
    }
    pos gettile(){
        return curtile;
    }


    void finemove(){

        if(moving){
            loc.x+=(destile.x - curtile.x)*speed*tilewidth/100;
            loc.y+=(destile.y - curtile.y)*speed*tilewidth/100;

            if(destile.x > curtile.x){
                if(loc.x > destile.x*tilewidth ){
                    curtile=destile;
                    loc.x = destile.x*tilewidth;
                    moving=false;
                }
            }else if(destile.x < curtile.x){
                 if(loc.x < destile.x*tilewidth ){
                    curtile=destile;
                    loc.x = destile.x*tilewidth;
                    moving=false;
                }
            }else if(destile.y > curtile.y){
                if(loc.y > destile.y*tilewidth ){
                    curtile=destile;
                    loc.y = destile.y*tilewidth;
                    moving=false;
                }

            }else if(destile.y < curtile.y){
                if(loc.y < destile.y*tilewidth ){
                    curtile=destile;
                    loc.y = destile.y*tilewidth;
                    moving=false;
                }
            }




        }

    }
};
class tank;
class bullet: public movingobject
{
    protected:
    int velx;
    int vely;
    int attack_power;
    int penetration_power;
    int penetration_count;

    direction dir;
    tank* source;
    public:
    bullet(){
        basicname = "bullet" ;
        attack_power = 0;
        penetration_power = 1;
        penetration_count = penetration_power;
        totalimages = 4;
        velx=0;
        vely=0;
        moving = false;
        speed = 20;
        source = NULL;
}
void load(){



        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;
    }
    void move()
    {
            if(!moving){
                moving = true;
                destile.x = curtile.x + velx;
                destile.y = curtile.y + vely;
            }
        finemove();
    }
    void justforabstraction(){} // for removing abstraction
    friend class tank;
    friend void watchbullets(BITMAP * buffer);
    friend void movetanks();

};

class tank: public movingobject{
    protected:
    int bultime;        // counter to limit bullet fire rate;
    int bulrate;        // max bullet firing rate of the moving object;
    int bulmargin;
    bool fired;

    int bul_attack_power;
    int bul_penetration_power;
    int bul_speed;
    int bul_health;
    tank *virtualtank;
    public:
    int bulcount;


    tank(){
        step = 3;
        fired = false;
        velx=0;
        vely=0;
        bulmargin = 1;
        bulcount =0;
        moving = false;
        destile = curtile;
        speed = 10;
        bul_health = 100;
    };
    ~tank(){
     // botmap[curtile.y][curtile.x] = 0;
    }
    friend class power;
    friend class bulfast;
    friend class bulrate;
    friend class bulheavy;
    friend class pierce;
    friend class tankfast;

    void justforabstraction(){} // for removing abstraction

    void moveleft() {
        if(!moving){
            moving = true;
            destile = curtile;
            destile.x--;
            //botmap[curtile.y][curtile.x] = 0;
            //botmap[destile.y][destile.x] = 1;
            turnleft();
          }

    }
    void moveright() {
          if(!moving){
            moving = true;
            destile = curtile;
            destile.x++;
            //botmap[curtile.y][curtile.x] = 0;
            //botmap[destile.y][destile.x] = 1;
            turnright();
          }


    }
    void moveup() {
         if(!moving){
            moving = true;
            destile = curtile;
            destile.y--;
            //botmap[curtile.y][curtile.x] = 0;
            //botmap[destile.y][destile.x] = 1;
            turnup();
          }

    }
    void movedown () {
        if(!moving){
            moving = true;
            destile = curtile;
            destile.y++;
            //botmap[curtile.y][curtile.x] = 0;
            //botmap[destile.y][destile.x] = 1;
            turndown();
          }

    }

    void setstep(int x){
        tilestep=x;
        drawmargin = (x-width)/2;

    }

    tank* moved(int i){
        virtualtank->setxy(loc.x,loc.y);
        virtualtank->width = width;
        virtualtank->height = height;
        switch(i)
        {
            case LEFT:
            virtualtank->moveleft();
            break;
            case RIGHT:
            virtualtank->moveright();
            break;
            case UP:
            virtualtank->moveup();
            break;
            case DOWN:
            virtualtank->movedown();
        }
        return virtualtank;
    }




    void turnleft(){

     if(velx!=-1){
        velx=-1;
        rotation = -90;
        vely=0;
        }
      }
    void turnright(){
        // blit
        if(velx!=1){
        velx=1;
        vely=0;
        rotation = 90;
        }

    }

    void turnup(){

        if(vely!=-1){
        vely=-1;
        velx=0;
        rotation = 0;
        }

    }

    void turndown(){
       if(vely!=1){
        vely=1;
        velx=0;
        rotation = 180;
        }
    }


   friend void movetanks();
   friend void watchbullets(BITMAP*);
   friend bool isbotempty(pos p);
   friend bool isclearsameline(pos p1, pos p2);

   void setrandompos(){
        loc.x= (rand() % (SCREEN_W - 10)) ;
        loc.y = rand() % (SCREEN_H - 10);
    }

    void fire(bullet *bul)
    {
        int posx,posy;
//        cout << "fire in the hole" ;
        if(velx==1){
            posx = loc.x+width+bulmargin;
            posy = loc.y + tileheight/2 - bul->height/2;
            bul->dir = RIGHT;
        }else if (velx==-1){
            posx = loc.x - bulmargin;
            posy = loc.y + tileheight/2 - bul->height/2;
            bul->dir = LEFT;
        }else if (vely == 1){
            posx = loc.x + tilewidth/2 - bul->width/2;
            posy = loc.y + height + bulmargin;
            bul->dir = DOWN;
        }else{
            posx = loc.x + tilewidth/2 - bul->width/2;
            posy = loc.y - bulmargin;
            bul->dir = UP;
        }
        bul->source = this;
        bul->setxy(posx,posy);
        bul->attack_power = bul_attack_power;
        bul->penetration_power = bul_penetration_power;
        bul->penetration_count = bul_penetration_power;
        bul->velx = velx;
        bul->vely = vely;
        bul->speed = bul_speed;
        bul->curtile = curtile;
        bul->destile.x = curtile.x + velx;
        bul->destile.y = curtile.y + vely;
        bul->health = bul_health;
    }


};
 class ptank: public tank
 {


     public:
        int life;
        int bulrate;
        int score;

        ptank(){
         basicname = "ptank" ;
         totalimages = 10;
         life = 5;
         bulrate = 40; // lower the number, faster the rate;
         bultime = bulrate;   // bullet time limiting counter
         hitpoints = 100;
         health = hitpoints;
         bul_attack_power = 10;
         bul_penetration_power=1;
         bul_speed = 15;
         score = 0;


        }
void reset(){
         life = 5;
         bulrate = 40; // lower the number, faster the rate;
         bultime = bulrate;   // bullet time limiting counter
         hitpoints = 100;
         health = hitpoints;
         bul_attack_power = 10;
         bul_penetration_power=1;
         bul_speed = 15;
         score = 0;

}
     void loadtank(){

        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;

        bulcount=0;
        virtualtank = new tank;
    }
    ~ptank(){
        /*
            destroy_bitmap(pics[0]);
            destroy_bitmap(pics[1]);
            destroy_bitmap(pics[2]);
            destroy_bitmap(pics[3]);
            */

    }


    void justforabstraction(){} // for removing abstraction
    friend void drawinfos(BITMAP * bmp);

 };


class c1tank: public tank
{
    private:
    int hprio,yprio;
    int movedir;        //
    behaviour mode;    // any of RANDOM, ASTAR etc
    pos targettile;   // this holds the tile of the player
    int movecount;   // for counting the no. of moves through the path generated. Reseteed to 0 by external function, each time new path is generated
    stack<pos> path; // holds stack of parent tiles. the parent of target tile is at the top
    int stepscore[3][3];  // holds weitage for different directions.
    class astar{
        public:
        int sscore;
        int dscore;
        int fscore;
        pos tile;
        astar* parent;
        bool isclosed;
        astar(){
            sscore=10000;
            dscore=10000;
            isclosed = false;
        }
        int computefscore(){
            fscore = sscore + dscore;
            return fscore;
        }
    };
    astar **pathmap;

    public:
    class hung{};
    direction movelist[4];
    int firelist[4];
    int lastmove[2];
    int moveno;
    int canuturn;
    pos vcurtile;
    c1tank(){
         basicname = "ctank" ;
        totalimages=10;
         moving=false;
         bulrate = 20; // lower the number, faster the rate;
         bultime = bulrate;
         movedir = 0;
         mode = ASTAR;
         movecount = 0;
         speed = 5;

         { // stepscore settings
         stepscore[0 + 1][1 +1] = 10; // step to the right
         stepscore[0 + 1][-1 + 1] = 10; // step to the left
         stepscore[1 + 1][0 + 1] = 10; // step up
         stepscore[-1 + 1][0 + 1] = 10; // step down
         stepscore[1 + 1][1 + 1] = 10000; // Diagonal upright
         stepscore[1+ 1][-1+ 1] = 10000; // Diagonal upleft
         stepscore[-1+ 1][1+ 1] = 10000; // Diagonal downright
         stepscore[-1+ 1][-1+ 1] = 10000; // diagonal downleft
         }
         hitpoints = 100;
         health = hitpoints;
         bul_attack_power=10;
         bul_penetration_power = 1;
         bul_speed = 15;

         pathmap = new astar*[rows];
         for(int i=0;i<rows;i++){
         pathmap[i] = new astar[columns];
            for(int j=0;j<columns;j++)
            pathmap[i][j].tile = pos(i,j);  // set the tile property of every tiles
        }
    }


        ~c1tank(){



          for(int i=0;i<rows;i++)
          delete[] pathmap[i];
          delete pathmap;
        }





    void loadtank(){

        string basicpath;
        basicpath = theme + "\\" + basicname;
        for(int i=0;i<totalimages;i++){
         paths[i].str("");
         paths[i] << basicpath << "(" << i+1 << ").bmp" ;
         pics[i] = load_bitmap(paths[i].str().data(),NULL);
        }
        width=pics[0]->w;
        height=pics[0]->h;

         moveno = 0;
        bulcount=0;
        step = 1;
        canuturn=0;
        virtualtank = new tank;
        movelist[2] = movelist[3] = NUL;
    }
    void justforabstraction(){} // for removing abstraction

void move(int i){


          switch(i)

          {
            case 0:
            moveleft();
            break;
            case 1:
            moveright();
            break;
            case 2:
            moveup();
            break;
            case 3:
            movedown();
            break;
        }

}

    friend void movetanks();


void escape(direction dir){
        int y = curtile.y;
        int x = curtile.x;
        int r,c;
    switch(dir){
            case LEFT: // left
            case RIGHT:
                r=y; c = x-1;
                 if(r <rows && r >= 0 && c < columns && c>=0){
                if(vmap[y][x-1]==emptywt){
                  moveleft();

                  break;
                }
                 }
                r=y;c=x+1;
                 if(r <rows && r >= 0 && c < columns && c>=0){
                if(vmap[y][x+1]==emptywt){
                    moveright();
                    break;
                }
                 }
                break;
            case UP: // right;
            case DOWN:
            r=y-1;c=x;
             if(r <rows && r >= 0 && c < columns && c>=0){
                if(vmap[y-1][x]==emptywt){
                    moveup();
                    break;
                }
             }
                r=y+1;c=x;
                 if(r <rows && r >= 0 && c < columns && c>=0){
                if(vmap[y+1][x]==emptywt){
                    movedown();
                    break;
                }
                 }
                break;
        }



}
void moverandom(){


        int ran = rand() % 4;
        int y = curtile.y;
        int x = curtile.x;
        int r,c;
        switch(ran){
            case 0: // left
            r = y;
            c = x-1;
             if(r <rows && r >= 0 && c < columns && c>=0){
            if(vmap[y][x-1]==emptywt){
              moveleft();
            }
             }
            break;
            case 1: // right;
            r = y;
            c = x+1;
             if(r <rows && r >= 0 && c < columns && c>=0){
            if(vmap[y][x+1]==emptywt){
                moveright();
            }
             }
            break;
            case 2: // up
            r = y-1;
            c = x;
             if(r <rows && r >= 0 && c < columns && c>=0){
            if(vmap[y-1][x]==emptywt){
                moveup();
            }
             }
            break;
            case 3:  // down
            r=y+1;
            c=x;
             if(r <rows && r >= 0 && c < columns && c>=0){
            if(vmap[y+1][x]==emptywt){
                movedown();
            }
             }
        }



}

    void turn(direction i){
        //   if (i == -1) i = moveno;
          switch(i){
            case LEFT:
            turnleft();
            break;
            case RIGHT:
            turnright();
            break;
            case UP:
            turnup();
            break;
            case DOWN:
            turndown();
            break;
        }
    }

void fillprio(objects * p){


     // generata proprity list based on moving which direction is shortes to be in the
     // same row/column as that of the player
        int cx = (loc.x + width)/2;
        int cy = (loc.y + height)/2;
        if(abs(p->loc.x - loc.x) < abs(p->loc.y - loc.y)){
            hprio = 0;
            yprio = 1;
        }else{
            hprio = 1;
            yprio = 0;
        }
        if(cx > p->loc.x && cx < p->loc.x + p->width)
        {
            hprio=1;
            yprio=0;
                if(p->loc.y - loc.y > 0) firelist[0]=UP;
                else firelist[0]=DOWN;
        }else if( cy > p->loc.y && cy < p->loc.y + p->height)
        {
            yprio=1;
            hprio=0;
                if(p->loc.x - loc.x> 0) firelist[0] = RIGHT;
                else firelist[0]=LEFT;

        }else{
            firelist[0] = 0;
        }
        if(p->loc.x - loc.x> 0) { movelist[hprio] = RIGHT;}
            else { movelist[hprio] = LEFT;}

            if(p->loc.y - loc.y < 0) {movelist[yprio] = UP;}
            else { movelist[yprio] = DOWN;}
}
void clearpath(){
  while(path.size()!=0) path.pop();
}

  void clearpaths(){
        for(int i=0;i<rows;i++)
            for(int j=0;j<columns;j++)
            {
                pathmap[i][j].sscore = 10000; // reset score
                pathmap[i][j].isclosed=false;

            }
       clearpath();
}

void generatepath(){
    clearpaths();
    vcurtile=curtile;
    int vx,x;
    int vy,y;
    int iteration = 0;
   // cout << curtile.x << " " << curtile.y << endl;
    pathmap[vcurtile.y][vcurtile.x].sscore=0; // set the sscore of starting tile as 0
    pathmap[vcurtile.y][vcurtile.x].parent = &pathmap[vcurtile.y][vcurtile.x]; // set the parent of starting tile as the same tile
    if(targettile == vcurtile) throw hung();
    while(vcurtile!=targettile){  // loop until the destination tile is reached
        iteration++;
        if(iteration > 200) throw hung();
        int initscore=10000;
        vx = vcurtile.x;       // extract virtual curent tile's x (actual current tile is curtile, acutal tank in screen is still located at curtile) but the algorithms current tile vcurtile is moving forward
        vy =vcurtile.y;         // extract vcurtiles y cordinate
        int xmin = vx,ymin=vy;   //

//////  change the parent tile and compute new sscore for current vcurtile, if any of the surrounding open list tile has lower sscore than vcurtile's parent tile then that tile is set as the parent tile

        for(int i=1;i>=-1;i--){
        for(int j=1;j>=-1;j--){

             x = vx +j;
             y = vy +i;
          //  cout << "pathscore" << pathmap[y][x].sscore << endl;
             if(x >= columns  || y >= rows || x < 0 || y < 0) continue;
            if(i==0 && j==0 || pathmap[y][x].isclosed) continue;

            if(pathmap[y][x].sscore < pathmap[vy][vx].parent->sscore){
                pathmap[vy][vx].parent = &pathmap[y][x];
                pathmap[vy][vx].sscore = pathmap[vy][vx].parent->sscore + stepscore[-i+1][-j+1];
                if(pathmap[vy][vx].sscore < initscore){
                    initscore = pathmap[vy][vx].sscore;
                    xmin = x;
                    ymin = y;
                }
            }
        }
    }
    pathmap[ymin][xmin].isclosed=true;
    initscore=10000;

/////////  ////////////

//// compute sscore, dscore and set parent tile for the surrounding tiles.
    for(int i=1;i>=-1;i--){
        for(int j=1;j>=-1;j--){

             x = vx +j;
             y = vy +i;
            if(x >= columns  || y >= rows || x < 0 || y < 0) continue;
            if(i==0 && j==0 || pathmap[y][x].isclosed) continue;

                pathmap[y][x].sscore = pathmap[vy][vx].sscore + stepscore[i+1][j+1] + vmap[y][x];
                pathmap[y][x].dscore = 1.5*stepscore[1][0]*( abs(targettile.x -x) + abs(targettile.y - y));

                if(pathmap[y][x].computefscore() < initscore){
                    initscore = pathmap[y][x].fscore;
                    xmin=x;
                    ymin =y;
                }
                pathmap[y][x].parent = &pathmap[vy][vx];
              //  cout << "[" << y << "][" << x << "]fscore =  "  << pathmap[y][x].fscore << "dcore = " << pathmap[y][x].dscore << "sscore = " << pathmap[y][x].sscore << "stepscore[" << i << "][" << j << "] = " << stepscore[i+1][j+1] << "vmap" << vmap[y][x]<< endl;
             //   cout << "[" << y << "][" << x << "]parent =  "  << vy << "][" << vx << "]" << endl;
        }
    }

///////////////////////////////

    pathmap[vy][vx].isclosed = true; // send this current tile to closed list
    vcurtile = pos(ymin,xmin);       // change the current tile to the one having lowest fscore
                                // ymin, and xmin corresponds to tile having lowest fscore

    }
    //cout << "Iteration: iteration" << iteration;
    pos itile;
    itile = targettile;

   //  cout << "targetx: "<< itile.x << "targety: " << itile.y;
    // readkey();
     int parentx = pathmap[itile.y][itile.x].parent->tile.x;
     int parenty = pathmap[itile.y][itile.x].parent->tile.y;
  //   cout <<  "Parentx: " << parentx << "Parenty: " << parenty << endl ;
    // readkey();
    for (itile = targettile ; itile != curtile; itile = pathmap[itile.y][itile.x].parent->tile){
        path.push(itile);
    }


}

void drawpath(BITMAP* bmp){
  int x=0,y=0;
 // pos curpos;
 // curpos = vcurtile;
  for (int r=0;r<rows ; r++)
  {
    for(int c =0;c<columns;c++){


        textprintf_ex(bmp, font, x, y+10, makecol(255, 255, 255),
                    -1, "  %d", pathmap[r][c].sscore);
            x+=tilewidth;


    }
     x=0;
     y+=tileheight;
   }
//  */
}

 friend int getmaxposible(int &x,int &y,tank tnk, direction d);
};
#endif
