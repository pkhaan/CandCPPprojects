#include <allegro.h>
#include "initializer.h"
int initializegame(){
    allegro_init();
    install_keyboard();
    install_timer();
    srand(time(NULL));
    set_color_depth(32);
    return set_gfx_mode(MODE, WIDTH, HEIGHT, 0, 0);
}
