
#ifndef info_h
#define info_h 1
#include "classes.h"
class choice{
    public:
    int x;
    choice (int i):x(i){}
};
class arrow: public objects{

    public:
    int selection;
    pos selmap[5];
    int initloc;
    int increment;
    arrow(){
        initloc = 120;
        increment = 60;
        loc.y = initloc;
        loc.x = 40;
        selection = 1;
        paths[0].str("");
        paths[0] << "itank.bmp";
        pics[0] = load_bitmap(paths[0].str().data(),NULL);
        width=pics[0]->w;
        height=pics[0]->h;
    }
    void movedown(){
        loc.y +=increment;
        selection += 1;
        if(selection == 5) loc.y = 530;
        if(selection > 5) {
            loc.y = initloc;
            selection =1;
        }

    }
     void moveup(){
        loc.y -=increment;
        selection -= 1;
        if(selection < 1) selection = 5;
        if(selection == 5) loc.y = 530;
        if(selection == 4) loc.y = initloc + 3*increment;


    }


};
void drawinfos(BITMAP * bmp);
void initializeinfo();
#endif


