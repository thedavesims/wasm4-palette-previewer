#include "wasm4.h"
#include "image.h"
#include "palette.h"

void start()
{
    set_palette(0,1);
}

void update () 
{
    static int pal = 0;
    static int invert = 1;
    static uint8_t prev_gamepad = 0;
    static int palette_count = sizeof lospec_palettes / sizeof lospec_palettes[0];

    uint8_t gamepad = *GAMEPAD1;

    if (gamepad & BUTTON_UP && !(prev_gamepad & BUTTON_UP)) 
    {
        pal++;
    } else if (gamepad & BUTTON_DOWN && !(prev_gamepad & BUTTON_DOWN)) 
    {
        pal--;
    }

    if((gamepad & BUTTON_1 && !(prev_gamepad & BUTTON_1)) 
    || (gamepad & BUTTON_2 && !(prev_gamepad & BUTTON_2)))
    {
        invert = !invert;
    }

    if (pal < 0)
    { 
        pal += palette_count;
    }
    pal %= palette_count;

    if (gamepad != prev_gamepad)
    {
        //if a button was pressed, apply the palette
        set_palette(pal,invert);
    }
    prev_gamepad = gamepad;

    //draw
    *DRAW_COLORS = 0x4321;
    blit(PalettePreview, 0, -1, 160, 160, BLIT_2BPP);
    *DRAW_COLORS = 0x04;
    text(lospec_palettes[pal].name,1,144);
    text(lospec_palettes[pal].author,1,152);
}
