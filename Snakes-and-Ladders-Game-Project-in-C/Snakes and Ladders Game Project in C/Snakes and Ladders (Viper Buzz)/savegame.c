#include <windows.h>
#include <Mmsystem.h>


int locate(int x,int y)
{
    COORD coord={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void playfile(char filename[])
{
    stop();     //Stop any currently playing file.
    PlaySoundA((LPCSTR)filename,NULL,SND_ASYNC | SND_LOOP | SND_FILENAME);
}
void playfilesync(char filename[])
{
    stop();     //Stop any currently playing file.
    PlaySoundA((LPCSTR)filename,NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
}
void stop()
{
    PlaySoundA (NULL,NULL,SND_FILENAME);
}
