#include <allegro.h>

BITMAP *xSprite;

int main ()

{
    allegro_init();
    install_keyboard();
    set_gfx_mode( GFX_AUTODETECT, 640, 480, 0, 0);
    acquire_screen();
    clear_to_color( screen, makecol( 255, 255, 0 ));
    line(screen,0,339,59,339,makecol(0,0,0));
    line(screen,59,339,59,239,makecol(0,0,0));
    line(screen,59,239,159,239,makecol(0,0,0));
    line(screen,159,239,159,339,makecol(0,0,0));
    line(screen,159,339,239,339,makecol(0,0,0));
    line(screen,239,339,239,39,makecol(0,0,0));
    line(screen,239,39,287,39,makecol(0,0,0));
    line(screen,287,39,287,339,makecol(0,0,0));
    line(screen,287,339,300,339,makecol(0,0,0));
    line(screen,300,339,370,300,makecol(0,0,0));
    line(screen,370,300,370,54,makecol(0,0,0));
    line(screen,370,54,390,100,makecol(0,0,0));
    line(screen,390,100,370,154,makecol(0,0,0));
    line(screen,370,300,440,339,makecol(0,0,0));
    line(screen,440,339,500,339,makecol(0,0,0));
    line(screen,500,339,500,100,makecol(0,0,0));
    line(screen,500,100,600,100,makecol(0,0,0));
    line(screen,600,100,600,339,makecol(0,0,0));
    line(screen,600,339,640,339,makecol(0,0,0));
    release_screen();
    readkey();
    
    
    
    
    xSprite = load_bitmap("x.bmp",NULL);
    
    draw_sprite(screen, xSprite, 250, 250);
    
    return 0;
    
    
           
           }
