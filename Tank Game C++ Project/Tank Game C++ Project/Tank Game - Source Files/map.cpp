//#include "map.h"
#include <sstream>
#include <vector.h>
#include "classes.h"
#include "map.h"
using namespace std;
int tilewidth;
int tileheight;
int columns;
int rows;
string theme;
objects ***objmap;
int **vmap; // create a 2d virtual map, that stores only whether there is obstacle or not.
int **botmap;
int **playermap;
SAMPLE* sndbrickhit;
SAMPLE* sndstonehit;
SAMPLE* sndtankhit;
SAMPLE* sndpower;


void initmap(int level,string strtheme)
{

    theme = strtheme;
    string soundpath;
    soundpath = theme + "\\brickhit.wav";
    sndbrickhit = load_sample(soundpath.data());
    soundpath = theme + "\\stonehit.wav";
    sndstonehit = load_sample(soundpath.data());
    soundpath = theme + "\\tankhit.wav";
    sndtankhit = load_sample(soundpath.data());
    soundpath = theme + "\\power.wav";
    sndpower = load_sample(soundpath.data());



    stringstream pathname;
    BITMAP* orgpath;
    BITMAP* path;
    brick testbrick;  // create a test brick to get the hight and width of a unit tile
    tilewidth = testbrick.getwidth();
    tileheight = testbrick.getheight();
    columns = screen->w / testbrick.getwidth() + 1; // findout no. of columns and rows
    rows = screen->h / testbrick.getheight() - 1; //


    // allocate memory for the real object map
    objmap = new objects**[rows];
    for(int i=0;i<rows;i++)
        objmap[i]=new objects*[columns];

     // allocate memory for the virtual object map
    vmap = new int*[rows];
    for(int i=0;i<rows;i++){
        vmap[i] = new int[columns];
    }



    path = create_bitmap(screen->w,screen->h);
    pathname << "path" << level << ".bmp" ;     // open the path file depending upon level eg. path1.bmp for level 1
    orgpath = load_bitmap(pathname.str().data(),NULL); // load the bmp
    stretch_blit(orgpath,path,0,0,orgpath->w,orgpath->h,0,0,screen->w,screen->h); // stretch adjust to fit screen and load into path

    int c, r , x=0,y=0;

    for (r=0;r<rows; r++)
  // /*
    {
    for(c =0;c<columns;c++){
            if (getg(getpixel(path,x,y))==0){
                objects * obj = new brick;
                obj->setxy(x,y);
                objmap[r][c] = obj;

                vmap[r][c]= brickwt;       // weitage for brick is 30
            }else if(getb(getpixel(path,x,y)) == 0){
                objects * obj = new stone;
                 obj->setxy(x,y);
                  objmap[r][c] = obj;

                  vmap[r][c] = stonewt;   // weitage for stone is 100;

            }else if(getr(getpixel(path,x,y)) ==0){
                 objects * obj = new water;
                 obj->setxy(x,y);
                 objmap[r][c] = obj;

                 vmap[r][c] = waterwt; // weitage for water is 200;
            }else{
                vmap[r][c] = emptywt;   // weitage for nothing is 0;

                objmap[r][c] = NULL; // store Null pointer if there is no object.
            }
            x+=tilewidth;

        }
        x=0;
        y+=tileheight;
    } //*/
  //  blit(brick,map,0,0,x,y,brick->w,brick->h);
 //   blit(brick,map,0,0,x+brick->w,y+brick->h,brick->w,brick->h);
      return;
}

void drawmap(BITMAP* bmp)
{

  for (int r=0;r<rows ; r++)
  {
  for(int c =0;c<columns;c++){
      if(objmap[r][c] != NULL) objmap[r][c]->draw(bmp);

    }
  }
//drawvmap(bmp);
}
void drawvmap(BITMAP* bmp)
{
    int x=0,y=0;
  for (int r=0;r<rows ; r++)
  {
    for(int c =0;c<columns;c++){


        textprintf_ex(bmp, font, x, y, makecol(255, 255, 255),
                    -1, "%d", vmap[r][c]);
            x+=tilewidth;

    }
     x=0;
     y+=tileheight;
   }

}
/*vector<objects*>::iterator reachedwall(objects *plyr)
{

     int r = plyr->getpos().x / tilewidth;
     int c = plyr->getpos().y / tileheight;
     //if (vmap[r][c] != 0){ return o
     int max=objmap.size();
     vector<objects *>::iterator it;
     for(it=objmap.begin();it!=objmap.end() ;it++){
             if((*it)->checkcol(plyr)) return it;

    }
    return it;

}
*/

