#include <allegro.h>

int main()
{allegro_init();

install_keyboard();

set_gfx_mode(GFX_AUTODETECT_WINDOWED,320,240,0,0);

textout_ex(screen,font,"HELLO WORLD",20,30,makecol(255,255,0),makecol(255,0,0));

readkey(0);
return 0;
}
END_OF_MAIN()
