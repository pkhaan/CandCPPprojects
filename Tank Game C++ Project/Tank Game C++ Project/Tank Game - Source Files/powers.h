#ifndef powers_h
#define powers_h 1
#include "classes.h"
#include "tank.h"
class power: public objects
{
    public:
    virtual void applypower(tank *t) = 0;
    ~power(){
        play_sample(sndpower,255,0,1000,0);
    }

};
//class bulfast, bulrate, bulheavy,pierce,tankfast

/*
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
    }
};
*/


class bulfast: public power
{

    public:
    bulfast(){
        paths[0].str("");
        paths[0] << theme << "\\powerbulfast.bmp" ;
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    friend void watchbullets(BITMAP * buffer);
    void applypower(tank *t){
     t->bul_speed+=5;
     t->bul_health=75; // health 75 corresponds to bullet(2).bmp whichi corresponds to bulfast
    }


};
class bulrate: public power
{

    public:
    bulrate(){
        paths[0].str("");
        paths[0] << theme << "\\powerbulrate.bmp";
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    friend void watchbullets(BITMAP * buffer);
    void applypower(tank *t){
     if(t->bulrate > 10) t->bulrate-=10;
    }

};
class bulheavy: public power
{

    public:
    bulheavy(){
        paths[0].str("");
        paths[0] << theme << "\\powerbulheavy.bmp" ;
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    friend void watchbullets(BITMAP * buffer);
    void applypower(tank *t){

     t->bul_attack_power = 150;
     t->bul_health = 50; // corresponds to bullet(3).bmp (bulheavy.bmp)
    }

};
class pierce: public power
{

    public:
    pierce(){
        paths[0].str("");
        paths[0] << theme << "\\powerpierce.bmp" ;
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    friend void watchbullets(BITMAP * buffer);
    void applypower(tank *t){
        t->bul_penetration_power += 1;
        t->bul_health = 25;
    }

};
class tankfast: public power
{

    public:
    tankfast(){
        paths[0].str("");
        paths[0] << theme << "\\powertankfast.bmp";
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    friend void watchbullets(BITMAP * buffer);
    void applypower(tank *t){
        t->speed += 2;
    }

};
/*
class halt: public power
{

    public:
    pierce(){
        paths[0].str("");
        paths[0] << theme << "\\powerhalt" <<
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    void applypower(tank *t){
        t->speed += 10;
    }

};

*/














#endif
