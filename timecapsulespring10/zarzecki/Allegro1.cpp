#include <allegro.h>

int main()

{
    int x = 20, y = 30;
    allegro_init();
    install_keyboard();
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,320,240,0,0);
   
    while(!key[KEY_ESC]){
                         
                         
                         clear_keybuf();
                        textout_ex(screen,font,"HELLO WORLD",x,y,makecol(255,255,0),makecol(255,0,0),-1);
                         if (key[KEY_UP])--y;
                         else if (key[KEY_DOWN])++y;
                         else if (key[KEY_RIGHT])++x;
                         else if (key[KEY_LEFT])--x;
                        
                         
                         
    readkey(); 
    rest(10);}
    return 0 ;
}
END_OF_MAIN()
