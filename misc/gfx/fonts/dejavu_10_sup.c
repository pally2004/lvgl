#include "misc_conf.h"
#if  USE_FONT_DEJAVU_10_SUP != 0
#include <stdint.h>
#include "lvgl/misc/gfx/font.h"

/*Store the image of the letters (glyph) */
static const uint8_t dejavu_10_sup_bitmap[] = 
{
    // ASCII: 160, char width: 3
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 161, char width: 3
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....

    // ASCII: 162, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x10,  // ---O--..
    0x38,  // --OOO-..
    0x70,  // -OOO--..
    0x50,  // -O-O--..
    0x70,  // -OOO--..
    0x38,  // --OOO-..
    0x10,  // ---O--..
    0x00,  // ------..

    // ASCII: 163, char width: 6
    0x00,  // ------..
    0x18,  // ---OO-..
    0x20,  // --O---..
    0x20,  // --O---..
    0x78,  // -OOOO-..
    0x20,  // --O---..
    0x20,  // --O---..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 164, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x84,  // O----O..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 165, char width: 6
    0x00,  // ------..
    0x88,  // O---O-..
    0x50,  // -O-O--..
    0x50,  // -O-O--..
    0xf8,  // OOOOO-..
    0x20,  // --O---..
    0xf8,  // OOOOO-..
    0x20,  // --O---..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 166, char width: 3
    0x00,  // ---.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....

    // ASCII: 167, char width: 5
    0x00,  // -----...
    0x78,  // -OOOO...
    0x40,  // -O---...
    0x30,  // --OO-...
    0x58,  // -O-OO...
    0x68,  // -OO-O...
    0x10,  // ---O-...
    0x08,  // ----O...
    0x78,  // -OOOO...
    0x00,  // -----...

    // ASCII: 168, char width: 5
    0x00,  // -----...
    0x50,  // -O-O-...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...

    // ASCII: 169, char width: 9
    0x00, 0x00,  // ---------.......
    0x1c, 0x00,  // ---OOO---.......
    0x22, 0x00,  // --O---O--.......
    0x5d, 0x00,  // -O-OOO-O-.......
    0x51, 0x00,  // -O-O---O-.......
    0x5d, 0x00,  // -O-OOO-O-.......
    0x22, 0x00,  // --O---O--.......
    0x1c, 0x00,  // ---OOO---.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 170, char width: 4
    0x00,  // ----....
    0x30,  // --OO....
    0x10,  // ---O....
    0x70,  // -OOO....
    0x70,  // -OOO....
    0x00,  // ----....
    0x70,  // -OOO....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....

    // ASCII: 171, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 172, char width: 8
    0x00,  // --------
    0x00,  // --------
    0x00,  // --------
    0x00,  // --------
    0x7e,  // -OOOOOO-
    0x02,  // ------O-
    0x02,  // ------O-
    0x00,  // --------
    0x00,  // --------
    0x00,  // --------

    // ASCII: 173, char width: 3
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x60,  // -OO.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 174, char width: 9
    0x00, 0x00,  // ---------.......
    0x1c, 0x00,  // ---OOO---.......
    0x22, 0x00,  // --O---O--.......
    0x5d, 0x00,  // -O-OOO-O-.......
    0x5d, 0x00,  // -O-OOO-O-.......
    0x55, 0x00,  // -O-O-O-O-.......
    0x22, 0x00,  // --O---O--.......
    0x1c, 0x00,  // ---OOO---.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 175, char width: 5
    0x70,  // -OOO-...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...

    // ASCII: 176, char width: 5
    0x00,  // -----...
    0x70,  // -OOO-...
    0x50,  // -O-O-...
    0x70,  // -OOO-...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...

    // ASCII: 177, char width: 8
    0x00,  // --------
    0x00,  // --------
    0x10,  // ---O----
    0x10,  // ---O----
    0x7c,  // -OOOOO--
    0x10,  // ---O----
    0x10,  // ---O----
    0x7c,  // -OOOOO--
    0x00,  // --------
    0x00,  // --------

    // ASCII: 178, char width: 4
    0x00,  // ----....
    0x70,  // -OOO....
    0x10,  // ---O....
    0x20,  // --O-....
    0x70,  // -OOO....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....

    // ASCII: 179, char width: 4
    0x00,  // ----....
    0x70,  // -OOO....
    0x10,  // ---O....
    0x30,  // --OO....
    0x70,  // -OOO....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....

    // ASCII: 180, char width: 5
    0x10,  // ---O-...
    0x20,  // --O--...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...

    // ASCII: 181, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x7c,  // -OOOOO..
    0x40,  // -O----..
    0x40,  // -O----..

    // ASCII: 182, char width: 6
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x68,  // -OO-O-..
    0x68,  // -OO-O-..
    0x68,  // -OO-O-..
    0x28,  // --O-O-..
    0x28,  // --O-O-..
    0x28,  // --O-O-..
    0x28,  // --O-O-..
    0x00,  // ------..

    // ASCII: 183, char width: 3
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 184, char width: 5
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x20,  // --O--...
    0x60,  // -OO--...

    // ASCII: 185, char width: 4
    0x00,  // ----....
    0x60,  // -OO-....
    0x20,  // --O-....
    0x20,  // --O-....
    0x70,  // -OOO....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....

    // ASCII: 186, char width: 4
    0x00,  // ----....
    0x70,  // -OOO....
    0x50,  // -O-O....
    0x50,  // -O-O....
    0x70,  // -OOO....
    0x00,  // ----....
    0x70,  // -OOO....
    0x00,  // ----....
    0x00,  // ----....
    0x00,  // ----....

    // ASCII: 187, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 188, char width: 9
    0x00, 0x00,  // ---------.......
    0x62, 0x00,  // -OO---O--.......
    0x24, 0x00,  // --O--O---.......
    0x2c, 0x00,  // --O-OO---.......
    0x79, 0x00,  // -OOOO--O-.......
    0x1b, 0x00,  // ---OO-OO-.......
    0x13, 0x80,  // ---O--OOO.......
    0x21, 0x00,  // --O----O-.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 189, char width: 9
    0x00, 0x00,  // ---------.......
    0x62, 0x00,  // -OO---O--.......
    0x24, 0x00,  // --O--O---.......
    0x2c, 0x00,  // --O-OO---.......
    0x7b, 0x80,  // -OOOO-OOO.......
    0x18, 0x80,  // ---OO---O.......
    0x11, 0x00,  // ---O---O-.......
    0x23, 0x80,  // --O---OOO.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 190, char width: 9
    0x00, 0x00,  // ---------.......
    0x72, 0x00,  // -OOO--O--.......
    0x14, 0x00,  // ---O-O---.......
    0x3c, 0x00,  // --OOOO---.......
    0x79, 0x00,  // -OOOO--O-.......
    0x1b, 0x00,  // ---OO-OO-.......
    0x13, 0x80,  // ---O--OOO.......
    0x21, 0x00,  // --O----O-.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 191, char width: 5
    0x00,  // -----...
    0x00,  // -----...
    0x00,  // -----...
    0x10,  // ---O-...
    0x00,  // -----...
    0x10,  // ---O-...
    0x10,  // ---O-...
    0x20,  // --O--...
    0x40,  // -O---...
    0x78,  // -OOOO...

    // ASCII: 192, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 193, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 194, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 195, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 196, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 197, char width: 6
    0x30,  // --OO--..
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x84,  // O----O..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 198, char width: 9
    0x00, 0x00,  // ---------.......
    0x1f, 0x00,  // ---OOOOO-.......
    0x28, 0x00,  // --O-O----.......
    0x28, 0x00,  // --O-O----.......
    0x4f, 0x00,  // -O--OOOO-.......
    0x48, 0x00,  // -O--O----.......
    0x78, 0x00,  // -OOOO----.......
    0x8f, 0x00,  // O---OOOO-.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 199, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x60,  // -OO----.
    0x40,  // -O-----.
    0x40,  // -O-----.
    0x40,  // -O-----.
    0x60,  // -OO----.
    0x38,  // --OOO--.
    0x10,  // ---O---.
    0x30,  // --OO---.

    // ASCII: 200, char width: 6
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 201, char width: 6
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 202, char width: 6
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 203, char width: 6
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 204, char width: 3
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 205, char width: 3
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 206, char width: 3
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 207, char width: 3
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 208, char width: 7
    0x00,  // -------.
    0x78,  // -OOOO--.
    0x4c,  // -O--OO-.
    0x44,  // -O---O-.
    0xe4,  // OOO--O-.
    0x44,  // -O---O-.
    0x4c,  // -O--OO-.
    0x78,  // -OOOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 209, char width: 7
    0x00,  // -------.
    0x44,  // -O---O-.
    0x64,  // -OO--O-.
    0x64,  // -OO--O-.
    0x54,  // -O-O-O-.
    0x4c,  // -O--OO-.
    0x4c,  // -O--OO-.
    0x44,  // -O---O-.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 210, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x6c,  // -OO-OO-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x6c,  // -OO-OO-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 211, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x6c,  // -OO-OO-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x6c,  // -OO-OO-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 212, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x6c,  // -OO-OO-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x6c,  // -OO-OO-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 213, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x6c,  // -OO-OO-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x6c,  // -OO-OO-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 214, char width: 7
    0x00,  // -------.
    0x38,  // --OOO--.
    0x6c,  // -OO-OO-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x6c,  // -OO-OO-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 215, char width: 8
    0x00,  // --------
    0x00,  // --------
    0x00,  // --------
    0x44,  // -O---O--
    0x38,  // --OOO---
    0x10,  // ---O----
    0x38,  // --OOO---
    0x44,  // -O---O--
    0x00,  // --------
    0x00,  // --------

    // ASCII: 216, char width: 7
    0x00,  // -------.
    0x3c,  // --OOOO-.
    0x68,  // -OO-O--.
    0x4c,  // -O--OO-.
    0x44,  // -O---O-.
    0x64,  // -OO--O-.
    0x2c,  // --O-OO-.
    0x78,  // -OOOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 217, char width: 7
    0x00,  // -------.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 218, char width: 7
    0x00,  // -------.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 219, char width: 7
    0x00,  // -------.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 220, char width: 7
    0x00,  // -------.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x44,  // -O---O-.
    0x38,  // --OOO--.
    0x00,  // -------.
    0x00,  // -------.

    // ASCII: 221, char width: 5
    0x00,  // -----...
    0x88,  // O---O...
    0x50,  // -O-O-...
    0x70,  // -OOO-...
    0x20,  // --O--...
    0x20,  // --O--...
    0x20,  // --O--...
    0x20,  // --O--...
    0x00,  // -----...
    0x00,  // -----...

    // ASCII: 222, char width: 6
    0x00,  // ------..
    0x40,  // -O----..
    0x70,  // -OOO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x70,  // -OOO--..
    0x40,  // -O----..
    0x40,  // -O----..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 223, char width: 6
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x50,  // -O-O--..
    0x60,  // -OO---..
    0x50,  // -O-O--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x58,  // -O-OO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 224, char width: 6
    0x40,  // -O----..
    0x20,  // --O---..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 225, char width: 6
    0x10,  // ---O--..
    0x20,  // --O---..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 226, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 227, char width: 6
    0x68,  // -OO-O-..
    0x58,  // -O-OO-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 228, char width: 6
    0x00,  // ------..
    0x48,  // -O--O-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 229, char width: 6
    0x28,  // --O-O-..
    0x38,  // --OOO-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x08,  // ----O-..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 230, char width: 9
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......
    0x36, 0x00,  // --OO-OO--.......
    0x09, 0x00,  // ----O--O-.......
    0x7f, 0x00,  // -OOOOOOO-.......
    0x48, 0x00,  // -O--O----.......
    0x77, 0x00,  // -OOO-OOO-.......
    0x00, 0x00,  // ---------.......
    0x00, 0x00,  // ---------.......

    // ASCII: 231, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x38,  // --OOO-..
    0x40,  // -O----..
    0x40,  // -O----..
    0x40,  // -O----..
    0x38,  // --OOO-..
    0x10,  // ---O--..
    0x30,  // --OO--..

    // ASCII: 232, char width: 6
    0x20,  // --O---..
    0x10,  // ---O--..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x38,  // --OOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 233, char width: 6
    0x08,  // ----O-..
    0x10,  // ---O--..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x38,  // --OOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 234, char width: 6
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x38,  // --OOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 235, char width: 6
    0x00,  // ------..
    0x28,  // --O-O-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x40,  // -O----..
    0x38,  // --OOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 236, char width: 3
    0x80,  // O--.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 237, char width: 3
    0x20,  // --O.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 238, char width: 3
    0x40,  // -O-.....
    0xa0,  // O-O.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 239, char width: 3
    0x00,  // ---.....
    0xa0,  // O-O.....
    0x00,  // ---.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x40,  // -O-.....
    0x00,  // ---.....
    0x00,  // ---.....

    // ASCII: 240, char width: 6
    0x00,  // ------..
    0x30,  // --OO--..
    0x30,  // --OO--..
    0x38,  // --OOO-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 241, char width: 6
    0x68,  // -OO-O-..
    0x58,  // -O-OO-..
    0x00,  // ------..
    0x78,  // -OOOO-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 242, char width: 6
    0x20,  // --O---..
    0x10,  // ---O--..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 243, char width: 6
    0x08,  // ----O-..
    0x10,  // ---O--..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 244, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 245, char width: 6
    0x68,  // -OO-O-..
    0x58,  // -O-OO-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 246, char width: 6
    0x00,  // ------..
    0x48,  // -O--O-..
    0x00,  // ------..
    0x30,  // --OO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x30,  // --OO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 247, char width: 8
    0x00,  // --------
    0x00,  // --------
    0x00,  // --------
    0x10,  // ---O----
    0x00,  // --------
    0x7c,  // -OOOOO--
    0x00,  // --------
    0x10,  // ---O----
    0x00,  // --------
    0x00,  // --------

    // ASCII: 248, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x38,  // --OOO-..
    0x58,  // -O-OO-..
    0x48,  // -O--O-..
    0x68,  // -OO-O-..
    0x70,  // -OOO--..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 249, char width: 6
    0x20,  // --O---..
    0x10,  // ---O--..
    0x00,  // ------..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 250, char width: 6
    0x08,  // ----O-..
    0x10,  // ---O--..
    0x00,  // ------..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 251, char width: 6
    0x00,  // ------..
    0x00,  // ------..
    0x00,  // ------..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 252, char width: 6
    0x00,  // ------..
    0x48,  // -O--O-..
    0x00,  // ------..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x78,  // -OOOO-..
    0x00,  // ------..
    0x00,  // ------..

    // ASCII: 253, char width: 5
    0x10,  // ---O-...
    0x20,  // --O--...
    0x00,  // -----...
    0x88,  // O---O...
    0x88,  // O---O...
    0x50,  // -O-O-...
    0x70,  // -OOO-...
    0x20,  // --O--...
    0x20,  // --O--...
    0xc0,  // OO---...

    // ASCII: 254, char width: 6
    0x40,  // -O----..
    0x40,  // -O----..
    0x40,  // -O----..
    0x70,  // -OOO--..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x48,  // -O--O-..
    0x70,  // -OOO--..
    0x40,  // -O----..
    0x40,  // -O----..

    // ASCII: 255, char width: 5
    0x00,  // -----...
    0x50,  // -O-O-...
    0x00,  // -----...
    0x88,  // O---O...
    0x88,  // O---O...
    0x50,  // -O-O-...
    0x70,  // -OOO-...
    0x20,  // --O--...
    0x20,  // --O--...
    0xc0,  // OO---...
};

