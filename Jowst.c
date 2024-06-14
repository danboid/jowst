// Jowst WIP test

// By Dan MacDonald
//       2024

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdbool.h>
#include <stdlib.h>
#include <uzebox.h>

#include "data/jousta.inc"

const char mapP1[] PROGMEM = {
   2, 2,  // Width/height that MapSprite reads to know how to map the sprite
   0x1, 0x2,
   0x3, 0x0
};



int main()
{
    SetSpritesTileTable(tileset);
    SetTileTable(tileset);
    ClearVram();
    while (1)
    {
        WaitVsync(1); // This is key to keeping accurate time.
        MapSprite2(1, mapP1, 0); //setup tank for drawing
        MoveSprite(1, 128, 200, 2, 2);
    }
}