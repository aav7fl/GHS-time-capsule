#include <allegro.h>
BITMAP *zSprite;
BITMAP *bSprite;
int main(){
    
    allegro_init();
    install_keyboard();
    set_gfx_mode( GFX_AUTODETECT, 640, 480, 0, 0);
    acquire_screen();
  
    
    
    clear_to_color( screen, makecol( 255, 0, 255 ));
     zSprite = load_bitmap("z.bmp",NULL);
    
    draw_sprite(screen, zSprite, 100,18 );
    bSprite = load_bitmap("b.bmp",NULL);
    
    draw_sprite(screen, bSprite, 100,100 );
    
    textout_ex(screen,font, "EXTREME BADGER BOARDING!!!!!!!!", 200,400,makecol(0,0,0), makecol(255,0,255));
   
    line(screen,0,339,59,339,makecol(0,0,0));
    line(screen,59,339,59,223,makecol(0,0,0));
    line(screen,59,223,223,223,makecol(0,0,0));
    line(screen,223,223,223,339,makecol(0,0,0));
    line(screen,223,339,245,339,makecol(0,0,0));
    line(screen,245,339,245,223,makecol(0,0,0));
    line(screen,245,223,356,223,makecol(0,0,0));
    line(screen,356,223,600,339,makecol(0,0,0));
    line(screen,600,339,640,339,makecol(0,0,0));
    line(screen,180,223,180,189,makecol(0,0,0));
    line(screen,75,223,75,189,makecol(0,0,0));
    line(screen,59,189,245,189,makecol(0,0,0));
    
release_screen();
    readkey();
    
    
    return 0;
    
    
    
           
           }
           END_OF_MAIN();