/*Store the start index of the glyphs in the bitmap array*/
static const uint32_t dejavu_10_sup_map[] = 
{
     0, 10, 20, 30, 40, 50, 60, 70, 
    80, 90, 110, 120, 130, 140, 150, 170, 
    180, 190, 200, 210, 220, 230, 240, 250, 
    260, 270, 280, 290, 300, 320, 340, 360, 
    370, 380, 390, 400, 410, 420, 430, 450, 
    460, 470, 480, 490, 500, 510, 520, 530, 
    540, 550, 560, 570, 580, 590, 600, 610, 
    620, 630, 640, 650, 660, 670, 680, 690, 
    700, 710, 720, 730, 740, 750, 760, 780, 
    790, 800, 810, 820, 830, 840, 850, 860, 
    870, 880, 890, 900, 910, 920, 930, 940, 
    950, 960, 970, 980, 990, 1000, 1010, 1020, 
};

/*Store the width (column count) of each glyph*/
static const uint8_t dejavu_10_sup_width[] = 
{
     3,  3,  6,  6,  6,  6,  3,  5, 
     5,  9,  4,  6,  8,  3,  9,  5, 
     5,  8,  4,  4,  5,  6,  6,  3, 
     5,  4,  4,  6,  9,  9,  9,  5, 
     6,  6,  6,  6,  6,  6,  9,  7, 
     6,  6,  6,  6,  3,  3,  3,  3, 
     7,  7,  7,  7,  7,  7,  7,  8, 
     7,  7,  7,  7,  7,  5,  6,  6, 
     6,  6,  6,  6,  6,  6,  9,  6, 
     6,  6,  6,  6,  3,  3,  3,  3, 
     6,  6,  6,  6,  6,  6,  6,  8, 
     6,  6,  6,  6,  6,  5,  6,  5, 
};

font_t font_dejavu_10_sup = 
{
    160,        /*First letter's unicode */
    255,        /*Last letter's unicode */
    10,        /*Letters height (rows) */
    dejavu_10_sup_bitmap,    /*Glyph's bitmap*/
    dejavu_10_sup_map,    /*Glyph start indexes in the bitmap*/
    dejavu_10_sup_width,    /*Glyph widths (columns)*/
};

#endif /*DEJAVU_10_SUP_H*/