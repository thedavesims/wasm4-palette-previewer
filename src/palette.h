
struct palette {
    int palette[4];
    char name[255];
    char author[255];
};

// Sampled from: https://lospec.com/palette-list
// Some palettes re-arranged from lightest to darkest for consistency
struct palette lospec_palettes[] = {
    {
        .palette = {0xe0f8cf, 0x86c06c, 0x306850, 0x071821},
        .name = "Default",
        .author = "WASM-4",
    },
    {
        //https://lospec.com/palette-list/ice-cream-gb
        .palette = {0xfffed6, 0xffabab, 0x644666, 0x100221},
        .name = "ICE CREAM GB",
        .author = "Kerrie Lake",
    },
    {
        //https://lospec.com/palette-list/rubble4
        .palette = {0xd6e2b3, 0xd1b250, 0x488880, 0x362d43},
        .name = "RUBBLE4",
        .author = "Snowy Owl",
    },
    {
        //https://lospec.com/palette-list/lava
        .palette = {0xeafe54, 0xe78304, 0xb63402, 0x850101},
        .name = "LAVA",
        .author = "helperman",
    },
    {
        //https://lospec.com/palette-list/gumball-boy-gb
        .palette = {0xffffff, 0x2ce8f5, 0xff0044, 0x193c3e},
        .name = "GUMBALL BOY GB",
        .author = "Do_Nendo",
    },
    {
        //https://lospec.com/palette-list/st-gameboy-aqua
        .palette = {0x668fcc, 0x244ab3, 0x141f66, 0x141433},
        .name = "ST GAMEBOY AQUA",
        .author = "Skiller Thomson",
    },
    {
        //https://lospec.com/palette-list/amethyst-gameboy
        .palette = {0xdfc7e3, 0x9e8b9d, 0x494048, 0x0f0e10},
        .name = "AMETHYST GB",
        .author = "plenesan",
    },
    {
        //https://lospec.com/palette-list/ayy4
        .palette =  {0xf1f2da, 0xffce96, 0xff7777, 0x00303b},
        .name = "AYY4",
        .author = "Polyducks",
    },
    {
        //https://lospec.com/palette-list/wish-gb
        .palette = {0x8be5ff, 0x608fcf, 0x7550e8, 0x622e4c},
        .name = "WISH GB",
        .author = "Kerrie Lake",
    },
    {
        //https://lospec.com/palette-list/lava-gb
        .palette = {0xff8e80, 0xc53a9d, 0x4a2480, 0x051f39},
        .name = "LAVA-GB",
        .author = "Aero",
    },
    {
        //https://lospec.com/palette-list/crimson
        .palette = {0xeff9d6, 0xba5044, 0x7a1c4b, 0x1b0326},
        .name = "CRIMSON",
        .author = "WildLeoKnight",
    },
    {
        //https://lospec.com/palette-list/spacehaze
        .palette = {0xf8e3c4, 0xcc3495, 0x6b1fb1, 0x0b0630},
        .name = "SPACEHAZE",
        .author = "WildLeoKnight",
    },
    {
        //https://lospec.com/palette-list/en4
        .palette = {0xfbf7f3, 0xe5b083, 0x426e5d, 0x20283d},
        .name = "EN4",
        .author = "ENDESGA",
    },
    {
        //https://lospec.com/palette-list/dusty4
        .palette = {0xf5f6df, 0x5a8f78, 0x3a5068, 0x372a51},
        .name = "DUSTY4",
        .author = "ink",
    },
    {
        //https://lospec.com/palette-list/space-icecream
        .palette = {0xfffed6, 0xffabab, 0x644666, 0x100221},
        .name = "SPACE ICECREAM",
        .author = "Rexsarus",
    },
    {
        //https://lospec.com/palette-list/nintendo-internal
        .palette = {0xd0e040, 0xa0a830, 0x607028, 0x384828},
        .name = "NINTENDO INTERNAL",
        .author = "Daniel Smith",
    },
    {
        //https://lospec.com/palette-list/mariposa-4
        .palette = {0xeacfb2, 0xc69478, 0x8a5543, 0x441d1f},
        .name = "MARIPOSA 4",
        .author = "CopheeMoth",
    },
    {
        //https://lospec.com/palette-list/hallowpumpkin
        .palette = {0xf8f088, 0xf89020, 0x602878, 0x300030},
        .name = "HALLOWEENPUMPKIN",
        .author = "WildLeoKnight",
    },
    {
        //https://lospec.com/palette-list/kirokaze-gameboy
        .palette = {0xe2f3e4, 0x94e344, 0x46878f, 0x332c50},
        .name = "KIROKAZE GB",
        .author = "Kirokaze",
    },
    {
        //https://lospec.com/palette-list/campfire-gb
        .palette = {0xd9ffd3, 0xede969, 0xde804d, 0xb33131},
        .name = "CAMPFIRE GB",
        .author = "Spicygame Studios",
    },
    {
       // https://lospec.com/palette-list/deadbeat-gb
        .palette = {0xe2e8bd, 0xaf986f, 0x9c8277, 0x6b6066},
        .name = "DEADBEAT GB",
        .author = "Piken",
    },
    {
        //https://lospec.com/palette-list/yogurt-gb
        .palette = {0xfff7dd, 0x6effbc, 0xb171ae, 0x5e315b},
        .name = "YOGURT GB",
        .author = "LudiBrolo",
    },
};

void set_palette(int pal, int invert)
{
    if(invert)
    {
        PALETTE[0] = lospec_palettes[pal].palette[0];
        PALETTE[1] = lospec_palettes[pal].palette[1];
        PALETTE[2] = lospec_palettes[pal].palette[2];
        PALETTE[3] = lospec_palettes[pal].palette[3];
    } else 
    {
        PALETTE[3] = lospec_palettes[pal].palette[0];
        PALETTE[2] = lospec_palettes[pal].palette[1];
        PALETTE[1] = lospec_palettes[pal].palette[2];
        PALETTE[0] = lospec_palettes[pal].palette[3];
    }
}