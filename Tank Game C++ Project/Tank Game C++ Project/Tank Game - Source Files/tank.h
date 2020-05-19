#ifndef tank_h
#define tank_h 1
#include "classes.h"
#include <allegro.h>
#include <vector>
#include "map.h"
using namespace std;
extern ptank player;
extern bool fired;
void inittanks();
void drawtanks(BITMAP*);
void movetanks();
void watchbullets(BITMAP *);
void drawbullets(BITMAP *);
int reversedir(int d);
direction makedir(int t);
bool isbotempty(pos p);
void newbul(void);
bool isclearsameline(pos p1, pos p2);
//void newbul();
extern volatile int bultime;
#endif
