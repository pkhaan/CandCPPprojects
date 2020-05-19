#ifndef map_h
#define map_h 1
#include <allegro.h>
#include <vector>
#include <sstream>
#include <iostream>
#include "classes.h"
using namespace std;
extern BITMAP* map;
extern int tilewidth;
extern int tileheight;
extern int columns;
extern int rows;
const int brickwt = 30;
const int stonewt = 150;
const int waterwt = 5000;
const int emptywt = 1;
class objects;
void initmap(int level,string);
void drawmap(BITMAP *);
void drawvmap(BITMAP* bmp);
extern objects ***objmap;
extern int **vmap; //
extern string theme;
extern int **botmap;
extern int **playermap;
extern SAMPLE* sndbrickhit;
extern SAMPLE* sndstonehit;
extern SAMPLE* sndtankhit;
extern SAMPLE* sndpower;
//using namespace std;


#endif
